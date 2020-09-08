/*
 * Copyright (C) 2016 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef __DTS_IMX7D_PINFUNC_LPSR_H
#define __DTS_IMX7D_PINFUNC_LPSR_H

/*
 * The pin function ID is a tuple of
 * <mux_reg conf_reg input_reg mux_mode input_val>
 *
 * NOTE: imx7d-lpsr pin groups should be put under &iomuxc_lpsr node when used
 */

#define MX7D_PAD_LPSR_GPIO1_IO00__GPIO1_IO0			0x0000 0x0030 0x0000 0x0 0x0
#define MX7D_PAD_LPSR_GPIO1_IO00__PWM4_OUT			0x0000 0x0030 0x0000 0x1 0x0
#define MX7D_PAD_LPSR_GPIO1_IO00__WDOD1_WDOG_ANY		0x0000 0x0030 0x0000 0x2 0x0
#define MX7D_PAD_LPSR_GPIO1_IO00__WDOD1_WDOG_B			0x0000 0x0030 0x0000 0x3 0x0
#define MX7D_PAD_LPSR_GPIO1_IO00__WDOD1_WDOG__RST_B_DEB	0x0000 0x0030 0x0000 0x4 0x0
#define MX7D_PAD_LPSR_GPIO1_IO01__GPIO1_IO1			0x0004 0x0034 0x0000 0x0 0x0
#define MX7D_PAD_LPSR_GPIO1_IO01__PWM1_OUT			0x0004 0x0034 0x0000 0x1 0x0
#define MX7D_PAD_LPSR_GPIO1_IO01__CCM_ENET_REF_CLK3		0x0004 0x0034 0x0000 0x2 0x0
#define MX7D_PAD_LPSR_GPIO1_IO01__SAI1_MCLK			0x0004 0x0034 0x0000 0x3 0x0
#define MX7D_PAD_LPSR_GPIO1_IO01__ANATOP_24M_OUT		0x0004 0x0034 0x0000 0x4 0x0
#define MX7D_PAD_LPSR_GPIO1_IO01__OBSERVE0_OUT			0x0004 0x0034 0x0000 0x6 0x0
#define MX7D_PAD_LPSR_GPIO1_IO02__GPIO1_IO2			0x0008 0x0038 0x0000 0x0 0x0
#define MX7D_PAD_LPSR_GPIO1_IO02__PWM2_OUT			0x0008 0x0038 0x0000 0x1 0x0
#define MX7D_PAD_LPSR_GPIO1_IO02__CCM_ENET_REF_CLK1		0x0008 0x0038 0x0564 0x2 0x3
#define MX7D_PAD_LPSR_GPIO1_IO02__SAI2_MCLK			0x0008 0x0038 0x0000 0x3 0x0
#define MX7D_PAD_LPSR_GPIO1_IO02__CCM_CLKO1			0x0008 0x0038 0x0000 0x5 0x0
#define MX7D_PAD_LPSR_GPIO1_IO02__OBSERVE1_OUT			0x0008 0x0038 0x0000 0x6 0x0
#define MX7D_PAD_LPSR_GPIO1_IO02__USB_OTG1_ID			0x0008 0x0038 0x0734 0x7 0x3
#define MX7D_PAD_LPSR_GPIO1_IO03__GPIO1_IO3			0x000C 0x003C 0x0000 0x0 0x0
#define MX7D_PAD_LPSR_GPIO1_IO03__PWM3_OUT			0x000C 0x003C 0x0000 0x1 0x0
#define MX7D_PAD_LPSR_GPIO1_IO03__CCM_ENET_REF_CLK2		0x000C 0x003C 0x0570 0x2 0x3
#define MX7D_PAD_LPSR_GPIO1_IO03__SAI3_MCLK			0x000C 0x003C 0x0000 0x3 0x0
#define MX7D_PAD_LPSR_GPIO1_IO03__CCM_CLKO2			0x000C 0x003C 0x0000 0x5 0x0
#define MX7D_PAD_LPSR_GPIO1_IO03__OBSERVE2_OUT			0x000C 0x003C 0x0000 0x6 0x0
#define MX7D_PAD_LPSR_GPIO1_IO03__USB_OTG2_ID			0x000C 0x003C 0x0730 0x7 0x3
#define MX7D_PAD_LPSR_GPIO1_IO04__GPIO1_IO4			0x0010 0x0040 0x0000 0x0 0x0
#define MX7D_PAD_LPSR_GPIO1_IO04__USB_OTG1_OC			0x0010 0x0040 0x072C 0x1 0x1
#define MX7D_PAD_LPSR_GPIO1_IO04__FLEXTIMER1_CH4		0x0010 0x0040 0x0594 0x2 0x1
#define MX7D_PAD_LPSR_GPIO1_IO04__UART5_DCE_CTS		0x0010 0x0040 0x0000 0x3 0x0
#define MX7D_PAD_LPSR_GPIO1_IO04__UART5_DTE_RTS		0x0010 0x0040 0x0710 0x3 0x4
#define MX7D_PAD_LPSR_GPIO1_IO04__I2C1_SCL			0x0010 0x0040 0x05D4 0x4 0x2
#define MX7D_PAD_LPSR_GPIO1_IO04__OBSERVE3_OUT			0x0010 0x0040 0x0000 0x6 0x0
#define MX7D_PAD_LPSR_GPIO1_IO05__GPIO1_IO5			0x0014 0x0044 0x0000 0x0 0x0
#define MX7D_PAD_LPSR_GPIO1_IO05__USB_OTG1_PWR			0x0014 0x0044 0x0000 0x1 0x0
#define MX7D_PAD_LPSR_GPIO1_IO05__FLEXTIMER1_CH5		0x0014 0x0044 0x0598 0x2 0x1
#define MX7D_PAD_LPSR_GPIO1_IO05__UART5_DCE_RTS		0x0014 0x0044 0x0710 0x3 0x5
#define MX7D_PAD_LPSR_GPIO1_IO05__UART5_DTE_CTS		0x0014 0x0044 0x0000 0x3 0x0
#define MX7D_PAD_LPSR_GPIO1_IO05__I2C1_SDA			0x0014 0x0044 0x05D8 0x4 0x2
#define MX7D_PAD_LPSR_GPIO1_IO05__OBSERVE4_OUT			0x0014 0x0044 0x0000 0x6 0x0
#define MX7D_PAD_LPSR_GPIO1_IO06__GPIO1_IO6			0x0018 0x0048 0x0000 0x0 0x0
#define MX7D_PAD_LPSR_GPIO1_IO06__USB_OTG2_OC			0x0018 0x0048 0x0728 0x1 0x1
#define MX7D_PAD_LPSR_GPIO1_IO06__FLEXTIMER1_CH6		0x0018 0x0048 0x059C 0x2 0x1
#define MX7D_PAD_LPSR_GPIO1_IO06__UART5_DCE_RX			0x0018 0x0048 0x0714 0x3 0x4
#define MX7D_PAD_LPSR_GPIO1_IO06__UART5_DTE_TX			0x0018 0x0048 0x0000 0x3 0x0
#define MX7D_PAD_LPSR_GPIO1_IO06__I2C2_SCL			0x0018 0x0048 0x05DC 0x4 0x2
#define MX7D_PAD_LPSR_GPIO1_IO06__CCM_WAIT			0x0018 0x0048 0x0000 0x5 0x0
#define MX7D_PAD_LPSR_GPIO1_IO06__KPP_ROW4			0x0018 0x0048 0x0624 0x6 0x1
#define MX7D_PAD_LPSR_GPIO1_IO07__GPIO1_IO7			0x001C 0x004C 0x0000 0x0 0x0
#define MX7D_PAD_LPSR_GPIO1_IO07__USB_OTG2_PWR			0x001C 0x004C 0x0000 0x1 0x0
#define MX7D_PAD_LPSR_GPIO1_IO07__FLEXTIMER1_CH7		0x001C 0x004C 0x05A0 0x2 0x1
#define MX7D_PAD_LPSR_GPIO1_IO07__UART5_DCE_TX			0x001C 0x004C 0x0000 0x3 0x0
#define MX7D_PAD_LPSR_GPIO1_IO07__UART5_DTE_RX			0x001C 0x004C 0x0714 0x3 0x5
#define MX7D_PAD_LPSR_GPIO1_IO07__I2C2_SDA			0x001C 0x004C 0x05E0 0x4 0x2
#define MX7D_PAD_LPSR_GPIO1_IO07__CCM_STOP			0x001C 0x004C 0x0000 0x5 0x0
#define MX7D_PAD_LPSR_GPIO1_IO07__KPP_COL4			0x001C 0x004C 0x0604 0x6 0x1

#endif /* __DTS_IMX7D_PINFUNC_LPSR_H */
