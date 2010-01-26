/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/* Cherokee
 *
 * Authors:
 *      Alvaro Lopez Ortega <alvaro@alobbs.com>
 *
 * Copyright (C) 2001-2010 Alvaro Lopez Ortega
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

/* NOTE: File automatically generated (from  error_list.py). */

#define CHEROKEE_ERROR_PROXY_HEADER_PARSE              0
#define CHEROKEE_ERROR_SOURCE_NONBLOCK                 1
#define CHEROKEE_ERROR_RRD_NO_BINARY                   2
#define CHEROKEE_ERROR_RRD_EXECV                       3
#define CHEROKEE_ERROR_RRD_FORK                        4
#define CHEROKEE_ERROR_RRD_WRITE                       5
#define CHEROKEE_ERROR_RRD_MKDIR_WRITE                 6
#define CHEROKEE_ERROR_BALANCER_IP_REACTIVE            7
#define CHEROKEE_ERROR_BALANCER_IP_DISABLE             8
#define CHEROKEE_ERROR_BALANCER_IP_EXHAUSTED           9
#define CHEROKEE_ERROR_RESOLVE_TIMEOUT                 10
#define CHEROKEE_ERROR_VALIDATOR_AUTHLIST_USER         11
#define CHEROKEE_ERROR_VALIDATOR_AUTHLIST_PASSWORD     12
#define CHEROKEE_ERROR_VALIDATOR_AUTHLIST_EMPTY        13
#define CHEROKEE_ERROR_VALIDATOR_PAM_DELAY             14
#define CHEROKEE_ERROR_VALIDATOR_PAM_AUTH              15
#define CHEROKEE_ERROR_VALIDATOR_PAM_ACCOUNT           16
#define CHEROKEE_ERROR_VALIDATOR_LDAP_KEY              17
#define CHEROKEE_ERROR_VALIDATOR_LDAP_PROPERTY         18
#define CHEROKEE_ERROR_VALIDATOR_LDAP_SECURITY         19
#define CHEROKEE_ERROR_VALIDATOR_LDAP_CONNECT          20
#define CHEROKEE_ERROR_VALIDATOR_LDAP_V3               21
#define CHEROKEE_ERROR_VALIDATOR_LDAP_CA               22
#define CHEROKEE_ERROR_VALIDATOR_LDAP_STARTTLS         23
#define CHEROKEE_ERROR_VALIDATOR_LDAP_BIND             24
#define CHEROKEE_ERROR_VALIDATOR_LDAP_SEARCH           25
#define CHEROKEE_ERROR_VALIDATOR_FILE                  26
#define CHEROKEE_ERROR_VALIDATOR_FILE_NO_FILE          27
#define CHEROKEE_ERROR_VALIDATOR_METHOD_UNKNOWN        28
#define CHEROKEE_ERROR_ADMIN_CLIENT_INTERNAL           29
#define CHEROKEE_ERROR_ADMIN_CLIENT_BAD_RESPONSE       30
#define CHEROKEE_ERROR_ADMIN_CLIENT_LITERAL            31
#define CHEROKEE_ERROR_HANDLER_REGEX_GROUPS            32
#define CHEROKEE_ERROR_HANDLER_NO_BALANCER             33
#define CHEROKEE_ERROR_HANDLER_SECDOWN_SECRET          34
#define CHEROKEE_ERROR_HANDLER_SRV_INFO_MOD            35
#define CHEROKEE_ERROR_HANDLER_SRV_INFO_TYPE           36
#define CHEROKEE_ERROR_HANDLER_FILE_TIME_PARSE         37
#define CHEROKEE_ERROR_HANDLER_SSI_PROPERTY            38
#define CHEROKEE_ERROR_HANDLER_FCGI_VERSION            39
#define CHEROKEE_ERROR_HANDLER_FCGI_PARSING            40
#define CHEROKEE_ERROR_HANDLER_FCGI_STDERR             41
#define CHEROKEE_ERROR_HANDLER_FCGI_BALANCER           42
#define CHEROKEE_ERROR_HANDLER_ERROR_REDIR_CODE        43
#define CHEROKEE_ERROR_HANDLER_ERROR_REDIR_URL         44
#define CHEROKEE_ERROR_HANDLER_DIRLIST_THEME           45
#define CHEROKEE_ERROR_HANDLER_DIRLIST_BAD_THEME       46
#define CHEROKEE_ERROR_HANDLER_POST_REPORT_LANG        47
#define CHEROKEE_ERROR_HANDLER_DBSLAYER_LANG           48
#define CHEROKEE_ERROR_HANDLER_DBSLAYER_BALANCER       49
#define CHEROKEE_ERROR_HANDLER_CUSTOM_ERROR_HTTP       50
#define CHEROKEE_ERROR_HANDLER_CGI_SET_PROP            51
#define CHEROKEE_ERROR_HANDLER_CGI_SETID               52
#define CHEROKEE_ERROR_HANDLER_CGI_EXECUTE             53
#define CHEROKEE_ERROR_HANDLER_CGI_CREATEPROCESS       54
#define CHEROKEE_ERROR_HANDLER_CGI_GET_HOSTNAME        55
#define CHEROKEE_ERROR_CONFIG_ENTRY_BAD_TYPE           56
#define CHEROKEE_ERROR_BALANCER_EMPTY                  57
#define CHEROKEE_ERROR_BALANCER_UNDEFINED              58
#define CHEROKEE_ERROR_BALANCER_NO_KEY                 59
#define CHEROKEE_ERROR_BALANCER_BAD_SOURCE             60
#define CHEROKEE_ERROR_BALANCER_ONLINE_SOURCE          61
#define CHEROKEE_ERROR_BALANCER_OFFLINE_SOURCE         62
#define CHEROKEE_ERROR_BALANCER_EXHAUSTED              63
#define CHEROKEE_ERROR_ENCODER_DEFLATEINIT2            64
#define CHEROKEE_ERROR_ENCODER_DEFLATEEND              65
#define CHEROKEE_ERROR_ENCODER_DEFLATE                 66
#define CHEROKEE_ERROR_LOGGER_NO_KEY                   67
#define CHEROKEE_ERROR_LOGGER_NO_WRITER                68
#define CHEROKEE_ERROR_LOGGER_WRITER_UNKNOWN           69
#define CHEROKEE_ERROR_LOGGER_WRITER_READ              70
#define CHEROKEE_ERROR_LOGGER_WRITER_APPEND            71
#define CHEROKEE_ERROR_LOGGER_WRITER_ALLOC             72
#define CHEROKEE_ERROR_LOGGER_WRITER_PIPE              73
#define CHEROKEE_ERROR_LOGGER_WRITER_FORK              74
#define CHEROKEE_ERROR_LOGGER_X_REAL_IP_PARSE          75
#define CHEROKEE_ERROR_LOGGER_CUSTOM_NO_TEMPLATE       76
#define CHEROKEE_ERROR_LOGGER_CUSTOM_TEMPLATE          77
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CTL_ADD            78
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CTL_DEL            79
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CTL_MOD            80
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CREATE             81
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CLOEXEC            82
#define CHEROKEE_ERROR_FDPOLL_PORTS_FD_ASSOCIATE       83
#define CHEROKEE_ERROR_FDPOLL_PORTS_ASSOCIATE          84
#define CHEROKEE_ERROR_FDPOLL_PORTS_GETN               85
#define CHEROKEE_ERROR_FDPOLL_POLL_FULL                86
#define CHEROKEE_ERROR_FDPOLL_POLL_DEL                 87
#define CHEROKEE_ERROR_FDPOLL_KQUEUE                   88
#define CHEROKEE_ERROR_GEN_EVHOST_TPL_DROOT            89
#define CHEROKEE_ERROR_GEN_EVHOST_PARSE                90
#define CHEROKEE_ERROR_VRULE_NO_PROPERTY               91
#define CHEROKEE_ERROR_VRULE_TARGET_IP_PARSE           92
#define CHEROKEE_ERROR_VRULE_REHOST_NO_DOMAIN          93
#define CHEROKEE_ERROR_RULE_NO_PROPERTY                94
#define CHEROKEE_ERROR_RULE_REQUEST_NO_TABLE           95
#define CHEROKEE_ERROR_RULE_REQUEST_NO_PCRE_PTR        96
#define CHEROKEE_ERROR_RULE_METHOD_UNKNOWN             97
#define CHEROKEE_ERROR_RULE_HEADER_UNKNOWN             98
#define CHEROKEE_ERROR_RULE_FROM_ENTRY                 99
#define CHEROKEE_ERROR_RULE_BIND_PORT                  100
#define CHEROKEE_ERROR_SERVER_GROUP_NOT_FOUND          101
#define CHEROKEE_ERROR_SERVER_USER_NOT_FOUND           102
#define CHEROKEE_ERROR_SERVER_THREAD_IGNORE            103
#define CHEROKEE_ERROR_SERVER_THREAD_POLICY            104
#define CHEROKEE_ERROR_SERVER_TOKEN                    105
#define CHEROKEE_ERROR_SERVER_POLLING_UNRECOGNIZED     106
#define CHEROKEE_ERROR_SERVER_POLLING_UNSUPPORTED      107
#define CHEROKEE_ERROR_SERVER_POLLING_UNKNOWN          108
#define CHEROKEE_ERROR_SERVER_NO_BIND                  109
#define CHEROKEE_ERROR_SERVER_IGNORE_TLS               110
#define CHEROKEE_ERROR_SERVER_TLS_DEFAULT              111
#define CHEROKEE_ERROR_SERVER_NO_CRYPTOR               112
#define CHEROKEE_ERROR_SERVER_PARSE                    113
#define CHEROKEE_ERROR_SERVER_INITGROUPS               114
#define CHEROKEE_ERROR_SERVER_SETGID                   115
#define CHEROKEE_ERROR_SERVER_SETUID                   116
#define CHEROKEE_ERROR_SERVER_GET_FDLIMIT              117
#define CHEROKEE_ERROR_SERVER_FDS_SYS_LIMIT            118
#define CHEROKEE_ERROR_SERVER_THREAD_POLL              119
#define CHEROKEE_ERROR_SERVER_NEW_THREAD               120
#define CHEROKEE_ERROR_SERVER_TLS_INIT                 121
#define CHEROKEE_ERROR_SERVER_FD_SET                   122
#define CHEROKEE_ERROR_SERVER_FD_GET                   123
#define CHEROKEE_ERROR_SERVER_LOW_FD_LIMIT             124
#define CHEROKEE_ERROR_SERVER_UID_GET                  125
#define CHEROKEE_ERROR_SERVER_CHROOT                   126
#define CHEROKEE_ERROR_SERVER_CHDIR                    127
#define CHEROKEE_ERROR_SERVER_SOURCE                   128
#define CHEROKEE_ERROR_SERVER_SOURCE_TYPE              129
#define CHEROKEE_ERROR_SERVER_SOURCE_TYPE_UNKNOWN      130
#define CHEROKEE_ERROR_SERVER_VSERVER_PRIO             131
#define CHEROKEE_ERROR_SERVER_NO_VSERVERS              132
#define CHEROKEE_ERROR_SERVER_NO_DEFAULT_VSERVER       133
#define CHEROKEE_ERROR_SERVER_FORK                     134
#define CHEROKEE_ERROR_SERVER_PANIC                    135
#define CHEROKEE_ERROR_SRC_INTER_NO_USER               136
#define CHEROKEE_ERROR_SRC_INTER_NO_GROUP              137
#define CHEROKEE_ERROR_SRC_INTER_EMPTY_INTERPRETER     138
#define CHEROKEE_ERROR_SRC_INTER_NO_INTERPRETER        139
#define CHEROKEE_ERROR_SRC_INTER_SPAWN                 140
#define CHEROKEE_ERROR_CONF_READ_ACCESS_FILE           141
#define CHEROKEE_ERROR_CONF_READ_CHILDREN_SAME_NODE    142
#define CHEROKEE_ERROR_CONF_READ_PARSE                 143
#define CHEROKEE_ERROR_TEMPLATE_NO_TOKEN               144
#define CHEROKEE_ERROR_SPAWNER_SHM_INIT                145
#define CHEROKEE_ERROR_SPAWNER_UNLOCK_SEMAPHORE        146
#define CHEROKEE_ERROR_HTTP_UNKNOWN_CODE               147
#define CHEROKEE_ERROR_ICONS_NO_DEFAULT                148
#define CHEROKEE_ERROR_ICONS_ASSIGN_SUFFIX             149
#define CHEROKEE_ERROR_ICONS_DUP_SUFFIX                150
#define CHEROKEE_ERROR_HEADER_EMPTY                    151
#define CHEROKEE_ERROR_HEADER_NO_EOH                   152
#define CHEROKEE_ERROR_HEADER_TOO_MANY_CRLF            153
#define CHEROKEE_ERROR_HEADER_ADD_HEADER               154
#define CHEROKEE_ERROR_SOCKET_NEW_SOCKET               155
#define CHEROKEE_ERROR_SOCKET_SET_KEEPALIVE            156
#define CHEROKEE_ERROR_SOCKET_SET_LINGER               157
#define CHEROKEE_ERROR_SOCKET_RM_NAGLES                158
#define CHEROKEE_ERROR_SOCKET_NON_BLOCKING             159
#define CHEROKEE_ERROR_SOCKET_NO_SOCKET                160
#define CHEROKEE_ERROR_SOCKET_REMOVE                   161
#define CHEROKEE_ERROR_SOCKET_WRITE                    162
#define CHEROKEE_ERROR_SOCKET_READ                     163
#define CHEROKEE_ERROR_SOCKET_WRITEV                   164
#define CHEROKEE_ERROR_SOCKET_CONNECT                  165
#define CHEROKEE_ERROR_SOCKET_BAD_FAMILY               166
#define CHEROKEE_ERROR_SOCKET_SET_NODELAY              167
#define CHEROKEE_ERROR_SOCKET_RM_NODELAY               168
#define CHEROKEE_ERROR_SOCKET_SET_CORK                 169
#define CHEROKEE_ERROR_SOCKET_RM_CORK                  170
#define CHEROKEE_ERROR_THREAD_RM_FD_POLL               171
#define CHEROKEE_ERROR_THREAD_HANDLER_RET              172
#define CHEROKEE_ERROR_THREAD_OUT_OF_FDS               173
#define CHEROKEE_ERROR_THREAD_GET_CONN_OBJ             174
#define CHEROKEE_ERROR_THREAD_SET_SOCKADDR             175
#define CHEROKEE_ERROR_CONNECTION_AUTH                 176
#define CHEROKEE_ERROR_CONNECTION_LOCAL_DIR            177
#define CHEROKEE_ERROR_CONNECTION_GET_VSERVER          178
#define CHEROKEE_ERROR_NCPUS_PSTAT                     179
#define CHEROKEE_ERROR_NCPUS_HW_NCPU                   180
#define CHEROKEE_ERROR_NCPUS_SYSCONF                   181
#define CHEROKEE_ERROR_INIT_CPU_NUMBER                 182
#define CHEROKEE_ERROR_INIT_GET_FD_LIMIT               183
#define CHEROKEE_ERROR_UTIL_F_GETFL                    184
#define CHEROKEE_ERROR_UTIL_F_SETFL                    185
#define CHEROKEE_ERROR_UTIL_F_GETFD                    186
#define CHEROKEE_ERROR_UTIL_F_SETFD                    187
#define CHEROKEE_ERROR_UTIL_MKDIR                      188
#define CHEROKEE_ERROR_AVL_PREVIOUS                    189
#define CHEROKEE_ERROR_AVL_NEXT                        190
#define CHEROKEE_ERROR_AVL_BALANCE                     191
#define CHEROKEE_ERROR_BUFFER_NEG_ESTIMATION           192
#define CHEROKEE_ERROR_BUFFER_NO_SPACE                 193
#define CHEROKEE_ERROR_BUFFER_BAD_ESTIMATION           194
#define CHEROKEE_ERROR_BUFFER_AVAIL_SIZE               195
#define CHEROKEE_ERROR_BUFFER_OPEN_FILE                196
#define CHEROKEE_ERROR_BUFFER_READ_FILE                197
#define CHEROKEE_ERROR_PLUGIN_LOAD_NO_SYM              198
#define CHEROKEE_ERROR_PLUGIN_DLOPEN                   199
#define CHEROKEE_ERROR_PLUGIN_NO_INIT                  200
#define CHEROKEE_ERROR_PLUGIN_NO_OPEN                  201
#define CHEROKEE_ERROR_PLUGIN_NO_INFO                  202
#define CHEROKEE_ERROR_VSERVER_BAD_METHOD              203
#define CHEROKEE_ERROR_VSERVER_TIME_MISSING            204
#define CHEROKEE_ERROR_VSERVER_RULE_UNKNOWN_KEY        205
#define CHEROKEE_ERROR_VSERVER_TYPE_MISSING            206
#define CHEROKEE_ERROR_VSERVER_LOAD_MODULE             207
#define CHEROKEE_ERROR_VSERVER_BAD_PRIORITY            208
#define CHEROKEE_ERROR_VSERVER_RULE_MATCH_MISSING      209
#define CHEROKEE_ERROR_VSERVER_MATCH_MISSING           210
#define CHEROKEE_ERROR_VSERVER_UNKNOWN_KEY             211
#define CHEROKEE_ERROR_VSERVER_NICK_MISSING            212
#define CHEROKEE_ERROR_VSERVER_DROOT_MISSING           213
#define CHEROKEE_ERROR_REGEX_COMPILATION               214
#define CHEROKEE_ERROR_ACCESS_IPV4_MAPPED              215
#define CHEROKEE_ERROR_ACCESS_INVALID_IP               216
#define CHEROKEE_ERROR_ACCESS_INVALID_MASK             217
#define CHEROKEE_ERROR_BIND_PORT_NEEDED                218
#define CHEROKEE_ERROR_BIND_COULDNT_BIND_PORT          219
#define CHEROKEE_ERROR_HANDLER_RENDER_RRD_EXEC         220
#define CHEROKEE_ERROR_HANDLER_RENDER_RRD_EMPTY_REPLY  221
#define CHEROKEE_ERROR_HANDLER_RENDER_RRD_MSG          222
#define CHEROKEE_ERROR_HANDLER_RENDER_RRD_INVALID_REQ  223
#define CHEROKEE_ERROR_COLLECTOR_COMMAND_EXEC          224
#define CHEROKEE_ERROR_COLLECTOR_NEW_THREAD            225
#define CHEROKEE_ERROR_COLLECTOR_NEW_MUTEX             226
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_HASH            227
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_KEY             228
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_USER            229
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_DATABASE        230
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_QUERY           231
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_SOURCE          232
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_NOCONN          233
#define CHEROKEE_ERROR_ERRORLOG_PARAM                  234
#define CHEROKEE_ERROR_SSL_SOCKET                      235
#define CHEROKEE_ERROR_SSL_SRV_MATCH                   236
#define CHEROKEE_ERROR_SSL_CHANGE_CTX                  237
#define CHEROKEE_ERROR_SSL_ALLOCATE_CTX                238
#define CHEROKEE_ERROR_SSL_CIPHER                      239
#define CHEROKEE_ERROR_SSL_CERTIFICATE                 240
#define CHEROKEE_ERROR_SSL_KEY                         241
#define CHEROKEE_ERROR_SSL_KEY_MATCH                   242
#define CHEROKEE_ERROR_SSL_CA_READ                     243
#define CHEROKEE_ERROR_SSL_CA_LOAD                     244
#define CHEROKEE_ERROR_SSL_SESSION_ID                  245
#define CHEROKEE_ERROR_SSL_SNI                         246
#define CHEROKEE_ERROR_SSL_CONNECTION                  247
#define CHEROKEE_ERROR_SSL_FD                          248
#define CHEROKEE_ERROR_SSL_INIT                        249
#define CHEROKEE_ERROR_SSL_SW_DEFAULT                  250
#define CHEROKEE_ERROR_SSL_SW_ERROR                    251
#define CHEROKEE_ERROR_SSL_SR_DEFAULT                  252
#define CHEROKEE_ERROR_SSL_SR_ERROR                    253
#define CHEROKEE_ERROR_SSL_CREATE_CTX                  254
#define CHEROKEE_ERROR_SSL_CTX_LOAD                    255
#define CHEROKEE_ERROR_SSL_CTX_SET                     256
#define CHEROKEE_ERROR_SSL_SNI_SRV                     257
#define CHEROKEE_ERROR_SSL_CONNECT                     258
#define CHEROKEE_ERROR_SSL_PKCS11                      259
#define CHEROKEE_ERROR_SSL_DEFAULTS                    260
