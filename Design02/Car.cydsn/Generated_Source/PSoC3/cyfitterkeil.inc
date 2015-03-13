#ifndef INCLUDED_CYFITTERKEIL_INC
#define INCLUDED_CYFITTERKEIL_INC
$INCLUDE (cydevicekeil.inc)
$INCLUDE (cydevicekeil_trm.inc)

; LCD_LCDPort
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

; PWM_CLK
PWM_CLK__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
PWM_CLK__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
PWM_CLK__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
PWM_CLK__CFG2_SRC_SEL_MASK EQU 0x07
PWM_CLK__INDEX EQU 0x01
PWM_CLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
PWM_CLK__PM_ACT_MSK EQU 0x02
PWM_CLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
PWM_CLK__PM_STBY_MSK EQU 0x02

; PWM_OUT_PIN
PWM_OUT_PIN__0__MASK EQU 0x80
PWM_OUT_PIN__0__PC EQU CYREG_PRT4_PC7
PWM_OUT_PIN__0__PORT EQU 4
PWM_OUT_PIN__0__SHIFT EQU 7
PWM_OUT_PIN__AG EQU CYREG_PRT4_AG
PWM_OUT_PIN__AMUX EQU CYREG_PRT4_AMUX
PWM_OUT_PIN__BIE EQU CYREG_PRT4_BIE
PWM_OUT_PIN__BIT_MASK EQU CYREG_PRT4_BIT_MASK
PWM_OUT_PIN__BYP EQU CYREG_PRT4_BYP
PWM_OUT_PIN__CTL EQU CYREG_PRT4_CTL
PWM_OUT_PIN__DM0 EQU CYREG_PRT4_DM0
PWM_OUT_PIN__DM1 EQU CYREG_PRT4_DM1
PWM_OUT_PIN__DM2 EQU CYREG_PRT4_DM2
PWM_OUT_PIN__DR EQU CYREG_PRT4_DR
PWM_OUT_PIN__INP_DIS EQU CYREG_PRT4_INP_DIS
PWM_OUT_PIN__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
PWM_OUT_PIN__LCD_EN EQU CYREG_PRT4_LCD_EN
PWM_OUT_PIN__MASK EQU 0x80
PWM_OUT_PIN__PORT EQU 4
PWM_OUT_PIN__PRT EQU CYREG_PRT4_PRT
PWM_OUT_PIN__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
PWM_OUT_PIN__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
PWM_OUT_PIN__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
PWM_OUT_PIN__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
PWM_OUT_PIN__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
PWM_OUT_PIN__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
PWM_OUT_PIN__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
PWM_OUT_PIN__PS EQU CYREG_PRT4_PS
PWM_OUT_PIN__SHIFT EQU 7
PWM_OUT_PIN__SLW EQU CYREG_PRT4_SLW

; PWM_PWMUDB
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB02_03_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB02_03_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
PWM_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB02_CTL
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB02_ST_CTL
PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB02_CTL
PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB02_ST_CTL
PWM_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB02_MSK
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB02_03_A0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB02_03_A1
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB02_03_D0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB02_03_D1
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB02_03_F0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB02_03_F1
PWM_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB02_A0_A1
PWM_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B0_UDB02_A0
PWM_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B0_UDB02_A1
PWM_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB02_D0_D1
PWM_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B0_UDB02_D0
PWM_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B0_UDB02_D1
PWM_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
PWM_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB02_F0_F1
PWM_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B0_UDB02_F0
PWM_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B0_UDB02_F1
PWM_PWMUDB_sP16_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
PWM_PWMUDB_sP16_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB03_04_A0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB03_04_A1
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB03_04_D0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB03_04_D1
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB03_04_F0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB03_04_F1
PWM_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B0_UDB03_A0_A1
PWM_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B0_UDB03_A0
PWM_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B0_UDB03_A1
PWM_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B0_UDB03_D0_D1
PWM_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B0_UDB03_D0
PWM_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B0_UDB03_D1
PWM_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
PWM_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B0_UDB03_F0_F1
PWM_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B0_UDB03_F0
PWM_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B0_UDB03_F1

; HE_ISR
HE_ISR__ES2_PATCH EQU 0
HE_ISR__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN0
HE_ISR__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD0
HE_ISR__INTC_MASK EQU 0x01
HE_ISR__INTC_NUMBER EQU 0
HE_ISR__INTC_PRIOR_NUM EQU 7
HE_ISR__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR0
HE_ISR__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN0
HE_ISR__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD0
HE_ISR__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x00)

; HE_TIMER_CLK
HE_TIMER_CLK__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
HE_TIMER_CLK__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
HE_TIMER_CLK__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
HE_TIMER_CLK__CFG2_SRC_SEL_MASK EQU 0x07
HE_TIMER_CLK__INDEX EQU 0x00
HE_TIMER_CLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
HE_TIMER_CLK__PM_ACT_MSK EQU 0x01
HE_TIMER_CLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
HE_TIMER_CLK__PM_STBY_MSK EQU 0x01

; HE_TIMER_TimerUDB
HE_TIMER_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
HE_TIMER_TimerUDB_rstSts_stsreg__0__POS EQU 0
HE_TIMER_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
HE_TIMER_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG EQU CYREG_B1_UDB07_08_ST
HE_TIMER_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
HE_TIMER_TimerUDB_rstSts_stsreg__2__POS EQU 2
HE_TIMER_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
HE_TIMER_TimerUDB_rstSts_stsreg__3__POS EQU 3
HE_TIMER_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
HE_TIMER_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_B1_UDB07_MSK
HE_TIMER_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
HE_TIMER_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_B1_UDB07_ST
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB05_06_CTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB05_06_CTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB05_06_CTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB05_06_CTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB05_06_MSK
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB05_06_MSK
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB05_06_MSK
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB05_06_MSK
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB05_CTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB05_ST_CTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_B1_UDB05_CTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB05_ST_CTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
HE_TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB05_MSK
HE_TIMER_TimerUDB_sT32_timerdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB04_05_A0
HE_TIMER_TimerUDB_sT32_timerdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB04_05_A1
HE_TIMER_TimerUDB_sT32_timerdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB04_05_D0
HE_TIMER_TimerUDB_sT32_timerdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB04_05_D1
HE_TIMER_TimerUDB_sT32_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB04_05_F0
HE_TIMER_TimerUDB_sT32_timerdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB04_05_F1
HE_TIMER_TimerUDB_sT32_timerdp_u0__A0_A1_REG EQU CYREG_B1_UDB04_A0_A1
HE_TIMER_TimerUDB_sT32_timerdp_u0__A0_REG EQU CYREG_B1_UDB04_A0
HE_TIMER_TimerUDB_sT32_timerdp_u0__A1_REG EQU CYREG_B1_UDB04_A1
HE_TIMER_TimerUDB_sT32_timerdp_u0__D0_D1_REG EQU CYREG_B1_UDB04_D0_D1
HE_TIMER_TimerUDB_sT32_timerdp_u0__D0_REG EQU CYREG_B1_UDB04_D0
HE_TIMER_TimerUDB_sT32_timerdp_u0__D1_REG EQU CYREG_B1_UDB04_D1
HE_TIMER_TimerUDB_sT32_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u0__F0_F1_REG EQU CYREG_B1_UDB04_F0_F1
HE_TIMER_TimerUDB_sT32_timerdp_u0__F0_REG EQU CYREG_B1_UDB04_F0
HE_TIMER_TimerUDB_sT32_timerdp_u0__F1_REG EQU CYREG_B1_UDB04_F1
HE_TIMER_TimerUDB_sT32_timerdp_u1__16BIT_A0_REG EQU CYREG_B1_UDB05_06_A0
HE_TIMER_TimerUDB_sT32_timerdp_u1__16BIT_A1_REG EQU CYREG_B1_UDB05_06_A1
HE_TIMER_TimerUDB_sT32_timerdp_u1__16BIT_D0_REG EQU CYREG_B1_UDB05_06_D0
HE_TIMER_TimerUDB_sT32_timerdp_u1__16BIT_D1_REG EQU CYREG_B1_UDB05_06_D1
HE_TIMER_TimerUDB_sT32_timerdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u1__16BIT_F0_REG EQU CYREG_B1_UDB05_06_F0
HE_TIMER_TimerUDB_sT32_timerdp_u1__16BIT_F1_REG EQU CYREG_B1_UDB05_06_F1
HE_TIMER_TimerUDB_sT32_timerdp_u1__A0_A1_REG EQU CYREG_B1_UDB05_A0_A1
HE_TIMER_TimerUDB_sT32_timerdp_u1__A0_REG EQU CYREG_B1_UDB05_A0
HE_TIMER_TimerUDB_sT32_timerdp_u1__A1_REG EQU CYREG_B1_UDB05_A1
HE_TIMER_TimerUDB_sT32_timerdp_u1__D0_D1_REG EQU CYREG_B1_UDB05_D0_D1
HE_TIMER_TimerUDB_sT32_timerdp_u1__D0_REG EQU CYREG_B1_UDB05_D0
HE_TIMER_TimerUDB_sT32_timerdp_u1__D1_REG EQU CYREG_B1_UDB05_D1
HE_TIMER_TimerUDB_sT32_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u1__F0_F1_REG EQU CYREG_B1_UDB05_F0_F1
HE_TIMER_TimerUDB_sT32_timerdp_u1__F0_REG EQU CYREG_B1_UDB05_F0
HE_TIMER_TimerUDB_sT32_timerdp_u1__F1_REG EQU CYREG_B1_UDB05_F1
HE_TIMER_TimerUDB_sT32_timerdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u2__16BIT_A0_REG EQU CYREG_B1_UDB06_07_A0
HE_TIMER_TimerUDB_sT32_timerdp_u2__16BIT_A1_REG EQU CYREG_B1_UDB06_07_A1
HE_TIMER_TimerUDB_sT32_timerdp_u2__16BIT_D0_REG EQU CYREG_B1_UDB06_07_D0
HE_TIMER_TimerUDB_sT32_timerdp_u2__16BIT_D1_REG EQU CYREG_B1_UDB06_07_D1
HE_TIMER_TimerUDB_sT32_timerdp_u2__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u2__16BIT_F0_REG EQU CYREG_B1_UDB06_07_F0
HE_TIMER_TimerUDB_sT32_timerdp_u2__16BIT_F1_REG EQU CYREG_B1_UDB06_07_F1
HE_TIMER_TimerUDB_sT32_timerdp_u2__A0_A1_REG EQU CYREG_B1_UDB06_A0_A1
HE_TIMER_TimerUDB_sT32_timerdp_u2__A0_REG EQU CYREG_B1_UDB06_A0
HE_TIMER_TimerUDB_sT32_timerdp_u2__A1_REG EQU CYREG_B1_UDB06_A1
HE_TIMER_TimerUDB_sT32_timerdp_u2__D0_D1_REG EQU CYREG_B1_UDB06_D0_D1
HE_TIMER_TimerUDB_sT32_timerdp_u2__D0_REG EQU CYREG_B1_UDB06_D0
HE_TIMER_TimerUDB_sT32_timerdp_u2__D1_REG EQU CYREG_B1_UDB06_D1
HE_TIMER_TimerUDB_sT32_timerdp_u2__DP_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u2__F0_F1_REG EQU CYREG_B1_UDB06_F0_F1
HE_TIMER_TimerUDB_sT32_timerdp_u2__F0_REG EQU CYREG_B1_UDB06_F0
HE_TIMER_TimerUDB_sT32_timerdp_u2__F1_REG EQU CYREG_B1_UDB06_F1
HE_TIMER_TimerUDB_sT32_timerdp_u3__16BIT_A0_REG EQU CYREG_B1_UDB07_08_A0
HE_TIMER_TimerUDB_sT32_timerdp_u3__16BIT_A1_REG EQU CYREG_B1_UDB07_08_A1
HE_TIMER_TimerUDB_sT32_timerdp_u3__16BIT_D0_REG EQU CYREG_B1_UDB07_08_D0
HE_TIMER_TimerUDB_sT32_timerdp_u3__16BIT_D1_REG EQU CYREG_B1_UDB07_08_D1
HE_TIMER_TimerUDB_sT32_timerdp_u3__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u3__16BIT_F0_REG EQU CYREG_B1_UDB07_08_F0
HE_TIMER_TimerUDB_sT32_timerdp_u3__16BIT_F1_REG EQU CYREG_B1_UDB07_08_F1
HE_TIMER_TimerUDB_sT32_timerdp_u3__A0_A1_REG EQU CYREG_B1_UDB07_A0_A1
HE_TIMER_TimerUDB_sT32_timerdp_u3__A0_REG EQU CYREG_B1_UDB07_A0
HE_TIMER_TimerUDB_sT32_timerdp_u3__A1_REG EQU CYREG_B1_UDB07_A1
HE_TIMER_TimerUDB_sT32_timerdp_u3__D0_D1_REG EQU CYREG_B1_UDB07_D0_D1
HE_TIMER_TimerUDB_sT32_timerdp_u3__D0_REG EQU CYREG_B1_UDB07_D0
HE_TIMER_TimerUDB_sT32_timerdp_u3__D1_REG EQU CYREG_B1_UDB07_D1
HE_TIMER_TimerUDB_sT32_timerdp_u3__DP_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
HE_TIMER_TimerUDB_sT32_timerdp_u3__F0_F1_REG EQU CYREG_B1_UDB07_F0_F1
HE_TIMER_TimerUDB_sT32_timerdp_u3__F0_REG EQU CYREG_B1_UDB07_F0
HE_TIMER_TimerUDB_sT32_timerdp_u3__F1_REG EQU CYREG_B1_UDB07_F1

; HE_IN_PIN
HE_IN_PIN__0__MASK EQU 0x08
HE_IN_PIN__0__PC EQU CYREG_PRT4_PC3
HE_IN_PIN__0__PORT EQU 4
HE_IN_PIN__0__SHIFT EQU 3
HE_IN_PIN__AG EQU CYREG_PRT4_AG
HE_IN_PIN__AMUX EQU CYREG_PRT4_AMUX
HE_IN_PIN__BIE EQU CYREG_PRT4_BIE
HE_IN_PIN__BIT_MASK EQU CYREG_PRT4_BIT_MASK
HE_IN_PIN__BYP EQU CYREG_PRT4_BYP
HE_IN_PIN__CTL EQU CYREG_PRT4_CTL
HE_IN_PIN__DM0 EQU CYREG_PRT4_DM0
HE_IN_PIN__DM1 EQU CYREG_PRT4_DM1
HE_IN_PIN__DM2 EQU CYREG_PRT4_DM2
HE_IN_PIN__DR EQU CYREG_PRT4_DR
HE_IN_PIN__INP_DIS EQU CYREG_PRT4_INP_DIS
HE_IN_PIN__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
HE_IN_PIN__LCD_EN EQU CYREG_PRT4_LCD_EN
HE_IN_PIN__MASK EQU 0x08
HE_IN_PIN__PORT EQU 4
HE_IN_PIN__PRT EQU CYREG_PRT4_PRT
HE_IN_PIN__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
HE_IN_PIN__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
HE_IN_PIN__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
HE_IN_PIN__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
HE_IN_PIN__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
HE_IN_PIN__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
HE_IN_PIN__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
HE_IN_PIN__PS EQU CYREG_PRT4_PS
HE_IN_PIN__SHIFT EQU 3
HE_IN_PIN__SLW EQU CYREG_PRT4_SLW

; CAM_OUT_PIN
CAM_OUT_PIN__0__MASK EQU 0x40
CAM_OUT_PIN__0__PC EQU CYREG_PRT5_PC6
CAM_OUT_PIN__0__PORT EQU 5
CAM_OUT_PIN__0__SHIFT EQU 6
CAM_OUT_PIN__AG EQU CYREG_PRT5_AG
CAM_OUT_PIN__AMUX EQU CYREG_PRT5_AMUX
CAM_OUT_PIN__BIE EQU CYREG_PRT5_BIE
CAM_OUT_PIN__BIT_MASK EQU CYREG_PRT5_BIT_MASK
CAM_OUT_PIN__BYP EQU CYREG_PRT5_BYP
CAM_OUT_PIN__CTL EQU CYREG_PRT5_CTL
CAM_OUT_PIN__DM0 EQU CYREG_PRT5_DM0
CAM_OUT_PIN__DM1 EQU CYREG_PRT5_DM1
CAM_OUT_PIN__DM2 EQU CYREG_PRT5_DM2
CAM_OUT_PIN__DR EQU CYREG_PRT5_DR
CAM_OUT_PIN__INP_DIS EQU CYREG_PRT5_INP_DIS
CAM_OUT_PIN__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
CAM_OUT_PIN__LCD_EN EQU CYREG_PRT5_LCD_EN
CAM_OUT_PIN__MASK EQU 0x40
CAM_OUT_PIN__PORT EQU 5
CAM_OUT_PIN__PRT EQU CYREG_PRT5_PRT
CAM_OUT_PIN__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
CAM_OUT_PIN__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
CAM_OUT_PIN__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
CAM_OUT_PIN__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
CAM_OUT_PIN__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
CAM_OUT_PIN__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
CAM_OUT_PIN__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
CAM_OUT_PIN__PS EQU CYREG_PRT5_PS
CAM_OUT_PIN__SHIFT EQU 6
CAM_OUT_PIN__SLW EQU CYREG_PRT5_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CY_VERSION LIT 'PSoC Creator  3.1'
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 6
CYDEV_CHIP_DIE_PSOC4A EQU 3
CYDEV_CHIP_DIE_PSOC5LP EQU 5
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC3
CYDEV_CHIP_JTAG_ID EQU 0x1E028069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 3
CYDEV_CHIP_MEMBER_4D EQU 2
CYDEV_CHIP_MEMBER_4F EQU 4
CYDEV_CHIP_MEMBER_5A EQU 6
CYDEV_CHIP_MEMBER_5B EQU 5
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_3A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_3A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_CLEAR_SRAM EQU 1
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x01
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA LIT '5.0'
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD LIT '5.0'
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0 LIT '5.0'
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1 LIT '5.0'
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2 LIT '5.0'
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3 LIT '5.0'
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 LIT '5.0'
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 LIT '5.0'
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 LIT '5.0'
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 LIT '5.0'
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_DP8051_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERKEIL_INC */