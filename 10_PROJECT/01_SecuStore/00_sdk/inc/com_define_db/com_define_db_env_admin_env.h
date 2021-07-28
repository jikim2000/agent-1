/*
 * Copyright (C) 2021-2026 ASHINi Corp. 
 * 
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public 
 * License as published by the Free Software Foundation; either 
 * version 3 of the License, or any later version. 
 * 
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public 
 * License along with this program. If not, see <https://www.gnu.org/licenses/>. 
 *
 */
#ifndef COM_DEFINE_DB_ENV_ADMIN_ENV_H_938EF200_F60B_452A_BD30_A10E8507EDCC
#define COM_DEFINE_DB_ENV_ADMIN_ENV_H_938EF200_F60B_452A_BD30_A10E8507EDCC

//-------------------------------------------------------------------
//env column class number
#define SS_ENV_ADMIN_ENV_COLUMN_CLASS_INFO_NUM				3
#define SS_ENV_ADMIN_ENV_COLUMN_CLASS_POLICY_NUM			SS_ADMIN_RIGHT_TYPE_CLASS_NUM_POLICY

//-------------------------------------------------------------------

#define SS_ENV_ADMIN_ENV_DY_COL_HOST_NAME				0x0000000000000001
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_GROUP_NAME			0x0000000000000002
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_PRI_ADDR			0x0000000000000004
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_NAT_ADDR			0x0000000000000008
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_MAC				0x0000000000000010
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_BIN_VER			0x0000000000000020
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_SYSTEM				0x0000000000000040
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_CONDATE			0x0000000000000080
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_REGDATE			0x0000000000000100
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_ID					0x0000000000000200
#define SS_ENV_ADMIN_ENV_DY_COL_HOST_GUID				0x0000000000000400

#define SS_ENV_ADMIN_ENV_DY_COL_HOST_PO_APPLY_TIME		0x0080000000000000//

#define SS_ENV_ADMIN_ENV_DY_COL_USER_NAME				0x0100000000000001
#define SS_ENV_ADMIN_ENV_DY_COL_USER_CO_ID				0x0100000000000002
#define SS_ENV_ADMIN_ENV_DY_COL_USER_CO_RANK			0x0100000000000004
#define SS_ENV_ADMIN_ENV_DY_COL_USER_CO_RESPON			0x0100000000000008
#define SS_ENV_ADMIN_ENV_DY_COL_USER_CO_PHONE			0x0100000000000010
#define SS_ENV_ADMIN_ENV_DY_COL_USER_CO_EMAIL			0x0100000000000020
#define SS_ENV_ADMIN_ENV_DY_COL_USER_HPHONE				0x0100000000000040
#define SS_ENV_ADMIN_ENV_DY_COL_USER_ACCOUNT_ID			0x0100000000000080
#define SS_ENV_ADMIN_ENV_DY_COL_USER_SRC_GROUP			0x0100000000000100

#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FAO_DRV		0x0200000000000001
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FAC_UNIT		0x0200000000000002
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_DF_RUN		0x0200000000000004
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_DF_UNIT		0x0200000000000008
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FEO_DRV		0x0200000000000010
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FELO_DRV		0x0200000000000020
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FELO_RUN		0x0200000000000040
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FELO_PTN		0x0200000000000080
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FEGB_DRV		0x0200000000000100
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FEGB_RUN		0x0200000000000200
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FEGB_PTN		0x0200000000000400
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FEGW_DRV		0x0200000000000800
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FEGW_RUN		0x0200000000001000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FEGW_PTN		0x0200000000002000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FAR_TIME		0x0200000000004000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_FAR_CNT		0x0200000000008000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_NC_LO_RUN		0x0200000000010000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_NC_LO_PTN		0x0200000000020000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_NC_BL_RUN		0x0200000000040000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_NC_BL_PTN		0x0200000000080000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_NC_WL_RUN		0x0200000000100000
#define SS_ENV_ADMIN_ENV_DY_COL_PO_STATUS_NC_WL_PTN		0x0200000000200000



//-------------------------------------------------------------------

#define SS_ENV_ADMIN_ENV_HOST_SHOW_TYPE_ALL					0x00000001


//-------------------------------------------------------------------

enum _admin_env_col_order_view_id
{
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_ORG_HOST_NORMAL = 1,
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_LOG_DEPLOY_FILE,
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_LOG_DEVICE,
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_LOG_DOC,
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_LOG_EVT,
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_LOG_EVT_HOST,
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_LOG_PATCH,
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_LOG_RS,
	SS_ENV_ADMIN_ENV_COL_ORDER_VIEW_ID_LOG_SECU,
};

//-------------------------------------------------------------------

#endif	//COM_DEFINE_DB_ENV_ADMIN_ENV_H_938EF200_F60B_452A_BD30_A10E8507EDCC