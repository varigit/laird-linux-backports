#ifndef LINUX_BCMA_DRIVER_PCIE2_H_
#define LINUX_BCMA_DRIVER_PCIE2_H_

#define BCMA_CORE_PCIE2_CLK_CONTROL		0x0000
#define  PCIE2_CLKC_RST_OE			0x0001 /* When set, drives PCI_RESET out to pin */
#define  PCIE2_CLKC_RST				0x0002 /* Value driven out to pin */
#define  PCIE2_CLKC_SPERST			0x0004 /* SurvivePeRst */
#define  PCIE2_CLKC_DISABLE_L1CLK_GATING	0x0010
#define  PCIE2_CLKC_DLYPERST			0x0100 /* Delay PeRst to CoE Core */
#define  PCIE2_CLKC_DISSPROMLD			0x0200 /* DisableSpromLoadOnPerst */
#define  PCIE2_CLKC_WAKE_MODE_L2		0x1000 /* Wake on L2 */
#define BCMA_CORE_PCIE2_RC_PM_CONTROL		0x0004
#define BCMA_CORE_PCIE2_RC_PM_STATUS		0x0008
#define BCMA_CORE_PCIE2_EP_PM_CONTROL		0x000C
#define BCMA_CORE_PCIE2_EP_PM_STATUS		0x0010
#define BCMA_CORE_PCIE2_EP_LTR_CONTROL		0x0014
#define BCMA_CORE_PCIE2_EP_LTR_STATUS		0x0018
#define BCMA_CORE_PCIE2_EP_OBFF_STATUS		0x001C
#define BCMA_CORE_PCIE2_PCIE_ERR_STATUS		0x0020
#define BCMA_CORE_PCIE2_RC_AXI_CONFIG		0x0100
#define BCMA_CORE_PCIE2_EP_AXI_CONFIG		0x0104
#define BCMA_CORE_PCIE2_RXDEBUG_STATUS0		0x0108
#define BCMA_CORE_PCIE2_RXDEBUG_CONTROL0	0x010C
#define BCMA_CORE_PCIE2_CONFIGINDADDR		0x0120
#define BCMA_CORE_PCIE2_CONFIGINDDATA		0x0124
#define BCMA_CORE_PCIE2_MDIOCONTROL		0x0128
#define BCMA_CORE_PCIE2_MDIOWRDATA		0x012C
#define BCMA_CORE_PCIE2_MDIORDDATA		0x0130
#define BCMA_CORE_PCIE2_DATAINTF		0x0180
#define BCMA_CORE_PCIE2_D2H_INTRLAZY_0		0x0188
#define BCMA_CORE_PCIE2_H2D_INTRLAZY_0		0x018c
#define BCMA_CORE_PCIE2_H2D_INTSTAT_0		0x0190
#define BCMA_CORE_PCIE2_H2D_INTMASK_0		0x0194
#define BCMA_CORE_PCIE2_D2H_INTSTAT_0		0x0198
#define BCMA_CORE_PCIE2_D2H_INTMASK_0		0x019c
#define BCMA_CORE_PCIE2_LTR_STATE		0x01A0 /* Latency Tolerance Reporting */
#define  PCIE2_LTR_ACTIVE			2
#define  PCIE2_LTR_ACTIVE_IDLE			1
#define  PCIE2_LTR_SLEEP			0
#define  PCIE2_LTR_FINAL_MASK			0x300
#define  PCIE2_LTR_FINAL_SHIFT			8
#define BCMA_CORE_PCIE2_PWR_INT_STATUS		0x01A4
#define BCMA_CORE_PCIE2_PWR_INT_MASK		0x01A8
#define BCMA_CORE_PCIE2_CFG_ADDR		0x01F8
#define BCMA_CORE_PCIE2_CFG_DATA		0x01FC
#define BCMA_CORE_PCIE2_SYS_EQ_PAGE		0x0200
#define BCMA_CORE_PCIE2_SYS_MSI_PAGE		0x0204
#define BCMA_CORE_PCIE2_SYS_MSI_INTREN		0x0208
#define BCMA_CORE_PCIE2_SYS_MSI_CTRL0		0x0210
#define BCMA_CORE_PCIE2_SYS_MSI_CTRL1		0x0214
#define BCMA_CORE_PCIE2_SYS_MSI_CTRL2		0x0218
#define BCMA_CORE_PCIE2_SYS_MSI_CTRL3		0x021C
#define BCMA_CORE_PCIE2_SYS_MSI_CTRL4		0x0220
#define BCMA_CORE_PCIE2_SYS_MSI_CTRL5		0x0224
#define BCMA_CORE_PCIE2_SYS_EQ_HEAD0		0x0250
#define BCMA_CORE_PCIE2_SYS_EQ_TAIL0		0x0254
#define BCMA_CORE_PCIE2_SYS_EQ_HEAD1		0x0258
#define BCMA_CORE_PCIE2_SYS_EQ_TAIL1		0x025C
#define BCMA_CORE_PCIE2_SYS_EQ_HEAD2		0x0260
#define BCMA_CORE_PCIE2_SYS_EQ_TAIL2		0x0264
#define BCMA_CORE_PCIE2_SYS_EQ_HEAD3		0x0268
#define BCMA_CORE_PCIE2_SYS_EQ_TAIL3		0x026C
#define BCMA_CORE_PCIE2_SYS_EQ_HEAD4		0x0270
#define BCMA_CORE_PCIE2_SYS_EQ_TAIL4		0x0274
#define BCMA_CORE_PCIE2_SYS_EQ_HEAD5		0x0278
#define BCMA_CORE_PCIE2_SYS_EQ_TAIL5		0x027C
#define BCMA_CORE_PCIE2_SYS_RC_INTX_EN		0x0330
#define BCMA_CORE_PCIE2_SYS_RC_INTX_CSR		0x0334
#define BCMA_CORE_PCIE2_SYS_MSI_REQ		0x0340
#define BCMA_CORE_PCIE2_SYS_HOST_INTR_EN	0x0344
#define BCMA_CORE_PCIE2_SYS_HOST_INTR_CSR	0x0348
#define BCMA_CORE_PCIE2_SYS_HOST_INTR0		0x0350
#define BCMA_CORE_PCIE2_SYS_HOST_INTR1		0x0354
#define BCMA_CORE_PCIE2_SYS_HOST_INTR2		0x0358
#define BCMA_CORE_PCIE2_SYS_HOST_INTR3		0x035C
#define BCMA_CORE_PCIE2_SYS_EP_INT_EN0		0x0360
#define BCMA_CORE_PCIE2_SYS_EP_INT_EN1		0x0364
#define BCMA_CORE_PCIE2_SYS_EP_INT_CSR0		0x0370
#define BCMA_CORE_PCIE2_SYS_EP_INT_CSR1		0x0374
#define BCMA_CORE_PCIE2_SPROM(wordoffset)	(0x0800 + ((wordoffset) * 2))
#define BCMA_CORE_PCIE2_FUNC0_IMAP0_0		0x0C00
#define BCMA_CORE_PCIE2_FUNC0_IMAP0_1		0x0C04
#define BCMA_CORE_PCIE2_FUNC0_IMAP0_2		0x0C08
#define BCMA_CORE_PCIE2_FUNC0_IMAP0_3		0x0C0C
#define BCMA_CORE_PCIE2_FUNC0_IMAP0_4		0x0C10
#define BCMA_CORE_PCIE2_FUNC0_IMAP0_5		0x0C14
#define BCMA_CORE_PCIE2_FUNC0_IMAP0_6		0x0C18
#define BCMA_CORE_PCIE2_FUNC0_IMAP0_7		0x0C1C
#define BCMA_CORE_PCIE2_FUNC1_IMAP0_0		0x0C20
#define BCMA_CORE_PCIE2_FUNC1_IMAP0_1		0x0C24
#define BCMA_CORE_PCIE2_FUNC1_IMAP0_2		0x0C28
#define BCMA_CORE_PCIE2_FUNC1_IMAP0_3		0x0C2C
#define BCMA_CORE_PCIE2_FUNC1_IMAP0_4		0x0C30
#define BCMA_CORE_PCIE2_FUNC1_IMAP0_5		0x0C34
#define BCMA_CORE_PCIE2_FUNC1_IMAP0_6		0x0C38
#define BCMA_CORE_PCIE2_FUNC1_IMAP0_7		0x0C3C
#define BCMA_CORE_PCIE2_FUNC0_IMAP1		0x0C80
#define BCMA_CORE_PCIE2_FUNC1_IMAP1		0x0C88
#define BCMA_CORE_PCIE2_FUNC0_IMAP2		0x0CC0
#define BCMA_CORE_PCIE2_FUNC1_IMAP2		0x0CC8
#define BCMA_CORE_PCIE2_IARR0_LOWER		0x0D00
#define BCMA_CORE_PCIE2_IARR0_UPPER		0x0D04
#define BCMA_CORE_PCIE2_IARR1_LOWER		0x0D08
#define BCMA_CORE_PCIE2_IARR1_UPPER		0x0D0C
#define BCMA_CORE_PCIE2_IARR2_LOWER		0x0D10
#define BCMA_CORE_PCIE2_IARR2_UPPER		0x0D14
#define BCMA_CORE_PCIE2_OARR0			0x0D20
#define BCMA_CORE_PCIE2_OARR1			0x0D28
#define BCMA_CORE_PCIE2_OARR2			0x0D30
#define BCMA_CORE_PCIE2_OMAP0_LOWER		0x0D40
#define BCMA_CORE_PCIE2_OMAP0_UPPER		0x0D44
#define BCMA_CORE_PCIE2_OMAP1_LOWER		0x0D48
#define BCMA_CORE_PCIE2_OMAP1_UPPER		0x0D4C
#define BCMA_CORE_PCIE2_OMAP2_LOWER		0x0D50
#define BCMA_CORE_PCIE2_OMAP2_UPPER		0x0D54
#define BCMA_CORE_PCIE2_FUNC1_IARR1_SIZE	0x0D58
#define BCMA_CORE_PCIE2_FUNC1_IARR2_SIZE	0x0D5C
#define BCMA_CORE_PCIE2_MEM_CONTROL		0x0F00
#define BCMA_CORE_PCIE2_MEM_ECC_ERRLOG0		0x0F04
#define BCMA_CORE_PCIE2_MEM_ECC_ERRLOG1		0x0F08
#define BCMA_CORE_PCIE2_LINK_STATUS		0x0F0C
#define BCMA_CORE_PCIE2_STRAP_STATUS		0x0F10
#define BCMA_CORE_PCIE2_RESET_STATUS		0x0F14
#define BCMA_CORE_PCIE2_RESETEN_IN_LINKDOWN	0x0F18
#define BCMA_CORE_PCIE2_MISC_INTR_EN		0x0F1C
#define BCMA_CORE_PCIE2_TX_DEBUG_CFG		0x0F20
#define BCMA_CORE_PCIE2_MISC_CONFIG		0x0F24
#define BCMA_CORE_PCIE2_MISC_STATUS		0x0F28
#define BCMA_CORE_PCIE2_INTR_EN			0x0F30
#define BCMA_CORE_PCIE2_INTR_CLEAR		0x0F34
#define BCMA_CORE_PCIE2_INTR_STATUS		0x0F38

/* PCIE gen2 config regs */
#define PCIE2_INTSTATUS				0x090
#define PCIE2_INTMASK				0x094
#define PCIE2_SBMBX				0x098

#define PCIE2_PMCR_REFUP			0x1814 /* Trefup time */

#define PCIE2_CAP_DEVSTSCTRL2_OFFSET		0xD4
#define PCIE2_CAP_DEVSTSCTRL2_LTRENAB		0x400
#define PCIE2_PVT_REG_PM_CLK_PERIOD		0x184c

struct bcma_drv_pcie2 {
	struct bcma_device *core;

	u16 reqsize;
};

#define pcie2_read16(pcie2, offset)		bcma_read16((pcie2)->core, offset)
#define pcie2_read32(pcie2, offset)		bcma_read32((pcie2)->core, offset)
#define pcie2_write16(pcie2, offset, val)	bcma_write16((pcie2)->core, offset, val)
#define pcie2_write32(pcie2, offset, val)	bcma_write32((pcie2)->core, offset, val)

#define pcie2_set32(pcie2, offset, set)		bcma_set32((pcie2)->core, offset, set)
#define pcie2_mask32(pcie2, offset, mask)	bcma_mask32((pcie2)->core, offset, mask)

#endif /* LINUX_BCMA_DRIVER_PCIE2_H_ */
