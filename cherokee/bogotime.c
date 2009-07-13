/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/* Cherokee
 *
 * Authors:
 *      Alvaro Lopez Ortega <alvaro@alobbs.com>
 *
 * Copyright (C) 2001-2009 Alvaro Lopez Ortega
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */ 

#include "common-internal.h"
#include "bogotime.h"
#include "dtm.h"
#include "util.h"

/* Global bogo time entry
 */

/* Thread safe */
volatile cherokee_msec_t cherokee_bogonow_msec;
volatile time_t          cherokee_bogonow_now;
struct timeval           cherokee_bogonow_tv;
long                     cherokee_bogonow_tzloc;

/* Thread unsafe */
struct tm                cherokee_bogonow_tmloc;
struct tm                cherokee_bogonow_tmgmt;
cherokee_buffer_t        cherokee_bogonow_strgmt;

/* Registered callbacks */
static cherokee_list_t   _callbacks;


/* Global
 */
static cherokee_boolean_t inited = false;
#ifdef HAVE_PTHREAD
static pthread_rwlock_t   lock   = PTHREAD_RWLOCK_INITIALIZER;
#endif


/* Multi-threading support
 */

void
cherokee_bogotime_lock_read (void)
{
	CHEROKEE_RWLOCK_READER (&lock);
}

void
cherokee_bogotime_release (void)
{
	CHEROKEE_RWLOCK_UNLOCK (&lock);
}


/* Functions
 */
static void
init_timezone (void)
{
	long *tz_ref;
	tz_ref = cherokee_get_timezone_ref();
	cherokee_bogonow_tzloc = - (*tz_ref / 60);
}

ret_t
cherokee_bogotime_init (void)
{
	if (inited)
		return ret_ok;

	/* Properties */
	cherokee_bogonow_now = 0;

	INIT_LIST_HEAD (&_callbacks);

	cherokee_buffer_init        (&cherokee_bogonow_strgmt);
	cherokee_buffer_ensure_size (&cherokee_bogonow_strgmt, DTM_SIZE_GMTTM_STR+2);

	/* Init time zone */
	init_timezone();

	inited = true;
	return ret_ok;
}

ret_t
cherokee_bogotime_free (void)
{
	if (! inited) {
		return ret_ok;
	}

	cherokee_list_content_free (&_callbacks, NULL);
	cherokee_buffer_mrproper (&cherokee_bogonow_strgmt);
	CHEROKEE_RWLOCK_DESTROY (&lock);

	inited = false;
	return ret_ok;
}


static ret_t
update_guts (void)
{
	int              re;
	cherokee_list_t *c;
	size_t           len = 0;

	/* Read the time
	 */
	re = gettimeofday (&cherokee_bogonow_tv, NULL);
	if (unlikely (re != 0))
		return ret_error;

	/* Update internal variables
	 */
	cherokee_bogonow_msec = ((cherokee_bogonow_tv.tv_sec * 1000) + 
				 (cherokee_bogonow_tv.tv_usec) / 1000);

	if (cherokee_bogonow_now == cherokee_bogonow_tv.tv_sec)
		return ret_ok;

	cherokee_bogonow_now = cherokee_bogonow_tv.tv_sec;

	/* Convert time to both GMT and local time struct
	 */
	cherokee_gmtime    ((const time_t *)&cherokee_bogonow_now, &cherokee_bogonow_tmgmt);
	cherokee_localtime ((const time_t *)&cherokee_bogonow_now, &cherokee_bogonow_tmloc);

	/* Regenerate the GMT string */
	cherokee_buffer_clean (&cherokee_bogonow_strgmt);
	len = cherokee_dtm_gmttm2str (cherokee_bogonow_strgmt.buf,
				      cherokee_bogonow_strgmt.size,
				      &cherokee_bogonow_tmgmt);
	cherokee_bogonow_strgmt.len = len;
	cherokee_bogonow_strgmt.buf[len] = '\0';

	/* Callbacks
	 */
	list_for_each (c, &_callbacks) {
		bogotime_callback_t func = LIST_ITEM_INFO(c);
		func();
	}

	return ret_ok;
}


ret_t
cherokee_bogotime_update (void)
{
	ret_t ret;

	CHEROKEE_RWLOCK_WRITER (&lock);
	ret = update_guts();
	CHEROKEE_RWLOCK_UNLOCK (&lock);

	return ret;
}


ret_t
cherokee_bogotime_try_update (void)
{
	ret_t ret;
	int   unlocked;

	unlocked = CHEROKEE_RWLOCK_TRYWRITER (&lock);
	if (unlocked) 
		return ret_not_found;

	ret = update_guts();
	CHEROKEE_RWLOCK_UNLOCK (&lock);

	return ret;
}


ret_t
cherokee_bogotime_add_callback (bogotime_callback_t func)
{
	ret_t ret;

	CHEROKEE_RWLOCK_WRITER (&lock);
	ret = cherokee_list_add_tail_content (&_callbacks, (void *)func);
	CHEROKEE_RWLOCK_UNLOCK (&lock);

	return ret;
}
