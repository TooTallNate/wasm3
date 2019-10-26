//--------------------------------------------------------------------------------
// Auto-generated by Migen (ae42105) & LiteX (3a72688b) on 2019-08-23 13:21:26
//--------------------------------------------------------------------------------
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#ifdef CSR_ACCESSORS_DEFINED
extern void csr_writeb(uint8_t value, unsigned long addr);
extern uint8_t csr_readb(unsigned long addr);
extern void csr_writew(uint16_t value, unsigned long addr);
extern uint16_t csr_readw(unsigned long addr);
extern void csr_writel(uint32_t value, unsigned long addr);
extern uint32_t csr_readl(unsigned long addr);
#else /* ! CSR_ACCESSORS_DEFINED */
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */

/* ctrl */
#define CSR_CTRL_BASE 0xe0000000L
#define CSR_CTRL_RESET_ADDR 0xe0000000L
#define CSR_CTRL_RESET_SIZE 1
static inline unsigned char ctrl_reset_read(void) {
	unsigned char r = csr_readl(0xe0000000L);
	return r;
}
static inline void ctrl_reset_write(unsigned char value) {
	csr_writel(value, 0xe0000000L);
}
#define CSR_CTRL_SCRATCH_ADDR 0xe0000004L
#define CSR_CTRL_SCRATCH_SIZE 4
static inline unsigned int ctrl_scratch_read(void) {
	unsigned int r = csr_readl(0xe0000004L);
	r <<= 8;
	r |= csr_readl(0xe0000008L);
	r <<= 8;
	r |= csr_readl(0xe000000cL);
	r <<= 8;
	r |= csr_readl(0xe0000010L);
	return r;
}
static inline void ctrl_scratch_write(unsigned int value) {
	csr_writel(value >> 24, 0xe0000004L);
	csr_writel(value >> 16, 0xe0000008L);
	csr_writel(value >> 8, 0xe000000cL);
	csr_writel(value, 0xe0000010L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR 0xe0000014L
#define CSR_CTRL_BUS_ERRORS_SIZE 4
static inline unsigned int ctrl_bus_errors_read(void) {
	unsigned int r = csr_readl(0xe0000014L);
	r <<= 8;
	r |= csr_readl(0xe0000018L);
	r <<= 8;
	r |= csr_readl(0xe000001cL);
	r <<= 8;
	r |= csr_readl(0xe0000020L);
	return r;
}

/* picorvspi */
#define CSR_PICORVSPI_BASE 0xe0005000L
#define CSR_PICORVSPI_CFG1_ADDR 0xe0005000L
#define CSR_PICORVSPI_CFG1_SIZE 1
static inline unsigned char picorvspi_cfg1_read(void) {
	unsigned char r = csr_readl(0xe0005000L);
	return r;
}
static inline void picorvspi_cfg1_write(unsigned char value) {
	csr_writel(value, 0xe0005000L);
}
#define CSR_PICORVSPI_CFG2_ADDR 0xe0005004L
#define CSR_PICORVSPI_CFG2_SIZE 1
static inline unsigned char picorvspi_cfg2_read(void) {
	unsigned char r = csr_readl(0xe0005004L);
	return r;
}
static inline void picorvspi_cfg2_write(unsigned char value) {
	csr_writel(value, 0xe0005004L);
}
#define CSR_PICORVSPI_CFG3_ADDR 0xe0005008L
#define CSR_PICORVSPI_CFG3_SIZE 1
static inline unsigned char picorvspi_cfg3_read(void) {
	unsigned char r = csr_readl(0xe0005008L);
	return r;
}
static inline void picorvspi_cfg3_write(unsigned char value) {
	csr_writel(value, 0xe0005008L);
}
#define CSR_PICORVSPI_CFG4_ADDR 0xe000500cL
#define CSR_PICORVSPI_CFG4_SIZE 1
static inline unsigned char picorvspi_cfg4_read(void) {
	unsigned char r = csr_readl(0xe000500cL);
	return r;
}
static inline void picorvspi_cfg4_write(unsigned char value) {
	csr_writel(value, 0xe000500cL);
}
#define CSR_PICORVSPI_STAT1_ADDR 0xe0005010L
#define CSR_PICORVSPI_STAT1_SIZE 1
static inline unsigned char picorvspi_stat1_read(void) {
	unsigned char r = csr_readl(0xe0005010L);
	return r;
}
#define CSR_PICORVSPI_STAT2_ADDR 0xe0005014L
#define CSR_PICORVSPI_STAT2_SIZE 1
static inline unsigned char picorvspi_stat2_read(void) {
	unsigned char r = csr_readl(0xe0005014L);
	return r;
}
#define CSR_PICORVSPI_STAT3_ADDR 0xe0005018L
#define CSR_PICORVSPI_STAT3_SIZE 1
static inline unsigned char picorvspi_stat3_read(void) {
	unsigned char r = csr_readl(0xe0005018L);
	return r;
}
#define CSR_PICORVSPI_STAT4_ADDR 0xe000501cL
#define CSR_PICORVSPI_STAT4_SIZE 1
static inline unsigned char picorvspi_stat4_read(void) {
	unsigned char r = csr_readl(0xe000501cL);
	return r;
}

/* reboot */
#define CSR_REBOOT_BASE 0xe0006000L
#define CSR_REBOOT_CTRL_ADDR 0xe0006000L
#define CSR_REBOOT_CTRL_SIZE 1
static inline unsigned char reboot_ctrl_read(void) {
	unsigned char r = csr_readl(0xe0006000L);
	return r;
}
static inline void reboot_ctrl_write(unsigned char value) {
	csr_writel(value, 0xe0006000L);
}
#define CSR_REBOOT_ADDR_ADDR 0xe0006004L
#define CSR_REBOOT_ADDR_SIZE 4
static inline unsigned int reboot_addr_read(void) {
	unsigned int r = csr_readl(0xe0006004L);
	r <<= 8;
	r |= csr_readl(0xe0006008L);
	r <<= 8;
	r |= csr_readl(0xe000600cL);
	r <<= 8;
	r |= csr_readl(0xe0006010L);
	return r;
}
static inline void reboot_addr_write(unsigned int value) {
	csr_writel(value >> 24, 0xe0006004L);
	csr_writel(value >> 16, 0xe0006008L);
	csr_writel(value >> 8, 0xe000600cL);
	csr_writel(value, 0xe0006010L);
}

/* rgb */
#define CSR_RGB_BASE 0xe0006800L
#define CSR_RGB_DAT_ADDR 0xe0006800L
#define CSR_RGB_DAT_SIZE 1
static inline unsigned char rgb_dat_read(void) {
	unsigned char r = csr_readl(0xe0006800L);
	return r;
}
static inline void rgb_dat_write(unsigned char value) {
	csr_writel(value, 0xe0006800L);
}
#define CSR_RGB_ADDR_ADDR 0xe0006804L
#define CSR_RGB_ADDR_SIZE 1
static inline unsigned char rgb_addr_read(void) {
	unsigned char r = csr_readl(0xe0006804L);
	return r;
}
static inline void rgb_addr_write(unsigned char value) {
	csr_writel(value, 0xe0006804L);
}
#define CSR_RGB_CTRL_ADDR 0xe0006808L
#define CSR_RGB_CTRL_SIZE 1
static inline unsigned char rgb_ctrl_read(void) {
	unsigned char r = csr_readl(0xe0006808L);
	return r;
}
static inline void rgb_ctrl_write(unsigned char value) {
	csr_writel(value, 0xe0006808L);
}
#define CSR_RGB_RAW_ADDR 0xe000680cL
#define CSR_RGB_RAW_SIZE 1
static inline unsigned char rgb_raw_read(void) {
	unsigned char r = csr_readl(0xe000680cL);
	return r;
}
static inline void rgb_raw_write(unsigned char value) {
	csr_writel(value, 0xe000680cL);
}

/* timer0 */
#define CSR_TIMER0_BASE 0xe0002800L
#define CSR_TIMER0_LOAD_ADDR 0xe0002800L
#define CSR_TIMER0_LOAD_SIZE 4
static inline unsigned int timer0_load_read(void) {
	unsigned int r = csr_readl(0xe0002800L);
	r <<= 8;
	r |= csr_readl(0xe0002804L);
	r <<= 8;
	r |= csr_readl(0xe0002808L);
	r <<= 8;
	r |= csr_readl(0xe000280cL);
	return r;
}
static inline void timer0_load_write(unsigned int value) {
	csr_writel(value >> 24, 0xe0002800L);
	csr_writel(value >> 16, 0xe0002804L);
	csr_writel(value >> 8, 0xe0002808L);
	csr_writel(value, 0xe000280cL);
}
#define CSR_TIMER0_RELOAD_ADDR 0xe0002810L
#define CSR_TIMER0_RELOAD_SIZE 4
static inline unsigned int timer0_reload_read(void) {
	unsigned int r = csr_readl(0xe0002810L);
	r <<= 8;
	r |= csr_readl(0xe0002814L);
	r <<= 8;
	r |= csr_readl(0xe0002818L);
	r <<= 8;
	r |= csr_readl(0xe000281cL);
	return r;
}
static inline void timer0_reload_write(unsigned int value) {
	csr_writel(value >> 24, 0xe0002810L);
	csr_writel(value >> 16, 0xe0002814L);
	csr_writel(value >> 8, 0xe0002818L);
	csr_writel(value, 0xe000281cL);
}
#define CSR_TIMER0_EN_ADDR 0xe0002820L
#define CSR_TIMER0_EN_SIZE 1
static inline unsigned char timer0_en_read(void) {
	unsigned char r = csr_readl(0xe0002820L);
	return r;
}
static inline void timer0_en_write(unsigned char value) {
	csr_writel(value, 0xe0002820L);
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR 0xe0002824L
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline unsigned char timer0_update_value_read(void) {
	unsigned char r = csr_readl(0xe0002824L);
	return r;
}
static inline void timer0_update_value_write(unsigned char value) {
	csr_writel(value, 0xe0002824L);
}
#define CSR_TIMER0_VALUE_ADDR 0xe0002828L
#define CSR_TIMER0_VALUE_SIZE 4
static inline unsigned int timer0_value_read(void) {
	unsigned int r = csr_readl(0xe0002828L);
	r <<= 8;
	r |= csr_readl(0xe000282cL);
	r <<= 8;
	r |= csr_readl(0xe0002830L);
	r <<= 8;
	r |= csr_readl(0xe0002834L);
	return r;
}
#define CSR_TIMER0_EV_STATUS_ADDR 0xe0002838L
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline unsigned char timer0_ev_status_read(void) {
	unsigned char r = csr_readl(0xe0002838L);
	return r;
}
static inline void timer0_ev_status_write(unsigned char value) {
	csr_writel(value, 0xe0002838L);
}
#define CSR_TIMER0_EV_PENDING_ADDR 0xe000283cL
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline unsigned char timer0_ev_pending_read(void) {
	unsigned char r = csr_readl(0xe000283cL);
	return r;
}
static inline void timer0_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xe000283cL);
}
#define CSR_TIMER0_EV_ENABLE_ADDR 0xe0002840L
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline unsigned char timer0_ev_enable_read(void) {
	unsigned char r = csr_readl(0xe0002840L);
	return r;
}
static inline void timer0_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xe0002840L);
}

/* touch */
#define CSR_TOUCH_BASE 0xe0005800L
#define CSR_TOUCH_O_ADDR 0xe0005800L
#define CSR_TOUCH_O_SIZE 1
static inline unsigned char touch_o_read(void) {
	unsigned char r = csr_readl(0xe0005800L);
	return r;
}
static inline void touch_o_write(unsigned char value) {
	csr_writel(value, 0xe0005800L);
}
#define CSR_TOUCH_OE_ADDR 0xe0005804L
#define CSR_TOUCH_OE_SIZE 1
static inline unsigned char touch_oe_read(void) {
	unsigned char r = csr_readl(0xe0005804L);
	return r;
}
static inline void touch_oe_write(unsigned char value) {
	csr_writel(value, 0xe0005804L);
}
#define CSR_TOUCH_I_ADDR 0xe0005808L
#define CSR_TOUCH_I_SIZE 1
static inline unsigned char touch_i_read(void) {
	unsigned char r = csr_readl(0xe0005808L);
	return r;
}

/* usb */
#define CSR_USB_BASE 0xe0004800L
#define CSR_USB_PULLUP_OUT_ADDR 0xe0004800L
#define CSR_USB_PULLUP_OUT_SIZE 1
static inline unsigned char usb_pullup_out_read(void) {
	unsigned char r = csr_readl(0xe0004800L);
	return r;
}
static inline void usb_pullup_out_write(unsigned char value) {
	csr_writel(value, 0xe0004800L);
}
#define CSR_USB_EP_0_OUT_EV_STATUS_ADDR 0xe0004804L
#define CSR_USB_EP_0_OUT_EV_STATUS_SIZE 1
static inline unsigned char usb_ep_0_out_ev_status_read(void) {
	unsigned char r = csr_readl(0xe0004804L);
	return r;
}
static inline void usb_ep_0_out_ev_status_write(unsigned char value) {
	csr_writel(value, 0xe0004804L);
}
#define CSR_USB_EP_0_OUT_EV_PENDING_ADDR 0xe0004808L
#define CSR_USB_EP_0_OUT_EV_PENDING_SIZE 1
static inline unsigned char usb_ep_0_out_ev_pending_read(void) {
	unsigned char r = csr_readl(0xe0004808L);
	return r;
}
static inline void usb_ep_0_out_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xe0004808L);
}
#define CSR_USB_EP_0_OUT_EV_ENABLE_ADDR 0xe000480cL
#define CSR_USB_EP_0_OUT_EV_ENABLE_SIZE 1
static inline unsigned char usb_ep_0_out_ev_enable_read(void) {
	unsigned char r = csr_readl(0xe000480cL);
	return r;
}
static inline void usb_ep_0_out_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xe000480cL);
}
#define CSR_USB_EP_0_OUT_LAST_TOK_ADDR 0xe0004810L
#define CSR_USB_EP_0_OUT_LAST_TOK_SIZE 1
static inline unsigned char usb_ep_0_out_last_tok_read(void) {
	unsigned char r = csr_readl(0xe0004810L);
	return r;
}
#define CSR_USB_EP_0_OUT_RESPOND_ADDR 0xe0004814L
#define CSR_USB_EP_0_OUT_RESPOND_SIZE 1
static inline unsigned char usb_ep_0_out_respond_read(void) {
	unsigned char r = csr_readl(0xe0004814L);
	return r;
}
static inline void usb_ep_0_out_respond_write(unsigned char value) {
	csr_writel(value, 0xe0004814L);
}
#define CSR_USB_EP_0_OUT_DTB_ADDR 0xe0004818L
#define CSR_USB_EP_0_OUT_DTB_SIZE 1
static inline unsigned char usb_ep_0_out_dtb_read(void) {
	unsigned char r = csr_readl(0xe0004818L);
	return r;
}
static inline void usb_ep_0_out_dtb_write(unsigned char value) {
	csr_writel(value, 0xe0004818L);
}
#define CSR_USB_EP_0_OUT_OBUF_HEAD_ADDR 0xe000481cL
#define CSR_USB_EP_0_OUT_OBUF_HEAD_SIZE 1
static inline unsigned char usb_ep_0_out_obuf_head_read(void) {
	unsigned char r = csr_readl(0xe000481cL);
	return r;
}
static inline void usb_ep_0_out_obuf_head_write(unsigned char value) {
	csr_writel(value, 0xe000481cL);
}
#define CSR_USB_EP_0_OUT_OBUF_EMPTY_ADDR 0xe0004820L
#define CSR_USB_EP_0_OUT_OBUF_EMPTY_SIZE 1
static inline unsigned char usb_ep_0_out_obuf_empty_read(void) {
	unsigned char r = csr_readl(0xe0004820L);
	return r;
}
#define CSR_USB_EP_0_IN_EV_STATUS_ADDR 0xe0004824L
#define CSR_USB_EP_0_IN_EV_STATUS_SIZE 1
static inline unsigned char usb_ep_0_in_ev_status_read(void) {
	unsigned char r = csr_readl(0xe0004824L);
	return r;
}
static inline void usb_ep_0_in_ev_status_write(unsigned char value) {
	csr_writel(value, 0xe0004824L);
}
#define CSR_USB_EP_0_IN_EV_PENDING_ADDR 0xe0004828L
#define CSR_USB_EP_0_IN_EV_PENDING_SIZE 1
static inline unsigned char usb_ep_0_in_ev_pending_read(void) {
	unsigned char r = csr_readl(0xe0004828L);
	return r;
}
static inline void usb_ep_0_in_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xe0004828L);
}
#define CSR_USB_EP_0_IN_EV_ENABLE_ADDR 0xe000482cL
#define CSR_USB_EP_0_IN_EV_ENABLE_SIZE 1
static inline unsigned char usb_ep_0_in_ev_enable_read(void) {
	unsigned char r = csr_readl(0xe000482cL);
	return r;
}
static inline void usb_ep_0_in_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xe000482cL);
}
#define CSR_USB_EP_0_IN_LAST_TOK_ADDR 0xe0004830L
#define CSR_USB_EP_0_IN_LAST_TOK_SIZE 1
static inline unsigned char usb_ep_0_in_last_tok_read(void) {
	unsigned char r = csr_readl(0xe0004830L);
	return r;
}
#define CSR_USB_EP_0_IN_RESPOND_ADDR 0xe0004834L
#define CSR_USB_EP_0_IN_RESPOND_SIZE 1
static inline unsigned char usb_ep_0_in_respond_read(void) {
	unsigned char r = csr_readl(0xe0004834L);
	return r;
}
static inline void usb_ep_0_in_respond_write(unsigned char value) {
	csr_writel(value, 0xe0004834L);
}
#define CSR_USB_EP_0_IN_DTB_ADDR 0xe0004838L
#define CSR_USB_EP_0_IN_DTB_SIZE 1
static inline unsigned char usb_ep_0_in_dtb_read(void) {
	unsigned char r = csr_readl(0xe0004838L);
	return r;
}
static inline void usb_ep_0_in_dtb_write(unsigned char value) {
	csr_writel(value, 0xe0004838L);
}
#define CSR_USB_EP_0_IN_IBUF_HEAD_ADDR 0xe000483cL
#define CSR_USB_EP_0_IN_IBUF_HEAD_SIZE 1
static inline unsigned char usb_ep_0_in_ibuf_head_read(void) {
	unsigned char r = csr_readl(0xe000483cL);
	return r;
}
static inline void usb_ep_0_in_ibuf_head_write(unsigned char value) {
	csr_writel(value, 0xe000483cL);
}
#define CSR_USB_EP_0_IN_IBUF_EMPTY_ADDR 0xe0004840L
#define CSR_USB_EP_0_IN_IBUF_EMPTY_SIZE 1
static inline unsigned char usb_ep_0_in_ibuf_empty_read(void) {
	unsigned char r = csr_readl(0xe0004840L);
	return r;
}
#define CSR_USB_EP_1_IN_EV_STATUS_ADDR 0xe0004844L
#define CSR_USB_EP_1_IN_EV_STATUS_SIZE 1
static inline unsigned char usb_ep_1_in_ev_status_read(void) {
	unsigned char r = csr_readl(0xe0004844L);
	return r;
}
static inline void usb_ep_1_in_ev_status_write(unsigned char value) {
	csr_writel(value, 0xe0004844L);
}
#define CSR_USB_EP_1_IN_EV_PENDING_ADDR 0xe0004848L
#define CSR_USB_EP_1_IN_EV_PENDING_SIZE 1
static inline unsigned char usb_ep_1_in_ev_pending_read(void) {
	unsigned char r = csr_readl(0xe0004848L);
	return r;
}
static inline void usb_ep_1_in_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xe0004848L);
}
#define CSR_USB_EP_1_IN_EV_ENABLE_ADDR 0xe000484cL
#define CSR_USB_EP_1_IN_EV_ENABLE_SIZE 1
static inline unsigned char usb_ep_1_in_ev_enable_read(void) {
	unsigned char r = csr_readl(0xe000484cL);
	return r;
}
static inline void usb_ep_1_in_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xe000484cL);
}
#define CSR_USB_EP_1_IN_LAST_TOK_ADDR 0xe0004850L
#define CSR_USB_EP_1_IN_LAST_TOK_SIZE 1
static inline unsigned char usb_ep_1_in_last_tok_read(void) {
	unsigned char r = csr_readl(0xe0004850L);
	return r;
}
#define CSR_USB_EP_1_IN_RESPOND_ADDR 0xe0004854L
#define CSR_USB_EP_1_IN_RESPOND_SIZE 1
static inline unsigned char usb_ep_1_in_respond_read(void) {
	unsigned char r = csr_readl(0xe0004854L);
	return r;
}
static inline void usb_ep_1_in_respond_write(unsigned char value) {
	csr_writel(value, 0xe0004854L);
}
#define CSR_USB_EP_1_IN_DTB_ADDR 0xe0004858L
#define CSR_USB_EP_1_IN_DTB_SIZE 1
static inline unsigned char usb_ep_1_in_dtb_read(void) {
	unsigned char r = csr_readl(0xe0004858L);
	return r;
}
static inline void usb_ep_1_in_dtb_write(unsigned char value) {
	csr_writel(value, 0xe0004858L);
}
#define CSR_USB_EP_1_IN_IBUF_HEAD_ADDR 0xe000485cL
#define CSR_USB_EP_1_IN_IBUF_HEAD_SIZE 1
static inline unsigned char usb_ep_1_in_ibuf_head_read(void) {
	unsigned char r = csr_readl(0xe000485cL);
	return r;
}
static inline void usb_ep_1_in_ibuf_head_write(unsigned char value) {
	csr_writel(value, 0xe000485cL);
}
#define CSR_USB_EP_1_IN_IBUF_EMPTY_ADDR 0xe0004860L
#define CSR_USB_EP_1_IN_IBUF_EMPTY_SIZE 1
static inline unsigned char usb_ep_1_in_ibuf_empty_read(void) {
	unsigned char r = csr_readl(0xe0004860L);
	return r;
}
#define CSR_USB_EP_2_OUT_EV_STATUS_ADDR 0xe0004864L
#define CSR_USB_EP_2_OUT_EV_STATUS_SIZE 1
static inline unsigned char usb_ep_2_out_ev_status_read(void) {
	unsigned char r = csr_readl(0xe0004864L);
	return r;
}
static inline void usb_ep_2_out_ev_status_write(unsigned char value) {
	csr_writel(value, 0xe0004864L);
}
#define CSR_USB_EP_2_OUT_EV_PENDING_ADDR 0xe0004868L
#define CSR_USB_EP_2_OUT_EV_PENDING_SIZE 1
static inline unsigned char usb_ep_2_out_ev_pending_read(void) {
	unsigned char r = csr_readl(0xe0004868L);
	return r;
}
static inline void usb_ep_2_out_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xe0004868L);
}
#define CSR_USB_EP_2_OUT_EV_ENABLE_ADDR 0xe000486cL
#define CSR_USB_EP_2_OUT_EV_ENABLE_SIZE 1
static inline unsigned char usb_ep_2_out_ev_enable_read(void) {
	unsigned char r = csr_readl(0xe000486cL);
	return r;
}
static inline void usb_ep_2_out_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xe000486cL);
}
#define CSR_USB_EP_2_OUT_LAST_TOK_ADDR 0xe0004870L
#define CSR_USB_EP_2_OUT_LAST_TOK_SIZE 1
static inline unsigned char usb_ep_2_out_last_tok_read(void) {
	unsigned char r = csr_readl(0xe0004870L);
	return r;
}
#define CSR_USB_EP_2_OUT_RESPOND_ADDR 0xe0004874L
#define CSR_USB_EP_2_OUT_RESPOND_SIZE 1
static inline unsigned char usb_ep_2_out_respond_read(void) {
	unsigned char r = csr_readl(0xe0004874L);
	return r;
}
static inline void usb_ep_2_out_respond_write(unsigned char value) {
	csr_writel(value, 0xe0004874L);
}
#define CSR_USB_EP_2_OUT_DTB_ADDR 0xe0004878L
#define CSR_USB_EP_2_OUT_DTB_SIZE 1
static inline unsigned char usb_ep_2_out_dtb_read(void) {
	unsigned char r = csr_readl(0xe0004878L);
	return r;
}
static inline void usb_ep_2_out_dtb_write(unsigned char value) {
	csr_writel(value, 0xe0004878L);
}
#define CSR_USB_EP_2_OUT_OBUF_HEAD_ADDR 0xe000487cL
#define CSR_USB_EP_2_OUT_OBUF_HEAD_SIZE 1
static inline unsigned char usb_ep_2_out_obuf_head_read(void) {
	unsigned char r = csr_readl(0xe000487cL);
	return r;
}
static inline void usb_ep_2_out_obuf_head_write(unsigned char value) {
	csr_writel(value, 0xe000487cL);
}
#define CSR_USB_EP_2_OUT_OBUF_EMPTY_ADDR 0xe0004880L
#define CSR_USB_EP_2_OUT_OBUF_EMPTY_SIZE 1
static inline unsigned char usb_ep_2_out_obuf_empty_read(void) {
	unsigned char r = csr_readl(0xe0004880L);
	return r;
}
#define CSR_USB_EP_2_IN_EV_STATUS_ADDR 0xe0004884L
#define CSR_USB_EP_2_IN_EV_STATUS_SIZE 1
static inline unsigned char usb_ep_2_in_ev_status_read(void) {
	unsigned char r = csr_readl(0xe0004884L);
	return r;
}
static inline void usb_ep_2_in_ev_status_write(unsigned char value) {
	csr_writel(value, 0xe0004884L);
}
#define CSR_USB_EP_2_IN_EV_PENDING_ADDR 0xe0004888L
#define CSR_USB_EP_2_IN_EV_PENDING_SIZE 1
static inline unsigned char usb_ep_2_in_ev_pending_read(void) {
	unsigned char r = csr_readl(0xe0004888L);
	return r;
}
static inline void usb_ep_2_in_ev_pending_write(unsigned char value) {
	csr_writel(value, 0xe0004888L);
}
#define CSR_USB_EP_2_IN_EV_ENABLE_ADDR 0xe000488cL
#define CSR_USB_EP_2_IN_EV_ENABLE_SIZE 1
static inline unsigned char usb_ep_2_in_ev_enable_read(void) {
	unsigned char r = csr_readl(0xe000488cL);
	return r;
}
static inline void usb_ep_2_in_ev_enable_write(unsigned char value) {
	csr_writel(value, 0xe000488cL);
}
#define CSR_USB_EP_2_IN_LAST_TOK_ADDR 0xe0004890L
#define CSR_USB_EP_2_IN_LAST_TOK_SIZE 1
static inline unsigned char usb_ep_2_in_last_tok_read(void) {
	unsigned char r = csr_readl(0xe0004890L);
	return r;
}
#define CSR_USB_EP_2_IN_RESPOND_ADDR 0xe0004894L
#define CSR_USB_EP_2_IN_RESPOND_SIZE 1
static inline unsigned char usb_ep_2_in_respond_read(void) {
	unsigned char r = csr_readl(0xe0004894L);
	return r;
}
static inline void usb_ep_2_in_respond_write(unsigned char value) {
	csr_writel(value, 0xe0004894L);
}
#define CSR_USB_EP_2_IN_DTB_ADDR 0xe0004898L
#define CSR_USB_EP_2_IN_DTB_SIZE 1
static inline unsigned char usb_ep_2_in_dtb_read(void) {
	unsigned char r = csr_readl(0xe0004898L);
	return r;
}
static inline void usb_ep_2_in_dtb_write(unsigned char value) {
	csr_writel(value, 0xe0004898L);
}
#define CSR_USB_EP_2_IN_IBUF_HEAD_ADDR 0xe000489cL
#define CSR_USB_EP_2_IN_IBUF_HEAD_SIZE 1
static inline unsigned char usb_ep_2_in_ibuf_head_read(void) {
	unsigned char r = csr_readl(0xe000489cL);
	return r;
}
static inline void usb_ep_2_in_ibuf_head_write(unsigned char value) {
	csr_writel(value, 0xe000489cL);
}
#define CSR_USB_EP_2_IN_IBUF_EMPTY_ADDR 0xe00048a0L
#define CSR_USB_EP_2_IN_IBUF_EMPTY_SIZE 1
static inline unsigned char usb_ep_2_in_ibuf_empty_read(void) {
	unsigned char r = csr_readl(0xe00048a0L);
	return r;
}
#define CSR_USB_ADDRESS_ADDR 0xe00048a4L
#define CSR_USB_ADDRESS_SIZE 1
static inline unsigned char usb_address_read(void) {
	unsigned char r = csr_readl(0xe00048a4L);
	return r;
}
static inline void usb_address_write(unsigned char value) {
	csr_writel(value, 0xe00048a4L);
}

/* version */
#define CSR_VERSION_BASE 0xe0007000L
#define CSR_VERSION_MAJOR_ADDR 0xe0007000L
#define CSR_VERSION_MAJOR_SIZE 1
static inline unsigned char version_major_read(void) {
	unsigned char r = csr_readl(0xe0007000L);
	return r;
}
#define CSR_VERSION_MINOR_ADDR 0xe0007004L
#define CSR_VERSION_MINOR_SIZE 1
static inline unsigned char version_minor_read(void) {
	unsigned char r = csr_readl(0xe0007004L);
	return r;
}
#define CSR_VERSION_REVISION_ADDR 0xe0007008L
#define CSR_VERSION_REVISION_SIZE 1
static inline unsigned char version_revision_read(void) {
	unsigned char r = csr_readl(0xe0007008L);
	return r;
}
#define CSR_VERSION_GITREV_ADDR 0xe000700cL
#define CSR_VERSION_GITREV_SIZE 4
static inline unsigned int version_gitrev_read(void) {
	unsigned int r = csr_readl(0xe000700cL);
	r <<= 8;
	r |= csr_readl(0xe0007010L);
	r <<= 8;
	r |= csr_readl(0xe0007014L);
	r <<= 8;
	r |= csr_readl(0xe0007018L);
	return r;
}
#define CSR_VERSION_GITEXTRA_ADDR 0xe000701cL
#define CSR_VERSION_GITEXTRA_SIZE 2
static inline unsigned short int version_gitextra_read(void) {
	unsigned short int r = csr_readl(0xe000701cL);
	r <<= 8;
	r |= csr_readl(0xe0007020L);
	return r;
}
#define CSR_VERSION_DIRTY_ADDR 0xe0007024L
#define CSR_VERSION_DIRTY_SIZE 1
static inline unsigned char version_dirty_read(void) {
	unsigned char r = csr_readl(0xe0007024L);
	return r;
}
#define CSR_VERSION_MODEL_ADDR 0xe0007028L
#define CSR_VERSION_MODEL_SIZE 1
static inline unsigned char version_model_read(void) {
	unsigned char r = csr_readl(0xe0007028L);
	return r;
}

/* constants */
#define TIMER0_INTERRUPT 0
static inline int timer0_interrupt_read(void) {
	return 0;
}
#define USB_INTERRUPT 3
static inline int usb_interrupt_read(void) {
	return 3;
}
#define CSR_DATA_WIDTH 8
static inline int csr_data_width_read(void) {
	return 8;
}
#define SYSTEM_CLOCK_FREQUENCY 12000000
static inline int system_clock_frequency_read(void) {
	return 12000000;
}
#define CONFIG_BITSTREAM_SYNC_HEADER1 2123999870
static inline int config_bitstream_sync_header1_read(void) {
	return 2123999870;
}
#define CONFIG_BITSTREAM_SYNC_HEADER2 2125109630
static inline int config_bitstream_sync_header2_read(void) {
	return 2125109630;
}
#define CONFIG_CLOCK_FREQUENCY 12000000
static inline int config_clock_frequency_read(void) {
	return 12000000;
}
#define CONFIG_CPU_RESET_ADDR 0
static inline int config_cpu_reset_addr_read(void) {
	return 0;
}
#define CONFIG_CPU_TYPE "VEXRISCV"
static inline const char * config_cpu_type_read(void) {
	return "VEXRISCV";
}
#define CONFIG_CPU_VARIANT "VEXRISCV"
static inline const char * config_cpu_variant_read(void) {
	return "VEXRISCV";
}
#define CONFIG_CSR_DATA_WIDTH 8
static inline int config_csr_data_width_read(void) {
	return 8;
}
#define CONFIG_FOMU_REV "HACKER"
static inline const char * config_fomu_rev_read(void) {
	return "HACKER";
}
#define CONFIG_FOMU_REV_HACKER 1
static inline int config_fomu_rev_hacker_read(void) {
	return 1;
}

#endif