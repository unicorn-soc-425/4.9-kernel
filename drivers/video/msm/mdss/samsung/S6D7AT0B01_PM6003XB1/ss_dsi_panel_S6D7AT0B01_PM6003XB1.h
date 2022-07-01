/*
 * =================================================================
 *
 *
 *	Description:  samsung display panel file
 *
 *	Author: jb09.kim
 *	Company:  Samsung Electronics
 *
 * ================================================================
 */
/*
<one line to give the program's name and a brief idea of what it does.>
Copyright (C) 2012, Samsung Electronics. All rights reserved.

*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
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
 *
*/
#ifndef SS_DSI_PANEL_S6D7AT0B01_PM6003XB1
#define SS_DSI_PANEL_S6D7AT0B01_PM6003XB1

#include "../ss_dsi_panel_common.h"
#include "../ss_regulator_common.h"
#include <linux/bitops.h>

#define S6D7AT0B01_PM6003XB1_SUPPORT_PANEL_COUNT 1
#define LCD_DEFAUL_BL_LEVEL 139

extern int lm3632a_panel_power(struct mdss_dsi_ctrl_pdata *ctrl, int enable);

#endif
