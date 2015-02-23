#ifndef __NMP_MESSAGE_H__
#define __NMP_MESSAGE_H__

#include "nmp_msg_id_table.h"
#include "message/nmp_msg_struct.h"

#define MESSAGE_RANGE_LOWER						-1	/* {{Range lower */
#define MESSAGE_PU_REGISTER						0	/* Pu register message */
#define MESSAGE_PU_HEART						1	/* Pu keep alive message */
#define MESSAGE_CU_ONLINE						2	/* user login message */
#define MESSAGE_CU_HEART						3
#define MESSAGE_BSS_LOGIN						4
#define MESSAGE_BSS_HEART						5
#define MESSAGE_SUBMIT_ALARM					6
#define MESSAGE_CHANGED_PU_ONLINE_STATE			7
#define MESSAGE_CHANGE_DISPATCH					8

#define MESSAGE_ADD_ADMIN						9
#define MESSAGE_MODIFY_ADMIN					10
#define MESSAGE_DEL_ADMIN						11
#define MESSAGE_QUERY_ADMIN						12
#define MESSAGE_VALIDATA_ADMIN					13

#define MESSAGE_ADD_USER_GROUP					14
#define MESSAGE_MODIFY_USER_GROUP				15
#define MESSAGE_DEL_USER_GROUP					16
#define MESSAGE_QUERY_USER_GROUP				17
#define MESSAGE_VALIDATA_USER_GROUP				18

#define MESSAGE_ADD_USER						19
#define MESSAGE_MODIFY_USER						20
#define MESSAGE_DEL_USER						21
#define MESSAGE_QUERY_USER						22
#define MESSAGE_VALIDATA_USER					23

#define MESSAGE_ADD_DOMAIN						24
#define MESSAGE_MODIFY_DOMAIN					25
#define MESSAGE_DEL_DOMAIN						26
#define MESSAGE_QUERY_DOMAIN					27

#define MESSAGE_ADD_MODIFY_AREA					28
#define MESSAGE_DEL_AREA						29
#define MESSAGE_QUERY_AREA						30

#define MESSAGE_ADD_PU							31
#define MESSAGE_MODIFY_PU						32
#define MESSAGE_DEL_PU							33
#define MESSAGE_QUERY_PU						34

#define MESSAGE_ADD_GU							35
#define MESSAGE_MODIFY_GU						36
#define MESSAGE_DEL_GU							37
#define MESSAGE_QUERY_GU						38

#define MESSAGE_ADD_MDS							39
#define MESSAGE_MODIFY_MDS						40
#define MESSAGE_DEL_MDS							41
#define MESSAGE_QUERY_MDS						42

#define MESSAGE_ADD_MODIFY_MANUFACTURER			43
#define MESSAGE_DEL_MANUFACTURER				44
#define MESSAGE_QUERY_MANUFACTURER				45

#define MESSAGE_ADD_GU_TO_USER					46
#define MESSAGE_QUERY_USER_OWN_GU				47

#define MESSAGE_ADD_MDS_IP						48
#define MESSAGE_DEL_MDS_IP						49
#define MESSAGE_QUERY_MDS_IP					50

#define MESSAGE_QUERY_TIME						51
#define MESSAGE_SET_TIME						52

#define MESSAGE_GET_ALL_AREA					53
#define MESSAGE_GET_DEVICE_LIST					54
#define MESSAGE_GET_MEDIA_URL					55

#define MESSAGE_MDS_REGISTER					56	/*Mdu register message */
#define MESSAGE_MDS_HEART						57	/* Mdu keep alive message */

#define MESSAGE_GET_PLATFORM_INFO				58
#define MESSAGE_SET_PLATFORM_INFO				59
#define MESSAGE_GET_DEVICE_INFO					60
#define MESSAGE_GET_NETWORK_INFO				61
#define MESSAGE_SET_NETWORK_INFO				62
#define MESSAGE_GET_ENCODE_PARA					63
#define MESSAGE_SET_ENCODE_PARA					64
#define MESSAGE_GET_DISPLAY_PARA				65
#define MESSAGE_SET_DISPLAY_PARA				66
#define MESSAGE_GET_RECORD_PARA					67
#define MESSAGE_SET_RECORD_PARA					68
#define MESSAGE_GET_MOVE_DETECT					69
#define MESSAGE_SET_MOVE_DETECT					70
#define MESSAGE_GET_VIDEO_LOST					71
#define MESSAGE_SET_VIDEO_LOST					72
#define MESSAGE_GET_HIDE_PARA					73
#define MESSAGE_SET_HIDE_PARA					74
#define MESSAGE_GET_HIDE_ALARM					75
#define MESSAGE_SET_HIDE_ALARM					76
#define MESSAGE_GET_IO_ALARM					77
#define MESSAGE_SET_IO_ALARM					78
#define MESSAGE_GET_SERIAL_PARA					79
#define MESSAGE_SET_SERIAL_PARA					80
#define MESSAGE_GET_DEVICE_TIME					81
#define MESSAGE_SET_DEVICE_TIME					82
#define MESSAGE_GET_OSD_PARA					83
#define MESSAGE_SET_OSD_PARA					84

#define MESSAGE_GET_JOINT_PARA					85
#define MESSAGE_SET_JOINT_PARA					86

#define MESSAGE_GET_PTZ_PARA					87
#define MESSAGE_SET_PTZ_PARA					88

#define MESSAGE_CONTROL_PTZ						89

#define MESSAGE_DATABASE_BACKUP					90
#define MESSAGE_FORCE_USR_OFFLINE				91

#define MESSAGE_ADD_MSS							92
#define MESSAGE_MODIFY_MSS						93
#define MESSAGE_DEL_MSS							94
#define MESSAGE_QUERY_MSS						95

#define MESSAGE_QUERY_RECORD_POLICY				96
#define MESSAGE_RECORD_POLICY_CONFIG			97

#define MESSAGE_GET_NTP_INFO					98
#define MESSAGE_SET_NTP_INFO					99

#define MESSAGE_GET_PPPOE_INFO					100
#define MESSAGE_SET_PPPOE_INFO					101
#define MESSAGE_GET_FTP_PARA					102
#define MESSAGE_SET_FTP_PARA					103
#define MESSAGE_GET_SMTP_PARA					104
#define MESSAGE_SET_SMTP_PARA					105
#define MESSAGE_GET_UPNP_PARA					106
#define MESSAGE_SET_UPNP_PARA					107
#define MESSAGE_GET_DISK_INFO					108
#define MESSAGE_FORMAT_DISK						109
#define MESSAGE_SUBMIT_FORMAT_POS				110
#define MESSAGE_FIRMWARE_UPGRADE				111
#define MESSAGE_GET_STORE_LOG					112

#define MESSAGE_MSS_REGISTER					113	/*Mss register message */
#define MESSAGE_MSS_HEART						114	/* Mss keep alive message */
#define MESSAGE_MSS_GET_GUID					115
#define MESSAGE_MSS_GET_RECORD_POLICY			116
#define MESSAGE_MSS_GET_ROUTE					117
#define MESSAGE_MSS_RECORD_POLICY_CHANGE		118
#define MESSAGE_MSS_GET_MDS						119
#define MESSAGE_MSS_GET_MDS_IP					120
#define MESSAGE_DATABASE_IMPORT					121
#define MESSAGE_GET_ALARM						122
#define MESSAGE_GET_ALARM_STATE					123
#define MESSAGE_DEAL_ALARM						124
#define MESSAGE_CONTROL_DEVICE					125
#define MESSAGE_NOTIFY_MODIFY_DOMAIN			126
#define MESSAGE_ADD_HD_GROUP					127
#define MESSAGE_ADD_HD							128
#define MESSAGE_DEL_HD							129
#define MESSAGE_QUERY_ALL_HD_GROUP				130
#define MESSAGE_QUERY_HD_GROUP_INFO				131
#define MESSAGE_QUERY_ALL_HD					132
#define MESSAGE_DEL_HD_GROUP					133
#define MESSAGE_GET_HD_FORMAT_PROGRESS			134
#define MESSAGE_MSS_GU_LIST_CHANGE				135
#define MESSAGE_GET_GU_MSS						136
#define MESSAGE_GET_MSS_STORE_LOG				137
#define MESSAGE_ADD_DEFENCE_AREA				138
#define MESSAGE_MODIFY_DEFENCE_AREA				139
#define MESSAGE_QUERY_DEFENCE_AREA				140
#define MESSAGE_DEL_DEFENCE_AREA				141
#define MESSAGE_ADD_DEFENCE_MAP					142
#define MESSAGE_QUERY_DEFENCE_MAP				143
#define MESSAGE_DEL_DEFENCE_MAP					144
#define MESSAGE_ADD_DEFENCE_GU					145
#define MESSAGE_MODIFY_DEFENCE_GU				146
#define MESSAGE_QUERY_DEFENCE_GU				147
#define MESSAGE_DEL_DEFENCE_GU					148
#define MESSAGE_SET_MAP_HREF					149
#define MESSAGE_MODIFY_MAP_HREF					150
#define MESSAGE_QUERY_MAP_HREF					151
#define MESSAGE_DEL_MAP_HREF					152
#define MESSAGE_CHANGE_MSS						153
#define MESSAGE_GET_DEFENCE_AREA				154
#define MESSAGE_GET_DEFENCE_MAP					155
#define MESSAGE_GET_DEFENCE_GU					156
#define MESSAGE_GET_MAP_HREF					157
#define MESSAGE_GET_MDS_INFO					158
#define MESSAGE_PLATFORM_UPGRADE				159
#define MESSAGE_GET_TRANSPARENT_PARA			160
#define MESSAGE_SET_TRANSPARENT_PARA			161
#define MESSAGE_GET_DDNS_PARA					162
#define MESSAGE_SET_DDNS_PARA					163
#define MESSAGE_QUERY_ALARM						164
#define MESSAGE_DEL_ALARM						165
#define MESSAGE_QUERY_DEL_ALARM_POLICY			166
#define MESSAGE_SET_DEL_ALARM_POLICY			167
#define MESSAGE_ADD_TW							168
#define MESSAGE_MODIFY_TW						169
#define MESSAGE_DEL_TW							170
#define MESSAGE_QUERY_TW						171
#define MESSAGE_ADD_SCREEN						172
#define MESSAGE_MODIFY_SCREEN					173
#define MESSAGE_DEL_SCREEN						174
#define MESSAGE_QUERY_SCREEN					175
#define MESSAGE_QUERY_SCR_DIV					176
#define MESSAGE_GET_GU_MAP_LOCATION				177
#define MESSAGE_GET_TW							178
#define MESSAGE_GET_SCREEN						179
#define MESSAGE_GET_SCR_DIV						180
#define MESSAGE_GET_SCR_STATE					181
#define MESSAGE_CHANGE_DIV_MODE					182
#define MESSAGE_TW_PLAY_NOTIFY					183
#define MESSAGE_FULL_SCREEN						184
#define MESSAGE_EXIT_FULL_SCREEN				185
#define MESSAGE_BROADCAST_GENERAL_MSG			186
#define MESSAGE_ADD_TOUR						187
#define MESSAGE_MODIFY_TOUR						188
#define MESSAGE_DEL_TOUR						189
#define MESSAGE_QUERY_TOUR						190
#define MESSAGE_ADD_TOUR_STEP					191
#define MESSAGE_QUERY_TOUR_STEP					192

#define MESSAGE_TW_PLAY							193
#define MESSAGE_TW_RUN_STEP						194
#define MESSAGE_TW_RUN_TOUR						195
#define MESSAGE_TW_RUN_GROUP					196
#define MESSAGE_TW_STOP_TOUR					197
#define MESSAGE_TW_STOP_GROUP					198
#define MESSAGE_TW_TOUR_RUN_STATE				199
#define MESSAGE_TW_GROUP_RUN_STATE				200
#define MESSAGE_TW_STOP_DIVISION				201
#define MESSAGE_PU_GET_DIV_MODE					202
#define MESSAGE_TW_OPERATE_NOTIFY				203
#define MESSAGE_TW_CLEAR_DIVISION					204
#define MESSAGE_DEC_ONLINE_STATE_NOTIFY			205
#define MESSAGE_GET_TOUR							206
#define MESSAGE_GET_TOUR_STEP						207

#define MESSAGE_ADD_GROUP							208
#define MESSAGE_MODIFY_GROUP						209
#define MESSAGE_DEL_GROUP							210
#define MESSAGE_QUERY_GROUP						211
#define MESSAGE_ADD_GROUP_STEP					212
#define MESSAGE_MODIFY_GROUP_STEP				213
#define MESSAGE_DEL_GROUP_STEP					214
#define MESSAGE_QUERY_GROUP_STEP					215
#define MESSAGE_CONFIG_GROUP_STEP				216
#define MESSAGE_MODIFY_GROUP_STEP_INFO			217
#define MESSAGE_DEL_GROUP_STEP_INFO				218
#define MESSAGE_QUERY_GROUP_STEP_INFO			219
#define MESSAGE_GET_GROUP							220
#define MESSAGE_GET_NETINTERFACE_CONFIG			221
#define MESSAGE_GET_NETWORK_CONFIG				222
#define MESSAGE_SET_NETWORK_CONFIG				223

#define MESSAGE_GET_PRESET_POINT					224
#define MESSAGE_SET_PRESET_POINT					225
#define MESSAGE_GET_CRUISE_WAY_SET				226
#define MESSAGE_GET_CRUISE_WAY					227
#define MESSAGE_ADD_CRUISE_WAY					228
#define MESSAGE_MODIFY_CRUISE_WAY				229
#define MESSAGE_SET_CRUISE_WAY					230
#define MESSAGE_3D_CONTROL						231

#define MESSAGE_AMS_REGISTER					232	/*Ams register message */
#define MESSAGE_AMS_HEART						233	/* Ams keep alive message */
#define MESSAGE_LINK_TIME_POLICY_CONFIG		234
#define MESSAGE_MODIFY_LINK_TIME_POLICY		235
#define MESSAGE_QUERY_LINK_TIME_POLICY		236
#define MESSAGE_DEL_LINK_TIME_POLICY			237
#define MESSAGE_LINK_RECORD_CONFIG			238
#define MESSAGE_MODIFY_LINK_RECORD			239
#define MESSAGE_QUERY_LINK_RECORD			240
#define MESSAGE_DEL_LINK_RECORD				241
#define MESSAGE_ALARM_LINK_RECORD			242
#define MESSAGE_QUERY_SERVER_RESOURCE		243
#define MESSAGE_GET_LICENSE_INFO				244
#define MESSAGE_LINK_STEP_CONFIG			245
#define MESSAGE_MODIFY_LINK_STEP			246
#define MESSAGE_QUERY_LINK_STEP			247
#define MESSAGE_DEL_LINK_STEP				248
#define MESSAGE_ALARM_LINK_STEP			249
#define MESSAGE_SEARCH_PU					250
#define MESSAGE_GET_SEARCH_PUS			251
#define MESSAGE_QUERY_CMS_ALL_IP			252
#define MESSAGE_AUTO_ADD_PU				253
#define MESSAGE_GET_NEXT_PUNO				254
#define MESSAGE_GET_INIT_NAME				255
#define MESSAGE_SET_INIT_NAME				256
#define MESSAGE_GET_IPSAN_INFO			257
#define MESSAGE_ADD_ONE_IPSAN				258
#define MESSAGE_DELETE_ONE_IPSAN			259
#define MESSAGE_GET_ONE_IPSAN				260
#define MESSAGE_QUERY_TW_AUTH_INFO		261   //bss
#define MESSAGE_GET_TW_AUTH_INFO			262   //cu
#define MESSAGE_QUERY_GU_RECORD_STATUS		263
#define MESSAGE_GET_AREA_DEVICE_INFO			264
#define MESSAGE_GET_AREA_INFO				265
#define MESSAGE_LINK_IO_CONFIG			266
#define MESSAGE_MODIFY_LINK_IO			267
#define MESSAGE_QUERY_LINK_IO				268
#define MESSAGE_DEL_LINK_IO				269
#define MESSAGE_ALARM_LINK_IO			270
#define MESSAGE_LINK_SNAPSHOT_CONFIG			271
#define MESSAGE_MODIFY_LINK_SNAPSHOT			272
#define MESSAGE_QUERY_LINK_SNAPSHOT			273
#define MESSAGE_DEL_LINK_SNAPSHOT				274
#define MESSAGE_ALARM_LINK_SNAPSHOT			275
#define MESSAGE_REBOOT_MSS					276
#define MESSAGE_GET_RESOLUTION_INFO			277
#define MESSAGE_SET_RESOLUTION_INFO			278
#define MESSAGE_GET_IRCUTCONTROL_INFO		279
#define MESSAGE_SET_IRCUTCONTROL_INFO		280
#define MESSAGE_LINK_PRESET_CONFIG			281
#define MESSAGE_MODIFY_LINK_PRESET			282
#define MESSAGE_QUERY_LINK_PRESET				283
#define MESSAGE_DEL_LINK_PRESET				284
#define MESSAGE_ALARM_LINK_PRESET			285
#define MESSAGE_3D_GOBACK						286
#define MESSAGE_LINK_TOUR_CONFIG			287
#define MESSAGE_MODIFY_LINK_TOUR			288
#define MESSAGE_QUERY_LINK_TOUR			289
#define MESSAGE_DEL_LINK_TOUR				290
#define MESSAGE_ALARM_LINK_TOUR			291
#define MESSAGE_LINK_GROUP_CONFIG			292
#define MESSAGE_MODIFY_LINK_GROUP			293
#define MESSAGE_QUERY_LINK_GROUP			294
#define MESSAGE_DEL_LINK_GROUP				295
#define MESSAGE_ALARM_LINK_GROUP			296
#define MESSAGE_QUERY_LOG					297
#define MESSAGE_QUERY_ALARM_LINK_AUTH_INFO		298   //bss
#define MESSAGE_ADD_TW_TO_USER					299
#define MESSAGE_QUERY_USER_OWN_TW				300
#define MESSAGE_ADD_TOUR_TO_USER					301
#define MESSAGE_QUERY_USER_OWN_TOUR				302
#define MESSAGE_QUERY_GROUP_STEP_DIV				303
#define MESSAGE_QUERY_AREA_DEV_ONLINE_RATE				304
#define MESSAGE_LINK_MAP_CONFIG			305
#define MESSAGE_MODIFY_LINK_MAP			306
#define MESSAGE_QUERY_LINK_MAP			307
#define MESSAGE_DEL_LINK_MAP			308
#define MESSAGE_VALIDATA_GU_MAP				309
#define MESSAGE_ALARM_LINK_MAP			310
#define MESSAGE_CU_MODIFY_USER_PWD		311
#define MESSAGE_ADD_IVS							312
#define MESSAGE_MODIFY_IVS						313
#define MESSAGE_DEL_IVS							314
#define MESSAGE_QUERY_IVS						315
#define MESSAGE_IVS_REGISTER					316	/*Ivs register message */
#define MESSAGE_IVS_HEART						317	/* Ivs keep alive message */
#define MESSAGE_GET_SERVER_FLAG				318
#define MESSAGE_GET_MDS_CONFIG				319
#define MESSAGE_SET_MDS_CONFIG				320
#define MESSAGE_GET_MDS_STATE					321
#define MESSAGE_GET_MSS_CONFIG				322
#define MESSAGE_SET_MSS_CONFIG				323
#define MESSAGE_GET_MSS_STATE					324
#define MESSAGE_GET_IVS_CONFIG				325
#define MESSAGE_SET_IVS_CONFIG				326
#define MESSAGE_GET_IVS_STATE					327
#define MESSAGE_CMS_SHUTDOWN					328
#define MESSAGE_CMS_REBOOT					329
#define MESSAGE_ADD_AMS						330
#define MESSAGE_MODIFY_AMS					331
#define MESSAGE_DEL_AMS						332
#define MESSAGE_QUERY_AMS						333
#define MESSAGE_QUERY_AMS_PU					334
#define MESSAGE_MODIFY_AMS_PU				335
#define MESSAGE_AMS_DEVICE_INFO_CHANGE		336
#define MESSAGE_AMS_GET_DEVICE_INFO			337
#define MESSAGE_GET_DEF_DISPLAY_PARA			338
#define MESSAGE_QUERY_GUID					339
#define MESSAGE_QUERY_SCREEN_ID				340
#define MESSAGE_QUERY_USER_GUIDS				341
#define MESSAGE_SET_USER_GUIDS				342
#define MESSAGE_SET_SCREEN_NUM				343
#define MESSAGE_QUERY_TOUR_ID					344
#define MESSAGE_SET_TOUR_NUM					345
#define MESSAGE_QUERY_GROUP_ID				346
#define MESSAGE_SET_GROUP_NUM				347


#define MSG_INTERNAL_BASE						384	/* Base number of internal Msg */


#endif	//__NMP_MESSAGE_H__