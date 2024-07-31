/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "soc/soc.h"

#ifdef __cplusplus
extern "C" {
#endif
// TODO: ZB-93, rewrite this file using regdesc tools when IEEE802154.csv is ready.

#define IEEE802154_COMMAND_REG (IEEE802154_REG_BASE + 0x0000)
#define IEEE802154_OPCODE 0x000000FF
#define IEEE802154_OPCODE_S 0

#define IEEE802154_CTRL_CFG_REG (IEEE802154_REG_BASE + 0x0004)
#define IEEE802154_MAC_INF3_ENABLE (BIT(31))
#define IEEE802154_MAC_INF3_ENABLE_S 31
#define IEEE802154_MAC_INF2_ENABLE (BIT(30))
#define IEEE802154_MAC_INF2_ENABLE_S 30
#define IEEE802154_MAC_INF1_ENABLE (BIT(29))
#define IEEE802154_MAC_INF1_ENABLE_S 29
#define IEEE802154_MAC_INF0_ENABLE (BIT(28))
#define IEEE802154_MAC_INF0_ENABLE_S 28
#define IEEE802154_RX_DONE_TRIGGER_IDLE (BIT(27))
#define IEEE802154_RX_DONE_TRIGGER_IDLE_S 27
#define IEEE802154_FORCE_RX_ENB (BIT(26))
#define IEEE802154_FORCE_RX_ENB_S 26
#define IEEE802154_NO_RSS_TRK_ENB (BIT(25))
#define IEEE802154_NO_RSS_TRK_ENB_S 25
#define IEEE802154_BIT_ORDER (BIT(24))
#define IEEE802154_BIT_ORDER_S 24
#define IEEE802154_COEX_ARB_DELAY 0x000000FF
#define IEEE802154_COEX_ARB_DELAY_S 16
#define IEEE802154_FILTER_ENHANCE (BIT(14))
#define IEEE802154_FILTER_ENHANCE_S 14
#define IEEE802154_AUTOPEND_ENHANCE (BIT(12))
#define IEEE802154_AUTOPEND_ENHANCE_S 12
#define IEEE802154_DIS_FRAME_VERSION_RSV_FILTER (BIT(11))
#define IEEE802154_DIS_FRAME_VERSION_RSV_FILTER_S 11
#define IEEE802154_PROMISCUOUS_MODE (BIT(7))
#define IEEE802154_PROMISCUOUS_MODE_S 7
#define IEEE802154_PAN_COORDINATOR (BIT(6))
#define IEEE802154_PAN_COORDINATOR_S 6
#define IEEE802154_DIS_IFS_CONTROL (BIT(5))
#define IEEE802154_DIS_IFS_CONTROL_S 5
#define IEEE802154_HW_AUTO_ACK_RX_EN (BIT(3))
#define IEEE802154_HW_AUTO_ACK_RX_EN_S 3
#define HW_ENHANCE_ACK_TX_EN (BIT(1))
#define HW_ENHANCE_ACK_TX_EN_S 1
#define IEEE802154_HW_AUTO_ACK_TX_EN (BIT(0))
#define IEEE802154_HW_AUTO_ACK_TX_EN_S 0

#define IEEE802154_INF0_SHORT_ADDR_REG (IEEE802154_REG_BASE + 0x0008)
#define IEEE802154_MAC_INF0_SHORT_ADDR 0x0000FFFF
#define IEEE802154_MAC_INF0_SHORT_ADDR_S 0

#define IEEE802154_INF0_PAN_ID_REG (IEEE802154_REG_BASE + 0x000C)
#define IEEE802154_MAC_INF0_PAN_ID 0x0000FFFF
#define IEEE802154_MAC_INF0_PAN_ID_S 0

#define IEEE802154_INF0_EXTEND_ADDR0_REG (IEEE802154_REG_BASE + 0x0010)
#define IEEE802154_MAC_INF0_EXTEND_ADDR0 0xFFFFFFFF
#define IEEE802154_MAC_INF0_EXTEND_ADDR0_S 0

#define IEEE802154_INF0_EXTEND_ADDR1_REG (IEEE802154_REG_BASE + 0x0014)
#define IEEE802154_MAC_INF0_EXTEND_ADDR1 0xFFFFFFFF
#define IEEE802154_MAC_INF0_EXTEND_ADDR1_S 0

#define IEEE802154_INF1_SHORT_ADDR_REG (IEEE802154_REG_BASE + 0x0018)
#define IEEE802154_MAC_INF1_SHORT_ADDR 0x0000FFFF
#define IEEE802154_MAC_INF1_SHORT_ADDR_S 0

#define IEEE802154_INF1_PAN_ID_REG (IEEE802154_REG_BASE + 0x001C)
#define IEEE802154_MAC_INF1_PAN_ID 0x0000FFFF
#define IEEE802154_MAC_INF1_PAN_ID_S 0

#define IEEE802154_INF1_EXTEND_ADDR0_REG (IEEE802154_REG_BASE + 0x0020)
#define IEEE802154_MAC_INF1_EXTEND_ADDR0 0xFFFFFFFF
#define IEEE802154_MAC_INF1_EXTEND_ADDR0_S 0

#define IEEE802154_INF1_EXTEND_ADDR1_REG (IEEE802154_REG_BASE + 0x0024)
#define IEEE802154_MAC_INF1_EXTEND_ADDR1 0xFFFFFFFF
#define IEEE802154_MAC_INF1_EXTEND_ADDR1_S 0

#define IEEE802154_INF2_SHORT_ADDR_REG (IEEE802154_REG_BASE + 0x0028)
#define IEEE802154_MAC_INF2_SHORT_ADDR 0x0000FFFF
#define IEEE802154_MAC_INF2_SHORT_ADDR_S 0

#define IEEE802154_INF2_PAN_ID_REG (IEEE802154_REG_BASE + 0x002C)
#define IEEE802154_MAC_INF2_PAN_ID 0x0000FFFF
#define IEEE802154_MAC_INF2_PAN_ID_S 0

#define IEEE802154_INF2_EXTEND_ADDR0_REG (IEEE802154_REG_BASE + 0x0030)
#define IEEE802154_MAC_INF2_EXTEND_ADDR0 0xFFFFFFFF
#define IEEE802154_MAC_INF2_EXTEND_ADDR0_S 0

#define IEEE802154_INF2_EXTEND_ADDR1_REG (IEEE802154_REG_BASE + 0x0034)
#define IEEE802154_MAC_INF2_EXTEND_ADDR1 0xFFFFFFFF
#define IEEE802154_MAC_INF2_EXTEND_ADDR1_S 0

#define IEEE802154_INF3_SHORT_ADDR_REG (IEEE802154_REG_BASE + 0x0038)
#define IEEE802154_MAC_INF3_SHORT_ADDR 0x0000FFFF
#define IEEE802154_MAC_INF3_SHORT_ADDR_S 0

#define IEEE802154_INF3_PAN_ID_REG (IEEE802154_REG_BASE + 0x003C)
#define IEEE802154_MAC_INF3_PAN_ID 0x0000FFFF
#define IEEE802154_MAC_INF3_PAN_ID_S 0

#define IEEE802154_INF3_EXTEND_ADDR0_REG (IEEE802154_REG_BASE + 0x0040)
#define IEEE802154_MAC_INF3_EXTEND_ADDR0 0xFFFFFFFF
#define IEEE802154_MAC_INF3_EXTEND_ADDR0_S 0

#define IEEE802154_INF3_EXTEND_ADDR1_REG (IEEE802154_REG_BASE + 0x0044)
#define IEEE802154_MAC_INF3_EXTEND_ADDR1 0xFFFFFFFF
#define IEEE802154_MAC_INF3_EXTEND_ADDR1_S 0

#define IEEE802154_CHANNEL_REG (IEEE802154_REG_BASE + 0x0048)
#define IEEE802154_HOP 0x0000007F
#define IEEE802154_HOP_S 0

#define IEEE802154_TX_POWER_REG (IEEE802154_REG_BASE + 0x004C)
#define IEEE802154_TX_POWER 0x0000001F
#define IEEE802154_TX_POWER_S 0

#define IEEE802154_ED_SCAN_DURATION_REG (IEEE802154_REG_BASE + 0x0050)
#define IEEE802154_ED_SCAN_WAIT_DLY 0x0000000F
#define IEEE802154_ED_SCAN_WAIT_DLY_S 24
#define IEEE802154_ED_SCAN_DURATION 0x00FFFFFF
#define IEEE802154_ED_SCAN_DURATION_S 0

#define IEEE802154_ED_SCAN_CFG_REG (IEEE802154_REG_BASE + 0x0054)
#define IEEE802154_CCA_BUSY (BIT(24))
#define IEEE802154_CCA_BUSY_S 24
#define IEEE802154_ED_RSS 0x000000FF
#define IEEE802154_ED_RSS_S 16
#define IEEE802154_CCA_MODE 0x00000003
#define IEEE802154_CCA_MODE_S 14
#define IEEE802154_DIS_ED_POWER_SEL (BIT(13))
#define IEEE802154_DIS_ED_POWER_SEL_S 13
#define IEEE802154_ED_SAMPLE_MODE 0x00000003
#define IEEE802154_ED_SAMPLE_MODE_S 11
#define IEEE802154_CCA_ED_THRESHOLD 0x000000FF
#define IEEE802154_CCA_ED_THRESHOLD_S 0

#define IEEE802154_IFS_REG (IEEE802154_REG_BASE + 0x0058)
#define IEEE802154_LIFS 0x000003FF
#define IEEE802154_LIFS_S 16
#define IEEE802154_SIFS 0x000000FF
#define IEEE802154_SIFS_S 0

#define IEEE802154_ACK_TIMEOUT_REG (IEEE802154_REG_BASE + 0x005C)
#define IEEE802154_ACK_TIMEOUT 0x0000FFFF
#define IEEE802154_ACK_TIMEOUT_S 0

#define IEEE802154_EVENT_EN_REG (IEEE802154_REG_BASE + 0x0060)
#define IEEE802154_EVENT_EN 0x00001FFF
#define IEEE802154_EVENT_EN_S 0

#define IEEE802154_EVENT_STATUS_REG (IEEE802154_REG_BASE + 0x0064)
#define IEEE802154_EVENT_STATUS 0x00001FFF
#define IEEE802154_EVENT_STATUS_S 0

#define IEEE802154_RX_ABORT_INTR_CTRL_REG (IEEE802154_REG_BASE + 0x0068)
#define IEEE802154_RX_ABORT_INTR_CTRL 0x7FFFFFFF
#define IEEE802154_RX_ABORT_INTR_CTRL_S 0

#define IEEE802154_ACK_FRAME_PENDING_EN_REG (IEEE802154_REG_BASE + 0x006c)
#define IEEE802154_ACK_TX_ACK_TIMEOUT 0x0000FFFF
#define IEEE802154_ACK_TX_ACK_TIMEOUT_S 16
#define IEEE802154_ACK_FRAME_PENDING_EN (BIT(0))
#define IEEE802154_ACK_FRAME_PENDING_EN_S 0

#define IEEE802154_COEX_PTI_REG (IEEE802154_REG_BASE + 0x0070)
#define IEEE802154_CLOSE_RF_SEL (BIT(8))
#define IEEE802154_CLOSE_RF_SEL_S 8
#define IEEE802154_COEX_ACK_PTI 0x0000000F
#define IEEE802154_COEX_ACK_PTI_S 4
#define IEEE802154_COEX_PTI 0x0000000F
#define IEEE802154_COEX_PTI_S 0

#define IEEE802154_TX_ABORT_INTERRUPT_CONTROL_REG (IEEE802154_REG_BASE + 0x0078)
#define IEEE802154_TX_ABORT_INTERRUPT_CONTROL 0x7FFFFFFF
#define IEEE802154_TX_ABORT_INTERRUPT_CONTROL_S 0

#define IEEE802154_ENHANCE_ACK_CFG_REG (IEEE802154_REG_BASE + 0x7C)
#define IEEE802154_TX_ENH_ACK_GENERATE_DONE_NOTIFY 0xFFFFFFFF
#define IEEE802154_TX_ENH_ACK_GENERATE_DONE_NOTIFY_S 0

#define IEEE802154_RX_STATUS_REG (IEEE802154_REG_BASE + 0x0080)
#define IEEE802154_SFD_MATCH (BIT(21))
#define IEEE802154_SFD_MATCH_S 21
#define IEEE802154_PREAMBLE_MATCH (BIT(20))
#define IEEE802154_PREAMBLE_MATCH_S 20
#define IEEE802154_RX_STATE 0x00000007
#define IEEE802154_RX_STATE_S 16
#define IEEE802154_RX_ABORT_STATUS 0x0000001F
#define IEEE802154_RX_ABORT_STATUS_S 4
#define IEEE802154_FILTER_FAIL_STATUS 0x0000000F
#define IEEE802154_FILTER_FAIL_STATUS_S 0

#define IEEE802154_TX_STATUS_REG (IEEE802154_REG_BASE + 0x0084)
#define IEEE802154_TX_SEC_ERROR_CODE 0x0000000F
#define IEEE802154_TX_SEC_ERROR_CODE_S 16
#define IEEE802154_TX_ABORT_STATUS 0x0000001F
#define IEEE802154_TX_ABORT_STATUS_S 4
#define IEEE802154_TX_STATE 0x0000000F
#define IEEE802154_TX_STATE_S 0

#define IEEE802154_TXRX_STATUS_REG (IEEE802154_REG_BASE + 0x0088)
#define IEEE802154_RF_CTRL_STATE 0x0000000F
#define IEEE802154_RF_CTRL_STATE_S 16
#define IEEE802154_ED_TRIGGER_TX_PROC (BIT(11))
#define IEEE802154_ED_TRIGGER_TX_PROC_S 11
#define IEEE802154_ED_PROC (BIT(10))
#define IEEE802154_ED_PROC_S 10
#define IEEE802154_RX_PROC (BIT(9))
#define IEEE802154_RX_PROC_S 9
#define IEEE802154_TX_PROC (BIT(8))
#define IEEE802154_TX_PROC_S 8
#define IEEE802154_TXRX_STATE 0x0000000F
#define IEEE802154_TXRX_STATE_S 0

#define IEEE802154_TX_CCM_SCHEDULE_STATUS_REG (IEEE802154_REG_BASE + 0x008c)
#define IEEE802154_TX_CCM_SCHEDULE_STATUS 0x7FFFFFFF
#define IEEE802154_TX_CCM_SCHEDULE_STATUS_S 0

#define IEEE802154_RX_LENGTH_REG (IEEE802154_REG_BASE + 0x00a4)
#define IEEE802154_RX_LENGTH 0x0000007F
#define IEEE802154_RX_LENGTH_S 0

#define IEEE802154_TIME0_THRESHOLD_REG (IEEE802154_REG_BASE + 0x00a8)
#define IEEE802154_TIMER0_THRESHOLD 0xFFFFFFFF
#define IEEE802154_TIMER0_THRESHOLD_S 0

#define IEEE802154_TIME0_VALUE_REG (IEEE802154_REG_BASE + 0x00ac)
#define IEEE802154_TIMER0_VALUE 0xFFFFFFFF
#define IEEE802154_TIMER0_VALUE_S 0

#define IEEE802154_TIME1_THRESHOLD_REG (IEEE802154_REG_BASE + 0x00b0)
#define IEEE802154_TIMER1_THRESHOLD 0xFFFFFFFF
#define IEEE802154_TIMER1_THRESHOLD_S 0

#define IEEE802154_TIME1_VALUE_REG (IEEE802154_REG_BASE + 0x00b4)
#define IEEE802154_TIMER1_VALUE 0xFFFFFFFF
#define IEEE802154_TIMER1_VALUE_S 0

#define IEEE802154_CLK_COUNTER_MATCH_VAL_REG (IEEE802154_REG_BASE + 0x00b8)
#define IEEE802154_CLK_COUNT_MATCH_VAL 0x0000FFFF
#define IEEE802154_CLK_COUNT_MATCH_VAL_S 0

#define IEEE802154_CLK_COUNTER_REG (IEEE802154_REG_BASE + 0x00bc)
#define IEEE802154_CLK_625US_CNT 0x0000FFFF
#define IEEE802154_CLK_625US_CNT_S 0

#define IEEE802154_IFS_COUNTER_REG (IEEE802154_REG_BASE + 0x00c0)
#define IEEE802154_IFS_COUNTER_EN (BIT(16))
#define IEEE802154_IFS_COUNTER_EN_S 16
#define IEEE802154_IFS_COUNTER 0x000003FF
#define IEEE802154_IFS_COUNTER_S 0

#define IEEE802154_SFD_WAIT_SYMBOL_REG (IEEE802154_REG_BASE + 0x00c4)
#define IEEE802154_SFD_WAIT_SYMBOL_NUM 0x0000000F
#define IEEE802154_SFD_WAIT_SYMBOL_NUM_S 0

#define IEEE802154_TXRX_PATH_DELAY_REG (IEEE802154_REG_BASE + 0x00c8)
#define IEEE802154_RX_PATH_DELAY 0x0000003F
#define IEEE802154_RX_PATH_DELAY_S 16
#define IEEE802154_TX_PATH_DELAY 0x0000003F
#define IEEE802154_TX_PATH_DELAY_S 0

#define IEEE802154_BB_CLK_REG (IEEE802154_REG_BASE + 0x00cc)
#define IEEE802154_BB_CLK_FREQ_MINUS_1 0x0000001F
#define IEEE802154_BB_CLK_FREQ_MINUS_1_S 0

#define IEEE802154_TXDMA_ADDR_REG (IEEE802154_REG_BASE + 0x00D0)
#define IEEE802154_TXDMA_ADDR 0xFFFFFFFF
#define IEEE802154_TXDMA_ADDR_S 0

#define IEEE802154_TXDMA_CTRL_STATE_REG (IEEE802154_REG_BASE + 0x00D4)
#define IEEE802154_TXDMA_FETCH_BYTE_CNT 0x0000007F
#define IEEE802154_TXDMA_FETCH_BYTE_CNT_S 24
#define IEEE802154_TXDMA_STATE 0x0000001F
#define IEEE802154_TXDMA_STATE_S 16
#define IEEE802154_TXDMA_FILL_ENTRY 0x00000007
#define IEEE802154_TXDMA_FILL_ENTRY_S 4
#define IEEE802154_TXDMA_WATER_LEVEL 0x00000007
#define IEEE802154_TXDMA_WATER_LEVEL_S 0

#define IEEE802154_TXDMA_ERR_REG (IEEE802154_REG_BASE + 0x00D8)
#define IEEE802154_TXDMA_ERR 0x0000000F
#define IEEE802154_TXDMA_ERR_S 0

#define IEEE802154_RXDMA_ADDR_REG (IEEE802154_REG_BASE + 0x00E0)
#define IEEE802154_RXDMA_ADDR 0xFFFFFFFF
#define IEEE802154_RXDMA_ADDR_S 0

#define IEEE802154_RXDMA_CTRL_STATE_REG (IEEE802154_REG_BASE + 0x00E4)
#define IEEE802154_RXDMA_APPEND_FREQ_OFFSET (BIT(25))
#define IEEE802154_RXDMA_APPEND_FREQ_OFFSET_S 25
#define IEEE802154_RXDMA_APPEND_LQI_OFFSET (BIT(24))
#define IEEE802154_RXDMA_APPEND_LQI_OFFSET_S 24
#define IEEE802154_RXDMA_STATE 0x0000001F
#define IEEE802154_RXDMA_STATE_S 16
#define IEEE802154_RXDMA_WATER_LEVEL 0x00000007
#define IEEE802154_RXDMA_WATER_LEVEL_S 0

#define IEEE802154_RXDMA_ERR_REG (IEEE802154_REG_BASE + 0x00E8)
#define IEEE802154_RXDMA_ERR 0x0000000F
#define IEEE802154_RXDMA_ERR_S 0

#define IEEE802154_DMA_GCK_CFG_REG (IEEE802154_REG_BASE + 0x00F0)
#define IEEE802154_DMA_GCK_CFG (BIT(0))
#define IEEE802154_DMA_GCK_CFG_S 0

#define IEEE802154_DMA_DUMMY_REG (IEEE802154_REG_BASE + 0x00F4)
#define IEEE802154_DMA_DUMMY_DATA 0xFFFFFFFF
#define IEEE802154_DMA_DUMMY_DATA_S

#define IEEE802154_PAON_DELAY_REG (IEEE802154_REG_BASE + 0x0100)
#define IEEE802154_PAON_DELAY 0x000003FF
#define IEEE802154_PAON_DELAY_S 0

#define IEEE802154_TXON_DELAY_REG (IEEE802154_REG_BASE + 0x0104)
#define IEEE802154_TXON_DELAY 0x000003FF
#define IEEE802154_TXON_DELAY_S 0

#define IEEE802154_TXEN_STOP_DELAY_REG (IEEE802154_REG_BASE + 0x0108)
#define IEEE802154_TXEN_STOP_DLY 0x0000003F
#define IEEE802154_TXEN_STOP_DLY_S 0

#define IEEE802154_TXOFF_DELAY_REG (IEEE802154_REG_BASE + 0x010c)
#define IEEE802154_TXOFF_DELAY 0x0000003F
#define IEEE802154_TXOFF_DELAY_S 0

#define IEEE802154_RXON_DELAY_REG (IEEE802154_REG_BASE + 0x0110)
#define IEEE802154_RXON_DELAY 0x000007FF
#define IEEE802154_RXON_DELAY_S 0

#define IEEE802154_TXRX_SWITCH_DELAY_REG (IEEE802154_REG_BASE + 0x0114)
#define IEEE802154_TXRX_SWITCH_DELAY 0x000003FF
#define IEEE802154_TXRX_SWITCH_DELAY_S 0

#define IEEE802154_CONT_RX_DELAY_REG (IEEE802154_REG_BASE + 0x0118)
#define IEEE802154_CONT_RX_DELAY 0x0000003F
#define IEEE802154_CONT_RX_DELAY_S 0

#define IEEE802154_DCDC_CTRL_REG (IEEE802154_REG_BASE + 0x011c)
#define IEEE802154_TX_DCDC_UP (BIT(31))
#define IEEE802154_TX_DCDC_UP_S 31
#define IEEE802154_DCDC_CTRL_EN (BIT(16))
#define IEEE802154_DCDC_CTRL_EN_S 16
#define IEEE802154_DCDC_DOWN_DELAY 0x000000FF
#define IEEE802154_DCDC_DOWN_DELAY_S 8
#define IEEE802154_DCDC_PRE_UP_DELAY 0x000000FF
#define IEEE802154_DCDC_PRE_UP_DELAY_S 0

#define IEEE802154_DEBUG_CTRL_REG (IEEE802154_REG_BASE + 0x0120)
#define IEEE802154_DEBUG_TRIGGER_DUMP_EN (BIT(31))
#define IEEE802154_DEBUG_TRIGGER_DUMP_EN_S 31
#define IEEE802154_DEBUG_STATE_MATCH_DUMP_EN (BIT(30))
#define IEEE802154_DEBUG_STATE_MATCH_DUMP_EN_S 30
#define IEEE802154_DEBUG_TRIGGER_PULSE_SELECT 0x00000007
#define IEEE802154_DEBUG_TRIGGER_PULSE_SELECT_S 24
#define IEEE802154_DEBUG_TRIGGER_STATE_MATCH_VALUE 0x0000001F
#define IEEE802154_DEBUG_TRIGGER_STATE_MATCH_VALUE_S 16
#define IEEE802154_DEBUG_SER_DEBUG_SEL 0x0000000F
#define IEEE802154_DEBUG_SER_DEBUG_SEL_S 12
#define IEEE802154_DEBUG_TRIGGER_STATE_SELECT 0x0000000F
#define IEEE802154_DEBUG_TRIGGER_STATE_SELECT_S 8
#define IEEE802154_DEBUG_SIGNAL_SEL 0x00000007
#define IEEE802154_DEBUG_SIGNAL_SEL_S 0

#define IEEE802154_SEC_CTRL_REG (IEEE802154_REG_BASE + 0x0128)
#define IEEE802154_SEC_PAYLOAD_OFFSET 0x0000007F
#define IEEE802154_SEC_PAYLOAD_OFFSET_S 8
#define IEEE802154_SEC_EN (BIT(0))
#define IEEE802154_SEC_EN_S 0

#define IEEE802154_SEC_EXTEND_ADDRESS0_REG (IEEE802154_REG_BASE + 0x012c)
#define IEEE802154_SEC_EXTEND_ADDRESS0 0xFFFFFFFF
#define IEEE802154_SEC_EXTEND_ADDRESS0_S 0

#define IEEE802154_SEC_EXTEND_ADDRESS1_REG (IEEE802154_REG_BASE + 0x0130)
#define IEEE802154_SEC_EXTEND_ADDRESS1 0xFFFFFFFF
#define IEEE802154_SEC_EXTEND_ADDRESS1_S 0

#define IEEE802154_SEC_KEY0_REG (IEEE802154_REG_BASE + 0x0134)
#define IEEE802154_SEC_KEY0 0xFFFFFFFF
#define IEEE802154_SEC_KEY0_S 0

#define IEEE802154_SEC_KEY1_REG (IEEE802154_REG_BASE + 0x0138)
#define IEEE802154_SEC_KEY1 0xFFFFFFFF
#define IEEE802154_SEC_KEY1_S 0

#define IEEE802154_SEC_KEY2_REG (IEEE802154_REG_BASE + 0x013c)
#define IEEE802154_SEC_KEY2 0xFFFFFFFF
#define IEEE802154_SEC_KEY2_S 0

#define IEEE802154_SEC_KEY3_REG (IEEE802154_REG_BASE + 0x0140)
#define IEEE802154_SEC_KEY3 0xFFFFFFFF
#define IEEE802154_SEC_KEY3_S 0

#define IEEE802154_SFD_TIMEOUT_CNT_REG (IEEE802154_REG_BASE + 0x0144)
#define IEEE802154_SFD_TIMEOUT_CNT 0x0000FFFF
#define IEEE802154_SFD_TIMEOUT_CNT_S 0

#define IEEE802154_CRC_ERROR_CNT_REG (IEEE802154_REG_BASE + 0x0148)
#define IEEE802154_CRC_ERROR_CNT 0x0000FFFF
#define IEEE802154_CRC_ERROR_CNT_S 0

#define IEEE802154_ED_ABORT_CNT_REG (IEEE802154_REG_BASE + 0x014c)
#define IEEE802154_ED_ABORT_CNT 0x0000FFFF
#define IEEE802154_ED_ABORT_CNT_S 0

#define IEEE802154_CCA_FAIL_CNT_REG (IEEE802154_REG_BASE + 0x0150)
#define IEEE802154_CCA_FAIL_CNT 0x0000FFFF
#define IEEE802154_CCA_FAIL_CNT_S 0

#define IEEE802154_RX_FILTER_FAIL_CNT_REG (IEEE802154_REG_BASE + 0x0154)
#define IEEE802154_RX_FILTER_FAIL_CNT 0x0000FFFF
#define IEEE802154_RX_FILTER_FAIL_CNT_S 0

#define IEEE802154_NO_RSS_DETECT_CNT_REG (IEEE802154_REG_BASE + 0x0158)
#define IEEE802154_NO_RSS_DETECT_CNT 0x0000FFFF
#define IEEE802154_NO_RSS_DETECT_CNT_S 0

#define IEEE802154_RX_ABORT_COEX_CNT_REG (IEEE802154_REG_BASE + 0x015c)
#define IEEE802154_RX_ABORT_COEX_CNT 0x0000FFFF
#define IEEE802154_RX_ABORT_COEX_CNT_S 0

#define IEEE802154_RX_RESTART_CNT_REG (IEEE802154_REG_BASE + 0x0160)
#define IEEE802154_RX_RESTART_CNT 0x0000FFFF
#define IEEE802154_RX_RESTART_CNT_S 0

#define IEEE802154_TX_ACK_ABORT_COEX_CNT_REG (IEEE802154_REG_BASE + 0x0164)
#define IEEE802154_TX_ACK_ABORT_COEX_CNT 0x0000FFFF
#define IEEE802154_TX_ACK_ABORT_COEX_CNT_S 0

#define IEEE802154_ED_SCAN_COEX_CNT_REG (IEEE802154_REG_BASE + 0x0168)
#define IEEE802154_ED_SCAN_COEX_CNT 0x0000FFFF
#define IEEE802154_ED_SCAN_COEX_CNT_S 0

#define IEEE802154_RX_ACK_ABORT_COEX_CNT_REG (IEEE802154_REG_BASE + 0x016c)
#define IEEE802154_RX_ACK_ABORT_COEX_CNT 0x0000FFFF
#define IEEE802154_RX_ACK_ABORT_COEX_CNT_S 0

#define IEEE802154_RX_ACK_TIMEOUT_CNT_REG (IEEE802154_REG_BASE + 0x0170)
#define IEEE802154_RX_ACK_TIMEOUT_CNT 0x0000FFFF
#define IEEE802154_RX_ACK_TIMEOUT_CNT_S 0

#define IEEE802154_TX_BREAK_COEX_CNT_REG (IEEE802154_REG_BASE + 0x0174)
#define IEEE802154_TX_BREAK_COEX_CNT 0x0000FFFF
#define IEEE802154_TX_BREAK_COEX_CNT_S 0

#define IEEE802154_TX_SECURITY_ERROR_CNT_REG (IEEE802154_REG_BASE + 0x0178)
#define IEEE802154_TX_SECURITY_ERROR_CNT 0x0000FFFF
#define IEEE802154_TX_SECURITY_ERROR_CNT_S 0

#define IEEE802154_CCA_BUSY_CNT_REG (IEEE802154_REG_BASE + 0x017c)
#define IEEE802154_CCA_BUSY_CNT 0x0000FFFF
#define IEEE802154_CCA_BUSY_CNT_S 0

#define IEEE802154_ERROR_CNT_CLEAR_REG (IEEE802154_REG_BASE + 0x0180)
#define IEEE802154_SFD_TIMEOUT_CNT_CLEAR (BIT(14))
#define IEEE802154_SFD_TIMEOUT_CNT_CLEAR_S 14
#define IEEE802154_CRC_ERROR_CNT_CLEAR (BIT(13))
#define IEEE802154_CRC_ERROR_CNT_CLEAR_S 13
#define IEEE802154_RX_FILTER_FAIL_CNT_CLEAR (BIT(12))
#define IEEE802154_RX_FILTER_FAIL_CNT_CLEAR_S 12
#define IEEE802154_NO_RSS_DETECT_CNT_CLEAR (BIT(11))
#define IEEE802154_NO_RSS_DETECT_CNT_CLEAR_S 11
#define IEEE802154_RX_ABORT_COEX_CNT_CLEAR (BIT(10))
#define IEEE802154_RX_ABORT_COEX_CNT_CLEAR_S 10
#define IEEE802154_RX_ACK_ABORT_COEX_CNT_CLEAR (BIT(9))
#define IEEE802154_RX_ACK_ABORT_COEX_CNT_CLEAR_S 9
#define IEEE802154_RX_RESTART_CNT_CLEAR (BIT(8))
#define IEEE802154_RX_RESTART_CNT_CLEAR_S 8
#define IEEE802154_RX_ACK_TIMEOUT_CNT_CLEAR (BIT(7))
#define IEEE802154_RX_ACK_TIMEOUT_CNT_CLEAR_S 7
#define IEEE802154_TX_ACK_ABORT_COEX_CNT_CLEAR (BIT(6))
#define IEEE802154_TX_ACK_ABORT_COEX_CNT_CLEAR_S 6
#define IEEE802154_TX_BREAK_COEX_CNT_CLEAR (BIT(5))
#define IEEE802154_TX_BREAK_COEX_CNT_CLEAR_S 5
#define IEEE802154_TX_SECURITY_ERROR_CNT_CLEAR (BIT(4))
#define IEEE802154_TX_SECURITY_ERROR_CNT_CLEAR_S 4
#define IEEE802154_ED_ABORT_CNT_CLEAR (BIT(3))
#define IEEE802154_ED_ABORT_CNT_CLEAR_S 3
#define IEEE802154_CCA_FAIL_CNT_CLEAR (BIT(2))
#define IEEE802154_CCA_FAIL_CNT_CLEAR_S 2
#define IEEE802154_CCA_BUSY_CNT_CLEAR (BIT(1))
#define IEEE802154_CCA_BUSY_CNT_CLEAR_S 1
#define IEEE802154_ED_SCAN_COEX_CNT_CLEAR (BIT(0))
#define IEEE802154_ED_SCAN_COEX_CNT_CLEAR_S 0

#define IEEE802154_MAC_DATE_REG (IEEE802154_REG_BASE + 0x0184)
#define IEEE802154_MAC_DATE 0xFFFFFFFF
#define IEEE802154_MAC_DATE_S 0
#define IEEE802154_MAC_DATE_VERSION 0x220622

// For ETM feature.
#define ETM_REG_BASE    0x600A8800
#define ETM_CHEN_AD0_REG (ETM_REG_BASE + 0x0000)
#define ETM_CHENSET_AD0_REG (ETM_REG_BASE + 0x0004)
#define ETM_CHENCLR_AD0_REG (ETM_REG_BASE + 0x0008)
#define ETM_CH0_EVT_ID_REG (ETM_REG_BASE + 0x0018)
#define ETM_CH0_TASK_ID_REG (ETM_REG_BASE + 0x001C)

#define ETM_CH_OFFSET 0x08

#define ETM_EVENT_TIMER1_OVERFLOW  58
#define ETM_EVENT_TIMER0_OVERFLOW  59
#define ETM_TASK_ED_TRIG_TX        64
#define ETM_TASK_RX_START          65
#define ETM_TASK_TX_START          68

#ifdef __cplusplus
}
#endif
