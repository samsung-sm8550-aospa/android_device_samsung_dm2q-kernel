/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _MSM_IPA_H_
#define _MSM_IPA_H_
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <sys/stat.h>
#include <linux/ioctl.h>
#include <linux/types.h>
#include <linux/if_ether.h>
#define IPA_IOC_MAGIC 0xCF
#define IPA_DEV_NAME "/dev/ipa"
#define IPA_NAT_DEV_NAME "ipaNatTable"
#define IPA_IPV6CT_DEV_NAME "ipaIpv6CTTable"
#define IPA_DFLT_RT_TBL_NAME "ipa_dflt_rt"
#define IPAHAL_NAT_INVALID_PROTOCOL 0xFF
#define IPA_IOCTL_ADD_HDR 0
#define IPA_IOCTL_DEL_HDR 1
#define IPA_IOCTL_ADD_RT_RULE 2
#define IPA_IOCTL_DEL_RT_RULE 3
#define IPA_IOCTL_ADD_FLT_RULE 4
#define IPA_IOCTL_DEL_FLT_RULE 5
#define IPA_IOCTL_COMMIT_HDR 6
#define IPA_IOCTL_RESET_HDR 7
#define IPA_IOCTL_COMMIT_RT 8
#define IPA_IOCTL_RESET_RT 9
#define IPA_IOCTL_COMMIT_FLT 10
#define IPA_IOCTL_RESET_FLT 11
#define IPA_IOCTL_DUMP 12
#define IPA_IOCTL_GET_RT_TBL 13
#define IPA_IOCTL_PUT_RT_TBL 14
#define IPA_IOCTL_COPY_HDR 15
#define IPA_IOCTL_QUERY_INTF 16
#define IPA_IOCTL_QUERY_INTF_TX_PROPS 17
#define IPA_IOCTL_QUERY_INTF_RX_PROPS 18
#define IPA_IOCTL_GET_HDR 19
#define IPA_IOCTL_PUT_HDR 20
#define IPA_IOCTL_SET_FLT 21
#define IPA_IOCTL_ALLOC_NAT_MEM 22
#define IPA_IOCTL_V4_INIT_NAT 23
#define IPA_IOCTL_TABLE_DMA_CMD 24
#define IPA_IOCTL_NAT_DMA IPA_IOCTL_TABLE_DMA_CMD
#define IPA_IOCTL_INIT_IPV6CT_TABLE 25
#define IPA_IOCTL_V4_DEL_NAT 26
#define IPA_IOCTL_PULL_MSG 27
#define IPA_IOCTL_GET_NAT_OFFSET 28
#define IPA_IOCTL_RM_ADD_DEPENDENCY 29
#define IPA_IOCTL_RM_DEL_DEPENDENCY 30
#define IPA_IOCTL_GENERATE_FLT_EQ 31
#define IPA_IOCTL_QUERY_INTF_EXT_PROPS 32
#define IPA_IOCTL_QUERY_EP_MAPPING 33
#define IPA_IOCTL_QUERY_RT_TBL_INDEX 34
#define IPA_IOCTL_WRITE_QMAPID 35
#define IPA_IOCTL_MDFY_FLT_RULE 36
#define IPA_IOCTL_NOTIFY_WAN_UPSTREAM_ROUTE_ADD 37
#define IPA_IOCTL_NOTIFY_WAN_UPSTREAM_ROUTE_DEL 38
#define IPA_IOCTL_NOTIFY_WAN_EMBMS_CONNECTED 39
#define IPA_IOCTL_ADD_HDR_PROC_CTX 40
#define IPA_IOCTL_DEL_HDR_PROC_CTX 41
#define IPA_IOCTL_MDFY_RT_RULE 42
#define IPA_IOCTL_ADD_RT_RULE_AFTER 43
#define IPA_IOCTL_ADD_FLT_RULE_AFTER 44
#define IPA_IOCTL_GET_HW_VERSION 45
#define IPA_IOCTL_ADD_RT_RULE_EXT 46
#define IPA_IOCTL_ADD_VLAN_IFACE 47
#define IPA_IOCTL_DEL_VLAN_IFACE 48
#define IPA_IOCTL_ADD_L2TP_VLAN_MAPPING 49
#define IPA_IOCTL_DEL_L2TP_VLAN_MAPPING 50
#define IPA_IOCTL_NAT_MODIFY_PDN 51
#define IPA_IOCTL_ALLOC_NAT_TABLE 52
#define IPA_IOCTL_ALLOC_IPV6CT_TABLE 53
#define IPA_IOCTL_DEL_NAT_TABLE 54
#define IPA_IOCTL_DEL_IPV6CT_TABLE 55
#define IPA_IOCTL_CLEANUP 56
#define IPA_IOCTL_QUERY_WLAN_CLIENT 57
#define IPA_IOCTL_GET_VLAN_MODE 58
#define IPA_IOCTL_ADD_BRIDGE_VLAN_MAPPING 59
#define IPA_IOCTL_DEL_BRIDGE_VLAN_MAPPING 60
#define IPA_IOCTL_ODL_QUERY_ADAPL_EP_INFO 61
#define IPA_IOCTL_ODL_GET_AGG_BYTE_LIMIT 62
#define IPA_IOCTL_ODL_QUERY_MODEM_CONFIG 63
#define IPA_IOCTL_GSB_CONNECT 64
#define IPA_IOCTL_GSB_DISCONNECT 65
#define IPA_IOCTL_WIGIG_FST_SWITCH 66
#define IPA_IOCTL_ADD_RT_RULE_V2 67
#define IPA_IOCTL_ADD_RT_RULE_EXT_V2 68
#define IPA_IOCTL_ADD_RT_RULE_AFTER_V2 69
#define IPA_IOCTL_MDFY_RT_RULE_V2 70
#define IPA_IOCTL_ADD_FLT_RULE_V2 71
#define IPA_IOCTL_ADD_FLT_RULE_AFTER_V2 72
#define IPA_IOCTL_MDFY_FLT_RULE_V2 73
#define IPA_IOCTL_FNR_COUNTER_ALLOC 74
#define IPA_IOCTL_FNR_COUNTER_DEALLOC 75
#define IPA_IOCTL_FNR_COUNTER_QUERY 76
#define IPA_IOCTL_SET_FNR_COUNTER_INFO 77
#define IPA_IOCTL_GET_NAT_IN_SRAM_INFO 78
#define IPA_IOCTL_APP_CLOCK_VOTE 79
#define IPA_IOCTL_PDN_CONFIG 80
#define IPA_IOCTL_SET_MAC_FLT 81
#define IPA_IOCTL_GET_PHERIPHERAL_EP_INFO 82
#define IPA_IOCTL_ADD_UC_ACT_ENTRY 83
#define IPA_IOCTL_DEL_UC_ACT_ENTRY 84
#define IPA_IOCTL_SET_SW_FLT 85
#define IPA_IOCTL_SET_PKT_THRESHOLD 87
#define IPA_IOCTL_ADD_EoGRE_MAPPING 88
#define IPA_IOCTL_DEL_EoGRE_MAPPING 89
#define IPA_IOCTL_SET_IPPT_SW_FLT 90
#define IPA_IOCTL_ADD_MACSEC_MAPPING 92
#define IPA_IOCTL_DEL_MACSEC_MAPPING 93
#define IPA_IOCTL_SET_NAT_EXC_RT_TBL_IDX 94
#define IPA_IOCTL_SET_CONN_TRACK_EXC_RT_TBL_IDX 95
#define IPA_IOCTL_COAL_EVICT_POLICY 96
#define IPA_IOCTL_SET_EXT_ROUTER_MODE 97
#define IPA_HDR_MAX_SIZE 255
#define IPA_RESOURCE_NAME_MAX 32
#define IPA_NUM_PROPS_MAX 35
#define IPA_MAC_ADDR_SIZE 6
#define IPA_MBIM_MAX_STREAM_NUM 8
#define IPA_WAN_MSG_IPv6_ADDR_GW_LEN 4
#define IPA_MAX_NUM_HW_PATH_CLIENTS 16
#define QMI_IPA_MAX_CLIENT_DST_PIPES 4
#define IPA_MAX_NUM_MAC_FLT 32
#define IPA_MAX_NUM_IPv4_SEGS_FLT 16
#define IPA_MAX_NUM_IFACE_FLT 4
#define IPA_MAX_FLT_RT_CNT_INDEX (128)
#define IPA_FLT_RT_HW_COUNTER (120)
#define IPA_FLT_RT_SW_COUNTER (IPA_MAX_FLT_RT_CNT_INDEX - IPA_FLT_RT_HW_COUNTER)
#define IPA_MAX_FLT_RT_CLIENTS 60
#define IPA_MAX_IPPT_NUM_PORT_FLT 5
#define IPA_CV2X_SUPPORT
#define IPA_FLT_TOS (1ul << 0)
#define IPA_FLT_PROTOCOL (1ul << 1)
#define IPA_FLT_SRC_ADDR (1ul << 2)
#define IPA_FLT_DST_ADDR (1ul << 3)
#define IPA_FLT_SRC_PORT_RANGE (1ul << 4)
#define IPA_FLT_DST_PORT_RANGE (1ul << 5)
#define IPA_FLT_TYPE (1ul << 6)
#define IPA_FLT_CODE (1ul << 7)
#define IPA_FLT_SPI (1ul << 8)
#define IPA_FLT_SRC_PORT (1ul << 9)
#define IPA_FLT_DST_PORT (1ul << 10)
#define IPA_FLT_TC (1ul << 11)
#define IPA_FLT_FLOW_LABEL (1ul << 12)
#define IPA_FLT_NEXT_HDR (1ul << 13)
#define IPA_FLT_META_DATA (1ul << 14)
#define IPA_FLT_FRAGMENT (1ul << 15)
#define IPA_FLT_TOS_MASKED (1ul << 16)
#define IPA_FLT_MAC_SRC_ADDR_ETHER_II (1ul << 17)
#define IPA_FLT_MAC_DST_ADDR_ETHER_II (1ul << 18)
#define IPA_FLT_MAC_SRC_ADDR_802_3 (1ul << 19)
#define IPA_FLT_MAC_DST_ADDR_802_3 (1ul << 20)
#define IPA_FLT_MAC_ETHER_TYPE (1ul << 21)
#define IPA_FLT_MAC_DST_ADDR_L2TP (1ul << 22)
#define IPA_FLT_TCP_SYN (1ul << 23)
#define IPA_FLT_TCP_SYN_L2TP (1ul << 24)
#define IPA_FLT_L2TP_INNER_IP_TYPE (1ul << 25)
#define IPA_FLT_L2TP_INNER_IPV4_DST_ADDR (1ul << 26)
#define IPA_FLT_IS_PURE_ACK (1ul << 27)
#define IPA_FLT_VLAN_ID (1ul << 28)
#define IPA_FLT_MAC_SRC_ADDR_802_1Q (1ul << 29)
#define IPA_FLT_MAC_DST_ADDR_802_1Q (1ul << 30)
#define IPA_FLT_L2TP_UDP_INNER_MAC_DST_ADDR (1ul << 31)
#define IPA_FLT_EXT_L2TP_UDP_TCP_SYN (1ul << 0)
#define IPA_FLT_EXT_L2TP_UDP_INNER_ETHER_TYPE (1ul << 1)
#define IPA_FLT_EXT_MTU (1ul << 2)
#define IPA_FLT_EXT_L2TP_UDP_INNER_NEXT_HDR (1ul << 3)
#define IPA_FLT_EXT_NEXT_HDR (1ul << 4)
#define IPA_MAX_PDN_NUM 16
#define IPA_MAX_PDN_NUM_v4 5
#define IPA_LNX_PG_RECYCLE_STATS_STRUCT_LEN 32
#define IPA_LNX_EXCEPTION_STATS_STRUCT_LEN 40
#define IPA_LNX_ODL_EP_STATS_STRUCT_LEN 16
#define IPA_LNX_HOLB_DISCARD_STATS_STRUCT_LEN 16
#define IPA_LNX_HOLB_MONITOR_STATS_STRUCT_LEN 16
#define IPA_LNX_HOLB_DROP_AND_MON_STATS_STRUCT_LEN (8 + 16 + 16)
#define IPA_LNX_GENERIC_STATS_STRUCT_LEN (40 + 32 + 40 + 16 + 40)
#define IPA_LNX_PM_CLIENT_STATS_STRUCT_LEN 24
#define IPA_LNX_CLOCK_STATS_STRUCT_LEN (24 + 24)
#define IPA_LNX_GSI_RX_DEBUG_STATS_STRUCT_LEN 48
#define IPA_LNX_GSI_TX_DEBUG_STATS_STRUCT_LEN 56
#define IPA_LNX_GSI_DEBUG_STATS_STRUCT_LEN (8 + 48 + 56)
#define IPA_LNX_PIPE_INFO_STATS_STRUCT_LEN 120
#define IPA_LNX_WLAN_INSTANCE_INFO_STRUCT_LEN (32 + 112 + 120)
#define IPA_LNX_WLAN_INST_STATS_STRUCT_LEN (8 + 264)
#define IPA_LNX_ETH_INSTANCE_INFO_STRUCT_LEN (16 + 112 + 120)
#define IPA_LNX_ETH_INST_STATS_STRUCT_LEN (8 + 248)
#define IPA_LNX_USB_INSTANCE_INFO_STRUCT_LEN (16 + 112 + 120)
#define IPA_LNX_USB_INST_STATS_STRUCT_LEN (8 + 248)
#define IPA_LNX_MHIP_INSTANCE_INFO_STRUCT_LEN (16 + 112 + 120)
#define IPA_LNX_MHIP_INST_STATS_STRUCT_LEN (8 + 248)
#define IPA_LNX_CONSOLIDATED_STATS_STRUCT_LEN (8 + 48)
#define IPA_LNX_EACH_INST_ALLOC_INFO_STRUCT_LEN (24 + 12 + 12 + 16)
#define IPA_LNX_STATS_ALL_INFO_STRUCT_LEN (32 + 128 + 128 + 128)
#define IPA_LNX_STATS_SPEARHEAD_CTX_STRUCT_LEN (8 + 4 + 416)
enum ipa_client_type {
  IPA_CLIENT_HSIC1_PROD = 0,
  IPA_CLIENT_HSIC1_CONS = 1,
  IPA_CLIENT_HSIC2_PROD = 2,
  IPA_CLIENT_HSIC2_CONS = 3,
  IPA_CLIENT_HSIC3_PROD = 4,
  IPA_CLIENT_HSIC3_CONS = 5,
  IPA_CLIENT_HSIC4_PROD = 6,
  IPA_CLIENT_HSIC4_CONS = 7,
  IPA_CLIENT_HSIC5_PROD = 8,
  IPA_CLIENT_HSIC5_CONS = 9,
  IPA_CLIENT_WLAN1_PROD = 10,
  IPA_CLIENT_WLAN1_CONS = 11,
  IPA_CLIENT_A5_WLAN_AMPDU_PROD = 12,
  IPA_CLIENT_WLAN2_CONS = 13,
  IPA_CLIENT_WLAN3_PROD = 14,
  IPA_CLIENT_WLAN3_CONS = 15,
  IPA_CLIENT_WLAN4_CONS = 17,
  IPA_CLIENT_USB_PROD = 18,
  IPA_CLIENT_USB_CONS = 19,
  IPA_CLIENT_USB2_PROD = 20,
  IPA_CLIENT_USB2_CONS = 21,
  IPA_CLIENT_USB3_PROD = 22,
  IPA_CLIENT_USB3_CONS = 23,
  IPA_CLIENT_USB4_PROD = 24,
  IPA_CLIENT_USB4_CONS = 25,
  IPA_CLIENT_UC_USB_PROD = 26,
  IPA_CLIENT_USB_DPL_CONS = 27,
  IPA_CLIENT_A2_EMBEDDED_PROD = 28,
  IPA_CLIENT_A2_EMBEDDED_CONS = 29,
  IPA_CLIENT_A2_TETHERED_PROD = 30,
  IPA_CLIENT_A2_TETHERED_CONS = 31,
  IPA_CLIENT_APPS_LAN_PROD = 32,
  IPA_CLIENT_APPS_LAN_CONS = 33,
  IPA_CLIENT_APPS_WAN_PROD = 34,
  IPA_CLIENT_APPS_LAN_WAN_PROD = IPA_CLIENT_APPS_WAN_PROD,
  IPA_CLIENT_APPS_WAN_CONS = 35,
  IPA_CLIENT_APPS_CMD_PROD = 36,
  IPA_CLIENT_A5_LAN_WAN_CONS = 37,
  IPA_CLIENT_ODU_PROD = 38,
  IPA_CLIENT_ODU_EMB_CONS = 39,
  IPA_CLIENT_ODU_TETH_CONS = 41,
  IPA_CLIENT_MHI_PROD = 42,
  IPA_CLIENT_MHI_CONS = 43,
  IPA_CLIENT_MEMCPY_DMA_SYNC_PROD = 44,
  IPA_CLIENT_MEMCPY_DMA_SYNC_CONS = 45,
  IPA_CLIENT_MEMCPY_DMA_ASYNC_PROD = 46,
  IPA_CLIENT_MEMCPY_DMA_ASYNC_CONS = 47,
  IPA_CLIENT_ETHERNET_PROD = 48,
  IPA_CLIENT_ETHERNET_CONS = 49,
  IPA_CLIENT_Q6_LAN_PROD = 50,
  IPA_CLIENT_Q6_LAN_CONS = 51,
  IPA_CLIENT_Q6_WAN_PROD = 52,
  IPA_CLIENT_Q6_WAN_CONS = 53,
  IPA_CLIENT_Q6_CMD_PROD = 54,
  IPA_CLIENT_Q6_DUN_CONS = 55,
  IPA_CLIENT_Q6_DECOMP_PROD = 56,
  IPA_CLIENT_Q6_DECOMP_CONS = 57,
  IPA_CLIENT_Q6_DECOMP2_PROD = 58,
  IPA_CLIENT_Q6_DECOMP2_CONS = 59,
  IPA_CLIENT_Q6_LTE_WIFI_AGGR_CONS = 61,
  IPA_CLIENT_TEST_PROD = 62,
  IPA_CLIENT_TEST_CONS = 63,
  IPA_CLIENT_TEST1_PROD = 64,
  IPA_CLIENT_TEST1_CONS = 65,
  IPA_CLIENT_TEST2_PROD = 66,
  IPA_CLIENT_TEST2_CONS = 67,
  IPA_CLIENT_TEST3_PROD = 68,
  IPA_CLIENT_TEST3_CONS = 69,
  IPA_CLIENT_TEST4_PROD = 70,
  IPA_CLIENT_TEST4_CONS = 71,
  IPA_CLIENT_DUMMY_CONS = 73,
  IPA_CLIENT_Q6_DL_NLO_DATA_PROD = 74,
  IPA_CLIENT_Q6_UL_NLO_DATA_CONS = 75,
  IPA_CLIENT_Q6_UL_NLO_ACK_CONS = 77,
  IPA_CLIENT_Q6_QBAP_STATUS_CONS = 79,
  IPA_CLIENT_MHI_DPL_CONS = 81,
  IPA_CLIENT_ODL_DPL_CONS = 83,
  IPA_CLIENT_Q6_AUDIO_DMA_MHI_PROD = 84,
  IPA_CLIENT_Q6_AUDIO_DMA_MHI_CONS = 85,
  IPA_CLIENT_WIGIG_PROD = 86,
  IPA_CLIENT_WIGIG1_CONS = 87,
  IPA_CLIENT_WIGIG2_CONS = 89,
  IPA_CLIENT_WIGIG3_CONS = 91,
  IPA_CLIENT_WIGIG4_CONS = 93,
  IPA_CLIENT_APPS_WAN_COAL_CONS = 95,
  IPA_CLIENT_MHI_PRIME_TETH_PROD = 96,
  IPA_CLIENT_MHI_PRIME_TETH_CONS = 97,
  IPA_CLIENT_MHI_PRIME_RMNET_PROD = 98,
  IPA_CLIENT_MHI_PRIME_RMNET_CONS = 99,
  IPA_CLIENT_MHI_PRIME_DPL_PROD = 100,
  IPA_CLIENT_MHI_COAL_CONS = 101,
  IPA_CLIENT_AQC_ETHERNET_PROD = 102,
  IPA_CLIENT_AQC_ETHERNET_CONS = 103,
  IPA_CLIENT_APPS_WAN_LOW_LAT_PROD = 104,
  IPA_CLIENT_APPS_WAN_LOW_LAT_CONS = 105,
  IPA_CLIENT_QDSS_PROD = 106,
  IPA_CLIENT_MHI_QDSS_CONS = 107,
  IPA_CLIENT_RTK_ETHERNET_PROD = 108,
  IPA_CLIENT_RTK_ETHERNET_CONS = 109,
  IPA_CLIENT_MHI_LOW_LAT_PROD = 110,
  IPA_CLIENT_MHI_LOW_LAT_CONS = 111,
  IPA_CLIENT_MHI2_PROD = 112,
  IPA_CLIENT_MHI2_CONS = 113,
  IPA_CLIENT_Q6_CV2X_PROD = 114,
  IPA_CLIENT_Q6_CV2X_CONS = 115,
  IPA_CLIENT_ETHERNET2_PROD = 116,
  IPA_CLIENT_ETHERNET2_CONS = 117,
  IPA_CLIENT_WLAN2_CONS1 = 119,
  IPA_CLIENT_APPS_WAN_LOW_LAT_DATA_PROD = 120,
  IPA_CLIENT_APPS_WAN_LOW_LAT_DATA_CONS = 121,
  IPA_CLIENT_Q6_DL_NLO_LL_DATA_PROD = 122,
  IPA_CLIENT_TPUT_CONS = 125,
  IPA_CLIENT_APPS_LAN_COAL_CONS = 127,
  IPA_CLIENT_IPSEC_DECAP_PROD = 128,
  IPA_CLIENT_IPSEC_DECAP_RECOVERABLE_ERR_CONS = 129,
  IPA_CLIENT_IPSEC_ENCAP_PROD = 130,
  IPA_CLIENT_IPSEC_DECAP_NON_RECOVERABLE_ERR_CONS = 131,
  IPA_CLIENT_Q6_DL_NLO_DATA_XLAT_PROD = 132,
  IPA_CLIENT_IPSEC_ENCAP_ERR_CONS = 133,
};
#define IPA_CLIENT_MAX (IPA_CLIENT_IPSEC_ENCAP_ERR_CONS + 1)
#define IPA_CLIENT_WLAN2_PROD IPA_CLIENT_A5_WLAN_AMPDU_PROD
#define IPA_CLIENT_Q6_DL_NLO_DATA_PROD IPA_CLIENT_Q6_DL_NLO_DATA_PROD
#define IPA_CLIENT_Q6_UL_NLO_ACK_CONS IPA_CLIENT_Q6_UL_NLO_ACK_CONS
#define IPA_CLIENT_Q6_QBAP_STATUS_CONS IPA_CLIENT_Q6_QBAP_STATUS_CONS
#define IPA_CLIENT_MHI_DPL_CONS IPA_CLIENT_MHI_DPL_CONS
#define IPA_CLIENT_Q6_AUDIO_DMA_MHI_PROD IPA_CLIENT_Q6_AUDIO_DMA_MHI_PROD
#define IPA_CLIENT_Q6_AUDIO_DMA_MHI_CONS IPA_CLIENT_Q6_AUDIO_DMA_MHI_CONS
#define IPA_CLIENT_WIGIG_PROD IPA_CLIENT_WIGIG_PROD
#define IPA_CLIENT_WIGIG1_CONS IPA_CLIENT_WIGIG1_CONS
#define IPA_CLIENT_WIGIG2_CONS IPA_CLIENT_WIGIG2_CONS
#define IPA_CLIENT_WIGIG3_CONS IPA_CLIENT_WIGIG3_CONS
#define IPA_CLIENT_WIGIG4_CONS IPA_CLIENT_WIGIG4_CONS
#define IPA_CLIENT_APPS_WAN_COAL_CONS IPA_CLIENT_APPS_WAN_COAL_CONS
#define IPA_CLIENT_MHI_PRIME_TETH_PROD IPA_CLIENT_MHI_PRIME_TETH_PROD
#define IPA_CLIENT_MHI_PRIME_TETH_CONS IPA_CLIENT_MHI_PRIME_TETH_CONS
#define IPA_CLIENT_MHI_PRIME_RMNET_PROD IPA_CLIENT_MHI_PRIME_RMNET_PROD
#define IPA_CLIENT_MHI_PRIME_RMNET_CONS IPA_CLIENT_MHI_PRIME_RMNET_CONS
#define IPA_CLIENT_MHI_PRIME_DPL_PROD IPA_CLIENT_MHI_PRIME_DPL_PROD
#define IPA_CLIENT_AQC_ETHERNET_PROD IPA_CLIENT_AQC_ETHERNET_PROD
#define IPA_CLIENT_AQC_ETHERNET_CONS IPA_CLIENT_AQC_ETHERNET_CONS
#define IPA_CLIENT_MHI_QDSS_CONS IPA_CLIENT_MHI_QDSS_CONS
#define IPA_CLIENT_QDSS_PROD IPA_CLIENT_QDSS_PROD
#define IPA_CLIENT_WLAN2_CONS1 IPA_CLIENT_WLAN2_CONS1
#define IPA_CLIENT_APPS_WAN_LOW_LAT_DATA_PROD IPA_CLIENT_APPS_WAN_LOW_LAT_DATA_PROD
#define IPA_CLIENT_APPS_WAN_LOW_LAT_DATA_CONS IPA_CLIENT_APPS_WAN_LOW_LAT_DATA_CONS
#define IPA_CLIENT_Q6_DL_NLO_LL_DATA_PROD IPA_CLIENT_Q6_DL_NLO_LL_DATA_PROD
#define IPA_CLIENT_APPS_LAN_COAL_CONS IPA_CLIENT_APPS_LAN_COAL_CONS
#define IPA_CLIENT_MHI_COAL_CONS IPA_CLIENT_MHI_COAL_CONS
#define IPA_CLIENT_IPSEC_DECAP_PROD IPA_CLIENT_IPSEC_DECAP_PROD
#define IPA_CLIENT_IPSEC_ENCAP_PROD IPA_CLIENT_IPSEC_ENCAP_PROD
#define IPA_CLIENT_Q6_DL_NLO_DATA_XLAT_PROD IPA_CLIENT_Q6_DL_NLO_DATA_XLAT_PROD
#define IPA_CLIENT_IPSEC_DECAP_RECOVERABLE_ERR_CONS IPA_CLIENT_IPSEC_DECAP_RECOVERABLE_ERR_CONS
#define IPA_CLIENT_IPSEC_DECAP_NON_RECOVERABLE_ERR_CONS IPA_CLIENT_IPSEC_DECAP_NON_RECOVERABLE_ERR_CONS
#define IPA_CLIENT_IPSEC_ENCAP_ERR_CONS IPA_CLIENT_IPSEC_ENCAP_ERR_CONS
#define IPA_CLIENT_IS_APPS_CONS(client) ((client) == IPA_CLIENT_APPS_LAN_CONS || (client) == IPA_CLIENT_APPS_LAN_COAL_CONS || (client) == IPA_CLIENT_APPS_WAN_CONS || (client) == IPA_CLIENT_APPS_WAN_COAL_CONS || (client) == IPA_CLIENT_APPS_WAN_LOW_LAT_CONS || (client) == IPA_CLIENT_APPS_WAN_LOW_LAT_DATA_CONS)
#define IPA_CLIENT_IS_APPS_PROD(client) ((client) == IPA_CLIENT_APPS_LAN_PROD || (client) == IPA_CLIENT_APPS_WAN_PROD || (client) == IPA_CLIENT_APPS_WAN_LOW_LAT_PROD || (client) == IPA_CLIENT_APPS_WAN_LOW_LAT_DATA_PROD)
#define IPA_CLIENT_IS_USB_CONS(client) ((client) == IPA_CLIENT_USB_CONS || (client) == IPA_CLIENT_USB2_CONS || (client) == IPA_CLIENT_USB3_CONS || (client) == IPA_CLIENT_USB_DPL_CONS || (client) == IPA_CLIENT_USB4_CONS)
#define IPA_CLIENT_IS_WAN_CONS(client) ((client) == IPA_CLIENT_APPS_WAN_CONS || (client) == IPA_CLIENT_APPS_WAN_COAL_CONS)
#define IPA_CLIENT_IS_LAN_CONS(client) ((client) == IPA_CLIENT_APPS_LAN_CONS || (client) == IPA_CLIENT_APPS_LAN_COAL_CONS)
#define IPA_CLIENT_IS_LAN_or_WAN_CONS(client) ((client) == IPA_CLIENT_APPS_LAN_CONS || (client) == IPA_CLIENT_APPS_WAN_CONS)
#define IPA_CLIENT_IS_APPS_COAL_CONS(client) ((client) == IPA_CLIENT_APPS_LAN_COAL_CONS || (client) == IPA_CLIENT_APPS_WAN_COAL_CONS)
#define IPA_CLIENT_IS_LOW_LAT_CONS(client) ((client) == IPA_CLIENT_APPS_WAN_LOW_LAT_CONS)
#define IPA_CLIENT_IS_WLAN_CONS(client) ((client) == IPA_CLIENT_WLAN1_CONS || (client) == IPA_CLIENT_WLAN2_CONS || (client) == IPA_CLIENT_WLAN3_CONS || (client) == IPA_CLIENT_WLAN2_CONS1 || (client) == IPA_CLIENT_WLAN4_CONS)
#define IPA_CLIENT_IS_ODU_CONS(client) ((client) == IPA_CLIENT_ODU_EMB_CONS || (client) == IPA_CLIENT_ODU_TETH_CONS)
#define IPA_CLIENT_IS_Q6_CONS(client) ((client) == IPA_CLIENT_Q6_LAN_CONS || (client) == IPA_CLIENT_Q6_WAN_CONS || (client) == IPA_CLIENT_Q6_DUN_CONS || (client) == IPA_CLIENT_Q6_DECOMP_CONS || (client) == IPA_CLIENT_Q6_DECOMP2_CONS || (client) == IPA_CLIENT_Q6_LTE_WIFI_AGGR_CONS || (client) == IPA_CLIENT_Q6_UL_NLO_DATA_CONS || (client) == IPA_CLIENT_Q6_UL_NLO_ACK_CONS || (client) == IPA_CLIENT_Q6_QBAP_STATUS_CONS || (client) == IPA_CLIENT_Q6_CV2X_CONS || (client) == IPA_CLIENT_Q6_AUDIO_DMA_MHI_CONS)
#define IPA_CLIENT_IS_Q6_PROD(client) ((client) == IPA_CLIENT_Q6_LAN_PROD || (client) == IPA_CLIENT_Q6_WAN_PROD || (client) == IPA_CLIENT_Q6_CMD_PROD || (client) == IPA_CLIENT_Q6_DECOMP_PROD || (client) == IPA_CLIENT_Q6_DECOMP2_PROD || (client) == IPA_CLIENT_Q6_DL_NLO_LL_DATA_PROD || (client) == IPA_CLIENT_Q6_DL_NLO_DATA_PROD || (client) == IPA_CLIENT_Q6_CV2X_PROD || (client) == IPA_CLIENT_Q6_AUDIO_DMA_MHI_PROD)
#define IPA_CLIENT_IS_Q6_NON_ZIP_CONS(client) ((client) == IPA_CLIENT_Q6_LAN_CONS || (client) == IPA_CLIENT_Q6_WAN_CONS || (client) == IPA_CLIENT_Q6_DUN_CONS || (client) == IPA_CLIENT_Q6_LTE_WIFI_AGGR_CONS || (client) == IPA_CLIENT_Q6_UL_NLO_DATA_CONS || (client) == IPA_CLIENT_Q6_UL_NLO_ACK_CONS || (client) == IPA_CLIENT_Q6_QBAP_STATUS_CONS || (client) == IPA_CLIENT_Q6_CV2X_CONS || (client) == IPA_CLIENT_Q6_AUDIO_DMA_MHI_CONS)
#define IPA_CLIENT_IS_Q6_ZIP_CONS(client) ((client) == IPA_CLIENT_Q6_DECOMP_CONS || (client) == IPA_CLIENT_Q6_DECOMP2_CONS)
#define IPA_CLIENT_IS_Q6_NON_ZIP_PROD(client) ((client) == IPA_CLIENT_Q6_LAN_PROD || (client) == IPA_CLIENT_Q6_WAN_PROD || (client) == IPA_CLIENT_Q6_CMD_PROD || (client) == IPA_CLIENT_Q6_DL_NLO_DATA_PROD || (client) == IPA_CLIENT_Q6_DL_NLO_LL_DATA_PROD || (client) == IPA_CLIENT_Q6_CV2X_PROD || (client) == IPA_CLIENT_Q6_AUDIO_DMA_MHI_PROD)
#define IPA_CLIENT_IS_Q6_ZIP_PROD(client) ((client) == IPA_CLIENT_Q6_DECOMP_PROD || (client) == IPA_CLIENT_Q6_DECOMP2_PROD)
#define IPA_CLIENT_IS_MEMCPY_DMA_CONS(client) ((client) == IPA_CLIENT_MEMCPY_DMA_SYNC_CONS || (client) == IPA_CLIENT_MEMCPY_DMA_ASYNC_CONS)
#define IPA_CLIENT_IS_MEMCPY_DMA_PROD(client) ((client) == IPA_CLIENT_MEMCPY_DMA_SYNC_PROD || (client) == IPA_CLIENT_MEMCPY_DMA_ASYNC_PROD)
#define IPA_CLIENT_IS_MHI(client) ((client) == IPA_CLIENT_MHI_CONS || (client) == IPA_CLIENT_MHI_PROD || (client) == IPA_CLIENT_MHI2_PROD || (client) == IPA_CLIENT_MHI2_CONS || (client) == IPA_CLIENT_MHI_DPL_CONS || (client) == IPA_CLIENT_MHI_LOW_LAT_CONS || (client) == IPA_CLIENT_MHI_LOW_LAT_PROD || (client) == IPA_CLIENT_MHI_QDSS_CONS || (client) == IPA_CLIENT_MHI_COAL_CONS)
#define IPA_CLIENT_IS_TEST_PROD(client) ((client) == IPA_CLIENT_TEST_PROD || (client) == IPA_CLIENT_TEST1_PROD || (client) == IPA_CLIENT_TEST2_PROD || (client) == IPA_CLIENT_TEST3_PROD || (client) == IPA_CLIENT_TEST4_PROD)
#define IPA_CLIENT_IS_TEST_CONS(client) ((client) == IPA_CLIENT_TEST_CONS || (client) == IPA_CLIENT_TEST1_CONS || (client) == IPA_CLIENT_TEST2_CONS || (client) == IPA_CLIENT_TEST3_CONS || (client) == IPA_CLIENT_TEST4_CONS)
#define IPA_CLIENT_IS_TEST(client) (IPA_CLIENT_IS_TEST_PROD(client) || IPA_CLIENT_IS_TEST_CONS(client))
enum ipa3_nat_mem_in {
  IPA_NAT_MEM_IN_DDR = 0,
  IPA_NAT_MEM_IN_SRAM = 1,
  IPA_NAT_MEM_IN_MAX
};
#define IPA_VALID_NAT_MEM_IN(t) ((t) >= IPA_NAT_MEM_IN_DDR && (t) < IPA_NAT_MEM_IN_MAX)
enum ipa_ip_type {
  IPA_IP_v4,
  IPA_IP_v6,
  IPA_IP_MAX
};
#define VALID_IPA_IP_TYPE(t) ((t) >= IPA_IP_v4 && (t) < IPA_IP_MAX)
enum ipa_rule_type {
  IPA_RULE_HASHABLE,
  IPA_RULE_NON_HASHABLE,
};
#define IPA_RULE_TYPE_MAX (IPA_RULE_NON_HASHABLE + 1)
enum ipa_flt_action {
  IPA_PASS_TO_ROUTING,
  IPA_PASS_TO_SRC_NAT,
  IPA_PASS_TO_DST_NAT,
  IPA_PASS_TO_EXCEPTION
};
enum ipa_wlan_event {
  WLAN_CLIENT_CONNECT,
  WLAN_CLIENT_DISCONNECT,
  WLAN_CLIENT_POWER_SAVE_MODE,
  WLAN_CLIENT_NORMAL_MODE,
  SW_ROUTING_ENABLE,
  SW_ROUTING_DISABLE,
  WLAN_AP_CONNECT,
  WLAN_AP_DISCONNECT,
  WLAN_STA_CONNECT,
  WLAN_STA_DISCONNECT,
  WLAN_CLIENT_CONNECT_EX,
  WLAN_SWITCH_TO_SCC,
  WLAN_SWITCH_TO_MCC,
  WLAN_WDI_ENABLE,
  WLAN_WDI_DISABLE,
  IPA_WLAN_EVENT_MAX
};
enum ipa_wan_event {
  WAN_UPSTREAM_ROUTE_ADD = IPA_WLAN_EVENT_MAX,
  WAN_UPSTREAM_ROUTE_DEL,
  WAN_EMBMS_CONNECT,
  WAN_XLAT_CONNECT,
  IPA_WAN_EVENT_MAX
};
enum ipa_ecm_event {
  ECM_CONNECT = IPA_WAN_EVENT_MAX,
  ECM_DISCONNECT,
  IPA_ECM_EVENT_MAX,
};
enum ipa_tethering_stats_event {
  IPA_TETHERING_STATS_UPDATE_STATS = IPA_ECM_EVENT_MAX,
  IPA_TETHERING_STATS_UPDATE_NETWORK_STATS,
  IPA_TETHERING_STATS_EVENT_MAX,
};
enum ipa_quota_event {
  IPA_QUOTA_REACH = IPA_TETHERING_STATS_EVENT_MAX,
  IPA_QUOTA_EVENT_MAX,
};
enum ipa_ssr_event {
  IPA_SSR_BEFORE_SHUTDOWN = IPA_QUOTA_EVENT_MAX,
  IPA_SSR_AFTER_POWERUP,
  IPA_SSR_EVENT_MAX,
};
enum ipa_vlan_l2tp_event {
  ADD_VLAN_IFACE = IPA_SSR_EVENT_MAX,
  DEL_VLAN_IFACE,
  ADD_L2TP_VLAN_MAPPING,
  DEL_L2TP_VLAN_MAPPING,
  IPA_VLAN_L2TP_EVENT_MAX,
};
enum ipa_per_client_stats_event {
  IPA_PER_CLIENT_STATS_CONNECT_EVENT = IPA_VLAN_L2TP_EVENT_MAX,
  IPA_PER_CLIENT_STATS_DISCONNECT_EVENT,
  IPA_PER_CLIENT_STATS_EVENT_MAX,
};
enum ipa_vlan_bridge_event {
  ADD_BRIDGE_VLAN_MAPPING = IPA_PER_CLIENT_STATS_EVENT_MAX,
  DEL_BRIDGE_VLAN_MAPPING,
  BRIDGE_VLAN_MAPPING_MAX,
};
enum ipa_wlan_fw_ssr_event {
  WLAN_FWR_SSR_BEFORE_SHUTDOWN = BRIDGE_VLAN_MAPPING_MAX,
  IPA_WLAN_FW_SSR_EVENT_MAX,
#define IPA_WLAN_FW_SSR_EVENT_MAX IPA_WLAN_FW_SSR_EVENT_MAX
};
enum ipa_gsb_event {
  IPA_GSB_CONNECT = IPA_WLAN_FW_SSR_EVENT_MAX,
  IPA_GSB_DISCONNECT,
  IPA_GSB_EVENT_MAX,
};
enum ipa_coalesce_event {
  IPA_COALESCE_ENABLE = IPA_GSB_EVENT_MAX,
  IPA_COALESCE_DISABLE,
  IPA_COALESCE_EVENT_MAX
#define IPA_COALESCE_EVENT_MAX IPA_COALESCE_EVENT_MAX
};
enum ipa_mtu_event {
  IPA_SET_MTU = IPA_COALESCE_EVENT_MAX,
  IPA_MTU_EVENT_MAX
#define IPA_MTU_EVENT_MAX IPA_MTU_EVENT_MAX
};
enum ipa_peripheral_event {
  IPA_PERIPHERAL_CONNECT = ECM_CONNECT,
  IPA_PERIPHERAL_DISCONNECT = ECM_DISCONNECT
};
#define WIGIG_CLIENT_CONNECT (IPA_MTU_EVENT_MAX)
#define WIGIG_FST_SWITCH (WIGIG_CLIENT_CONNECT + 1)
#define WIGIG_EVENT_MAX (WIGIG_FST_SWITCH + 1)
enum ipa_pdn_config_event {
  IPA_PDN_DEFAULT_MODE_CONFIG = WIGIG_EVENT_MAX,
  IPA_PDN_IP_COLLISION_MODE_CONFIG,
  IPA_PDN_IP_PASSTHROUGH_MODE_CONFIG,
  IPA_PDN_CONFIG_EVENT_MAX
#define IPA_PDN_CONFIG_EVENT_MAX IPA_PDN_CONFIG_EVENT_MAX
};
enum ipa_mac_flt_event {
  IPA_MAC_FLT_EVENT = IPA_PDN_CONFIG_EVENT_MAX,
  IPA_MAC_FLT_EVENT_MAX
#define IPA_MAC_FLT_EVENT_MAX IPA_MAC_FLT_EVENT_MAX
};
enum ipa_sockv5_event {
  IPA_SOCKV5_ADD = IPA_MAC_FLT_EVENT_MAX,
  IPA_SOCKV5_DEL,
  IPA_SOCKV5_EVENT_MAX
#define IPA_SOCKV5_EVENT_MAX IPA_SOCKV5_EVENT_MAX
};
enum ipa_warning_limit_event {
  IPA_WARNING_LIMIT_REACHED = IPA_SOCKV5_EVENT_MAX,
  IPA_WARNING_LIMIT_EVENT_MAX,
#define IPA_WARNING_LIMIT_EVENT_MAX IPA_WARNING_LIMIT_EVENT_MAX
};
enum ipa_sw_flt_event {
  IPA_SW_FLT_EVENT = IPA_WARNING_LIMIT_EVENT_MAX,
  IPA_SW_FLT_EVENT_MAX
#define IPA_SW_FLT_EVENT_MAX IPA_SW_FLT_EVENT_MAX
};
enum ipa_pkt_threshold_event {
  IPA_PKT_THRESHOLD_EVENT = IPA_SW_FLT_EVENT_MAX,
  IPA_PKT_THRESHOLD_EVENT_MAX
#define IPA_PKT_THRESHOLD_EVENT_MAX IPA_PKT_THRESHOLD_EVENT_MAX
};
enum ipa_move_nat_table_event {
  IPA_MOVE_NAT_TABLE = IPA_PKT_THRESHOLD_EVENT_MAX,
  IPA_MOVE_NAT_EVENT_MAX
#define IPA_MOVE_NAT_EVENT_MAX IPA_MOVE_NAT_EVENT_MAX
};
enum ipa_eogre_event {
  IPA_EoGRE_UP_EVENT = IPA_MOVE_NAT_EVENT_MAX,
  IPA_EoGRE_DOWN_EVENT,
  IPA_EoGRE_EVENT_MAX
#define IPA_EoGRE_EVENT_MAX IPA_EoGRE_EVENT_MAX
};
enum ipa_ippt_sw_flt_event {
  IPA_IPPT_SW_FLT_EVENT = IPA_EoGRE_EVENT_MAX,
  IPA_IPPT_SW_FLT_EVENT_MAX
#define IPA_IPPT_SW_FLT_EVENT_MAX IPA_IPPT_SW_FLT_EVENT_MAX
};
enum ipa_macsec_event {
  IPA_MACSEC_ADD_EVENT = IPA_IPPT_SW_FLT_EVENT_MAX,
  IPA_MACSEC_DEL_EVENT,
  IPA_MACSEC_EVENT_MAX
#define IPA_MACSEC_EVENT_MAX IPA_MACSEC_EVENT_MAX
};
enum ipa_ext_route_evt {
  IPA_SET_EXT_ROUTER_MODE_EVENT = IPA_MACSEC_EVENT_MAX,
  IPA_SET_EXT_ROUTER_MODE_EVENT_MAX
#define IPA_SET_EXT_ROUTER_MODE_EVENT_MAX IPA_SET_EXT_ROUTER_MODE_EVENT_MAX
};
#define IPA_EVENT_MAX_NUM (IPA_SET_EXT_ROUTER_MODE_EVENT_MAX)
#define IPA_EVENT_MAX ((int) IPA_EVENT_MAX_NUM)
enum ipa_rm_resource_name {
  IPA_RM_RESOURCE_Q6_PROD = 0,
  IPA_RM_RESOURCE_Q6_CONS = 1,
  IPA_RM_RESOURCE_USB_PROD = 2,
  IPA_RM_RESOURCE_USB_CONS = 3,
  IPA_RM_RESOURCE_USB_DPL_DUMMY_PROD = 4,
  IPA_RM_RESOURCE_USB_DPL_CONS = 5,
  IPA_RM_RESOURCE_HSIC_PROD = 6,
  IPA_RM_RESOURCE_HSIC_CONS = 7,
  IPA_RM_RESOURCE_STD_ECM_PROD = 8,
  IPA_RM_RESOURCE_APPS_CONS = 9,
  IPA_RM_RESOURCE_RNDIS_PROD = 10,
  IPA_RM_RESOURCE_WWAN_0_PROD = 12,
  IPA_RM_RESOURCE_WLAN_PROD = 14,
  IPA_RM_RESOURCE_WLAN_CONS = 15,
  IPA_RM_RESOURCE_ODU_ADAPT_PROD = 16,
  IPA_RM_RESOURCE_ODU_ADAPT_CONS = 17,
  IPA_RM_RESOURCE_MHI_PROD = 18,
  IPA_RM_RESOURCE_MHI_CONS = 19,
  IPA_RM_RESOURCE_ETHERNET_PROD = 20,
  IPA_RM_RESOURCE_ETHERNET_CONS = 21,
};
#define IPA_RM_RESOURCE_MAX (IPA_RM_RESOURCE_ETHERNET_CONS + 1)
enum ipa_hw_type {
  IPA_HW_None = 0,
  IPA_HW_v1_0 = 1,
  IPA_HW_v1_1 = 2,
  IPA_HW_v2_0 = 3,
  IPA_HW_v2_1 = 4,
  IPA_HW_v2_5 = 5,
  IPA_HW_v2_6 = IPA_HW_v2_5,
  IPA_HW_v2_6L = 6,
  IPA_HW_v3_0 = 10,
  IPA_HW_v3_1 = 11,
  IPA_HW_v3_5 = 12,
  IPA_HW_v3_5_1 = 13,
  IPA_HW_v4_0 = 14,
  IPA_HW_v4_1 = 15,
  IPA_HW_v4_2 = 16,
  IPA_HW_v4_5 = 17,
  IPA_HW_v4_7 = 18,
  IPA_HW_v4_9 = 19,
  IPA_HW_v4_11 = 20,
  IPA_HW_v5_0 = 21,
  IPA_HW_v5_1 = 22,
  IPA_HW_v5_2 = 23,
  IPA_HW_v5_5 = 24,
  IPA_HW_v6_0 = 25,
};
#define IPA_HW_MAX (IPA_HW_v6_0 + 1)
#define IPA_HW_v4_0 IPA_HW_v4_0
#define IPA_HW_v4_1 IPA_HW_v4_1
#define IPA_HW_v4_2 IPA_HW_v4_2
#define IPA_HW_v4_5 IPA_HW_v4_5
#define IPA_HW_v4_7 IPA_HW_v4_7
#define IPA_HW_v4_9 IPA_HW_v4_9
#define IPA_HW_v4_11 IPA_HW_v4_11
#define IPA_HW_v5_0 IPA_HW_v5_0
#define IPA_HW_v5_1 IPA_HW_v5_1
#define IPA_HW_v5_2 IPA_HW_v5_2
#define IPA_HW_v5_5 IPA_HW_v5_5
#define IPA_HW_v6_0 IPA_HW_v6_0
struct ipa_rule_attrib {
  uint32_t attrib_mask;
  uint16_t src_port_lo;
  uint16_t src_port_hi;
  uint16_t dst_port_lo;
  uint16_t dst_port_hi;
  uint8_t type;
  uint8_t code;
  uint8_t tos_value;
  uint8_t tos_mask;
  uint32_t spi;
  uint16_t src_port;
  uint16_t dst_port;
  uint32_t meta_data;
  uint32_t meta_data_mask;
  uint8_t src_mac_addr[ETH_ALEN];
  uint8_t src_mac_addr_mask[ETH_ALEN];
  uint8_t dst_mac_addr[ETH_ALEN];
  uint8_t dst_mac_addr_mask[ETH_ALEN];
  uint16_t ether_type;
  union {
    struct {
      uint8_t tos;
      uint8_t protocol;
      uint32_t src_addr;
      uint32_t src_addr_mask;
      uint32_t dst_addr;
      uint32_t dst_addr_mask;
    } v4;
    struct {
      uint8_t tc;
      uint32_t flow_label;
      uint8_t next_hdr;
      uint32_t src_addr[4];
      uint32_t src_addr_mask[4];
      uint32_t dst_addr[4];
      uint32_t dst_addr_mask[4];
    } v6;
  } u;
  __u16 vlan_id;
  __u16 payload_length;
  __u32 ext_attrib_mask;
  __u8 l2tp_udp_next_hdr;
  __u8 is_frag_encoding;
  __u32 padding2;
};
#define IPA_IPFLTR_NUM_MEQ_32_EQNS 2
#define IPA_IPFLTR_NUM_IHL_MEQ_32_EQNS 2
#define IPA_IPFLTR_NUM_MEQ_128_EQNS 2
#define IPA_IPFLTR_NUM_IHL_RANGE_16_EQNS 2
struct ipa_ipfltr_eq_16 {
  int8_t offset;
  uint16_t value;
};
struct ipa_ipfltr_eq_32 {
  int8_t offset;
  uint32_t value;
};
struct ipa_ipfltr_mask_eq_128 {
  int8_t offset;
  uint8_t mask[16];
  uint8_t value[16];
};
struct ipa_ipfltr_mask_eq_32 {
  int8_t offset;
  uint32_t mask;
  uint32_t value;
};
struct ipa_ipfltr_range_eq_16 {
  int8_t offset;
  uint16_t range_low;
  uint16_t range_high;
};
struct ipa_ipfltri_rule_eq {
  uint16_t rule_eq_bitmap;
  uint8_t tos_eq_present;
  uint8_t tos_eq;
  uint8_t protocol_eq_present;
  uint8_t protocol_eq;
  uint8_t num_ihl_offset_range_16;
  struct ipa_ipfltr_range_eq_16 ihl_offset_range_16[IPA_IPFLTR_NUM_IHL_RANGE_16_EQNS];
  uint8_t num_offset_meq_32;
  struct ipa_ipfltr_mask_eq_32 offset_meq_32[IPA_IPFLTR_NUM_MEQ_32_EQNS];
  uint8_t tc_eq_present;
  uint8_t tc_eq;
  uint8_t fl_eq_present;
  uint32_t fl_eq;
  uint8_t ihl_offset_eq_16_present;
  struct ipa_ipfltr_eq_16 ihl_offset_eq_16;
  uint8_t ihl_offset_eq_32_present;
  struct ipa_ipfltr_eq_32 ihl_offset_eq_32;
  uint8_t num_ihl_offset_meq_32;
  struct ipa_ipfltr_mask_eq_32 ihl_offset_meq_32[IPA_IPFLTR_NUM_IHL_MEQ_32_EQNS];
  uint8_t num_offset_meq_128;
  struct ipa_ipfltr_mask_eq_128 offset_meq_128[IPA_IPFLTR_NUM_MEQ_128_EQNS];
  uint8_t metadata_meq32_present;
  struct ipa_ipfltr_mask_eq_32 metadata_meq32;
  uint8_t ipv4_frag_eq_present;
  uint8_t is_frag_encoding;
};
struct ipa_flt_rule {
  uint8_t retain_hdr;
  uint8_t to_uc;
  enum ipa_flt_action action;
  uint32_t rt_tbl_hdl;
  struct ipa_rule_attrib attrib;
  struct ipa_ipfltri_rule_eq eq_attrib;
  uint32_t rt_tbl_idx;
  uint8_t eq_attrib_type;
  uint8_t max_prio;
  uint8_t hashable;
  uint16_t rule_id;
  uint8_t set_metadata;
  uint8_t pdn_idx;
};
#define IPA_FLTRT_TTL_UPDATE
struct ipa_flt_rule_v2 {
  uint8_t retain_hdr;
  uint8_t to_uc;
  enum ipa_flt_action action;
  uint32_t rt_tbl_hdl;
  struct ipa_rule_attrib attrib;
  struct ipa_ipfltri_rule_eq eq_attrib;
  uint32_t rt_tbl_idx;
  uint8_t eq_attrib_type;
  uint8_t max_prio;
  uint8_t hashable;
  uint16_t rule_id;
  uint8_t set_metadata;
  uint8_t pdn_idx;
  uint8_t enable_stats;
  uint8_t cnt_idx;
  uint8_t close_aggr_irq_mod;
  uint8_t ttl_update;
  uint8_t qos_class;
};
enum ipa_hdr_l2_type {
  IPA_HDR_L2_NONE,
  IPA_HDR_L2_ETHERNET_II,
  IPA_HDR_L2_802_3,
  IPA_HDR_L2_802_1Q,
};
#define IPA_HDR_L2_MAX (IPA_HDR_L2_802_1Q + 1)
#define IPA_HDR_L2_802_1Q IPA_HDR_L2_802_1Q
enum ipa_hdr_proc_type {
  IPA_HDR_PROC_NONE,
  IPA_HDR_PROC_ETHII_TO_ETHII,
  IPA_HDR_PROC_ETHII_TO_802_3,
  IPA_HDR_PROC_802_3_TO_ETHII,
  IPA_HDR_PROC_802_3_TO_802_3,
  IPA_HDR_PROC_L2TP_HEADER_ADD,
  IPA_HDR_PROC_L2TP_HEADER_REMOVE,
  IPA_HDR_PROC_ETHII_TO_ETHII_EX,
  IPA_HDR_PROC_L2TP_UDP_HEADER_ADD,
  IPA_HDR_PROC_L2TP_UDP_HEADER_REMOVE,
  IPA_HDR_PROC_SET_DSCP,
  IPA_HDR_PROC_EoGRE_HEADER_ADD,
  IPA_HDR_PROC_EoGRE_HEADER_REMOVE,
};
#define IPA_HDR_PROC_MAX (IPA_HDR_PROC_EoGRE_HEADER_REMOVE + 1)
struct ipa_rt_rule {
  enum ipa_client_type dst;
  uint32_t hdr_hdl;
  uint32_t hdr_proc_ctx_hdl;
  struct ipa_rule_attrib attrib;
  uint8_t max_prio;
  uint8_t hashable;
  uint8_t retain_hdr;
  uint8_t coalesce;
};
#define IPA_RT_SUPPORT_COAL
struct ipa_rt_rule_v2 {
  enum ipa_client_type dst;
  uint32_t hdr_hdl;
  uint32_t hdr_proc_ctx_hdl;
  struct ipa_rule_attrib attrib;
  uint8_t max_prio;
  uint8_t hashable;
  uint8_t retain_hdr;
  uint8_t coalesce;
  uint8_t enable_stats;
  uint8_t cnt_idx;
  uint8_t close_aggr_irq_mod;
  uint8_t ttl_update;
  uint8_t qos_class;
  uint8_t skip_ingress;
};
struct ipa_hdr_add {
  char name[IPA_RESOURCE_NAME_MAX];
  uint8_t hdr[IPA_HDR_MAX_SIZE];
  uint8_t hdr_len;
  enum ipa_hdr_l2_type type;
  uint8_t is_partial;
  uint32_t hdr_hdl;
  int status;
  uint8_t is_eth2_ofst_valid;
  uint16_t eth2_ofst;
};
struct ipa_ioc_add_hdr {
  uint8_t commit;
  uint8_t num_hdrs;
  struct ipa_hdr_add hdr[0];
};
struct ipa_l2tp_header_add_procparams {
  __u32 eth_hdr_retained : 1;
  __u32 input_ip_version : 1;
  __u32 output_ip_version : 1;
  __u32 second_pass : 1;
  __u32 reserved : 28;
  __u32 padding;
};
struct ipa_l2tp_header_remove_procparams {
  uint32_t hdr_len_remove : 8;
  uint32_t eth_hdr_retained : 1;
  uint32_t hdr_ofst_pkt_size_valid : 1;
  uint32_t hdr_ofst_pkt_size : 6;
  uint32_t hdr_endianness : 1;
  uint32_t reserved : 15;
};
struct ipa_l2tp_hdr_proc_ctx_params {
  struct ipa_l2tp_header_add_procparams hdr_add_param;
  struct ipa_l2tp_header_remove_procparams hdr_remove_param;
  uint8_t is_dst_pipe_valid;
  enum ipa_client_type dst_pipe;
};
#define IPA_EoGRE_MAX_PCP_IDX 8
#define IPA_EoGRE_MAX_VLAN 8
struct IpaDscpVlanPcpMap_t {
  uint16_t vlan[IPA_EoGRE_MAX_VLAN];
  uint8_t dscp[IPA_EoGRE_MAX_VLAN][IPA_EoGRE_MAX_PCP_IDX];
  uint8_t num_vlan;
  uint8_t reserved0;
} __attribute__((packed));
struct ipa_ipgre_info {
  enum ipa_ip_type iptype;
  uint32_t ipv4_src;
  uint32_t ipv4_dst;
  uint32_t ipv6_src[4];
  uint32_t ipv6_dst[4];
  uint16_t gre_protocol;
};
struct ipa_ioc_eogre_info {
  struct ipa_ipgre_info ipgre_info;
  struct IpaDscpVlanPcpMap_t map_info;
};
struct ipa_eogre_header_add_procparams {
  uint32_t eth_hdr_retained : 1;
  uint32_t input_ip_version : 1;
  uint32_t output_ip_version : 1;
  uint32_t second_pass : 1;
  uint32_t reserved : 28;
};
struct ipa_eogre_header_remove_procparams {
  uint32_t hdr_len_remove : 8;
  uint32_t reserved : 24;
};
struct ipa_eogre_hdr_proc_ctx_params {
  struct ipa_eogre_header_add_procparams hdr_add_param;
  struct ipa_eogre_header_remove_procparams hdr_remove_param;
};
struct ipa_eth_II_to_eth_II_ex_procparams {
  uint32_t input_ethhdr_negative_offset : 8;
  uint32_t output_ethhdr_negative_offset : 8;
  uint32_t reserved : 16;
};
#define L2TP_USER_SPACE_SPECIFY_DST_PIPE
struct ipa_hdr_proc_ctx_add {
  enum ipa_hdr_proc_type type;
  uint32_t hdr_hdl;
  uint32_t proc_ctx_hdl;
  int status;
  struct ipa_l2tp_hdr_proc_ctx_params l2tp_params;
  struct ipa_eogre_hdr_proc_ctx_params eogre_params;
  struct ipa_eth_II_to_eth_II_ex_procparams generic_params;
};
#define IPA_L2TP_HDR_PROC_SUPPORT
struct ipa_ioc_add_hdr_proc_ctx {
  uint8_t commit;
  uint8_t num_proc_ctxs;
  struct ipa_hdr_proc_ctx_add proc_ctx[0];
};
struct ipa_ioc_copy_hdr {
  char name[IPA_RESOURCE_NAME_MAX];
  uint8_t hdr[IPA_HDR_MAX_SIZE];
  uint8_t hdr_len;
  enum ipa_hdr_l2_type type;
  uint8_t is_partial;
  uint8_t is_eth2_ofst_valid;
  uint16_t eth2_ofst;
};
struct ipa_ioc_get_hdr {
  char name[IPA_RESOURCE_NAME_MAX];
  uint32_t hdl;
};
struct ipa_hdr_del {
  uint32_t hdl;
  int status;
};
struct ipa_ioc_del_hdr {
  uint8_t commit;
  uint8_t num_hdls;
  struct ipa_hdr_del hdl[0];
};
struct ipa_hdr_proc_ctx_del {
  uint32_t hdl;
  int status;
};
struct ipa_ioc_del_hdr_proc_ctx {
  uint8_t commit;
  uint8_t num_hdls;
  struct ipa_hdr_proc_ctx_del hdl[0];
};
struct ipa_rt_rule_add {
  struct ipa_rt_rule rule;
  uint8_t at_rear;
  uint32_t rt_rule_hdl;
  int status;
};
struct ipa_rt_rule_add_v2 {
  uint8_t at_rear;
  uint32_t rt_rule_hdl;
  int status;
  struct ipa_rt_rule_v2 rule;
};
struct ipa_ioc_add_rt_rule {
  uint8_t commit;
  enum ipa_ip_type ip;
  char rt_tbl_name[IPA_RESOURCE_NAME_MAX];
  uint8_t num_rules;
  struct ipa_rt_rule_add rules[0];
};
struct ipa_ioc_add_rt_rule_v2 {
  uint8_t commit;
  enum ipa_ip_type ip;
  char rt_tbl_name[IPA_RESOURCE_NAME_MAX];
  uint8_t num_rules;
  uint32_t rule_add_size;
  uint32_t reserved1;
  uint8_t reserved2;
  uint64_t rules;
};
struct ipa_ioc_add_rt_rule_after {
  uint8_t commit;
  enum ipa_ip_type ip;
  char rt_tbl_name[IPA_RESOURCE_NAME_MAX];
  uint8_t num_rules;
  uint32_t add_after_hdl;
  struct ipa_rt_rule_add rules[0];
};
struct ipa_ioc_add_rt_rule_after_v2 {
  uint8_t commit;
  enum ipa_ip_type ip;
  char rt_tbl_name[IPA_RESOURCE_NAME_MAX];
  uint8_t num_rules;
  uint32_t add_after_hdl;
  uint32_t rule_add_size;
  uint8_t reserved;
  uint64_t rules;
};
struct ipa_rt_rule_mdfy {
  struct ipa_rt_rule rule;
  uint32_t rt_rule_hdl;
  int status;
};
struct ipa_rt_rule_mdfy_v2 {
  uint32_t rt_rule_hdl;
  int status;
  struct ipa_rt_rule_v2 rule;
};
struct ipa_ioc_mdfy_rt_rule {
  uint8_t commit;
  enum ipa_ip_type ip;
  uint8_t num_rules;
  struct ipa_rt_rule_mdfy rules[0];
};
struct ipa_ioc_mdfy_rt_rule_v2 {
  uint8_t commit;
  enum ipa_ip_type ip;
  uint8_t num_rules;
  uint32_t rule_mdfy_size;
  uint8_t reserved;
  uint64_t rules;
};
struct ipa_rt_rule_del {
  uint32_t hdl;
  int status;
};
struct ipa_rt_rule_add_ext {
  struct ipa_rt_rule rule;
  uint8_t at_rear;
  uint32_t rt_rule_hdl;
  int status;
  uint16_t rule_id;
};
struct ipa_rt_rule_add_ext_v2 {
  uint8_t at_rear;
  uint32_t rt_rule_hdl;
  int status;
  uint16_t rule_id;
  struct ipa_rt_rule_v2 rule;
};
struct ipa_ioc_add_rt_rule_ext {
  uint8_t commit;
  enum ipa_ip_type ip;
  char rt_tbl_name[IPA_RESOURCE_NAME_MAX];
  uint8_t num_rules;
  struct ipa_rt_rule_add_ext rules[0];
};
struct ipa_ioc_add_rt_rule_ext_v2 {
  uint8_t commit;
  enum ipa_ip_type ip;
  char rt_tbl_name[IPA_RESOURCE_NAME_MAX];
  uint8_t num_rules;
  uint32_t rule_add_ext_size;
  uint32_t reserved1;
  uint8_t reserved2;
  uint64_t rules;
};
struct ipa_ioc_del_rt_rule {
  uint8_t commit;
  enum ipa_ip_type ip;
  uint8_t num_hdls;
  struct ipa_rt_rule_del hdl[0];
};
struct ipa_ioc_get_rt_tbl_indx {
  enum ipa_ip_type ip;
  char name[IPA_RESOURCE_NAME_MAX];
  uint32_t idx;
};
struct ipa_flt_rule_add {
  struct ipa_flt_rule rule;
  uint8_t at_rear;
  uint32_t flt_rule_hdl;
  int status;
};
struct ipa_flt_rule_add_v2 {
  uint8_t at_rear;
  uint32_t flt_rule_hdl;
  int status;
  struct ipa_flt_rule_v2 rule;
};
struct ipa_ioc_add_flt_rule {
  uint8_t commit;
  enum ipa_ip_type ip;
  enum ipa_client_type ep;
  uint8_t global;
  uint8_t num_rules;
  struct ipa_flt_rule_add rules[0];
};
struct ipa_ioc_add_flt_rule_v2 {
  uint8_t commit;
  enum ipa_ip_type ip;
  enum ipa_client_type ep;
  uint8_t global;
  uint8_t num_rules;
  uint32_t flt_rule_size;
  uint32_t reserved1;
  uint16_t reserved2;
  uint8_t reserved3;
  uint64_t rules;
};
struct ipa_ioc_add_flt_rule_after {
  uint8_t commit;
  enum ipa_ip_type ip;
  enum ipa_client_type ep;
  uint8_t num_rules;
  uint32_t add_after_hdl;
  struct ipa_flt_rule_add rules[0];
};
struct ipa_ioc_add_flt_rule_after_v2 {
  uint8_t commit;
  enum ipa_ip_type ip;
  enum ipa_client_type ep;
  uint8_t num_rules;
  uint32_t add_after_hdl;
  uint32_t flt_rule_size;
  uint32_t reserved;
  uint64_t rules;
};
struct ipa_flt_rule_mdfy {
  struct ipa_flt_rule rule;
  uint32_t rule_hdl;
  int status;
};
struct ipa_flt_rule_mdfy_v2 {
  uint32_t rule_hdl;
  int status;
  struct ipa_flt_rule_v2 rule;
};
struct ipa_ioc_mdfy_flt_rule {
  uint8_t commit;
  enum ipa_ip_type ip;
  uint8_t num_rules;
  struct ipa_flt_rule_mdfy rules[0];
};
struct ipa_ioc_mdfy_flt_rule_v2 {
  uint8_t commit;
  enum ipa_ip_type ip;
  uint8_t num_rules;
  uint32_t rule_mdfy_size;
  uint8_t reserved;
  uint64_t rules;
};
struct ipa_flt_rule_del {
  uint32_t hdl;
  int status;
};
struct ipa_ioc_del_flt_rule {
  uint8_t commit;
  enum ipa_ip_type ip;
  uint8_t num_hdls;
  struct ipa_flt_rule_del hdl[0];
};
struct ipa_ioc_get_rt_tbl {
  enum ipa_ip_type ip;
  char name[IPA_RESOURCE_NAME_MAX];
  uint32_t hdl;
};
struct ipa_ioc_query_intf {
  char name[IPA_RESOURCE_NAME_MAX];
  uint32_t num_tx_props;
  uint32_t num_rx_props;
  uint32_t num_ext_props;
  enum ipa_client_type excp_pipe;
};
struct ipa_ioc_tx_intf_prop {
  enum ipa_ip_type ip;
  struct ipa_rule_attrib attrib;
  enum ipa_client_type dst_pipe;
  enum ipa_client_type alt_dst_pipe;
  char hdr_name[IPA_RESOURCE_NAME_MAX];
  enum ipa_hdr_l2_type hdr_l2_type;
};
struct ipa_ioc_query_intf_tx_props {
  char name[IPA_RESOURCE_NAME_MAX];
  uint32_t num_tx_props;
  struct ipa_ioc_tx_intf_prop tx[0];
};
struct ipa_ioc_ext_intf_prop {
  enum ipa_ip_type ip;
  struct ipa_ipfltri_rule_eq eq_attrib;
  enum ipa_flt_action action;
  uint32_t rt_tbl_idx;
  uint8_t mux_id;
  uint32_t filter_hdl;
  uint8_t is_xlat_rule;
  uint32_t rule_id;
  uint8_t is_rule_hashable;
#define IPA_V6_UL_WL_FIREWALL_HANDLE
  uint8_t replicate_needed;
};
struct ipa_ioc_query_intf_ext_props {
  char name[IPA_RESOURCE_NAME_MAX];
  uint32_t num_ext_props;
  struct ipa_ioc_ext_intf_prop ext[0];
};
struct ipa_ioc_rx_intf_prop {
  enum ipa_ip_type ip;
  struct ipa_rule_attrib attrib;
  enum ipa_client_type src_pipe;
  enum ipa_hdr_l2_type hdr_l2_type;
};
struct ipa_ioc_query_intf_rx_props {
  char name[IPA_RESOURCE_NAME_MAX];
  uint32_t num_rx_props;
  struct ipa_ioc_rx_intf_prop rx[0];
};
struct ipa_ioc_nat_alloc_mem {
  char dev_name[IPA_RESOURCE_NAME_MAX];
  size_t size;
  __kernel_off_t offset;
};
struct ipa_ioc_nat_ipv6ct_table_alloc {
  size_t size;
  __kernel_off_t offset;
};
struct ipa_ioc_v4_nat_init {
  uint8_t tbl_index;
  uint32_t ipv4_rules_offset;
  uint32_t expn_rules_offset;
  uint32_t index_offset;
  uint32_t index_expn_offset;
  uint16_t table_entries;
  uint16_t expn_table_entries;
  uint32_t ip_addr;
  uint8_t mem_type;
  uint8_t focus_change;
};
struct ipa_ioc_ipv6ct_init {
  uint32_t base_table_offset;
  uint32_t expn_table_offset;
  uint16_t table_entries;
  uint16_t expn_table_entries;
  uint8_t tbl_index;
};
struct ipa_ioc_v4_nat_del {
  uint8_t table_index;
  uint32_t public_ip_addr;
};
struct ipa_ioc_nat_ipv6ct_table_del {
  uint8_t table_index;
  uint8_t mem_type;
};
struct ipa_ioc_nat_dma_one {
  uint8_t table_index;
  uint8_t base_addr;
  uint32_t offset;
  uint16_t data;
};
struct ipa_ioc_nat_dma_cmd {
  uint8_t entries;
  uint8_t mem_type;
  struct ipa_ioc_nat_dma_one dma[0];
};
struct ipa_ioc_nat_pdn_entry {
  uint8_t pdn_index;
  uint32_t public_ip;
  uint32_t src_metadata;
  uint32_t dst_metadata;
};
struct ipa_ioc_vlan_iface_info {
  char name[IPA_RESOURCE_NAME_MAX];
  uint8_t vlan_id;
};
enum ipa_l2tp_tunnel_type {
  IPA_L2TP_TUNNEL_IP = 1,
  IPA_L2TP_TUNNEL_UDP = 2
#define IPA_L2TP_TUNNEL_UDP IPA_L2TP_TUNNEL_UDP
};
struct ipa_ioc_l2tp_vlan_mapping_info {
  enum ipa_ip_type iptype;
  char l2tp_iface_name[IPA_RESOURCE_NAME_MAX];
  uint8_t l2tp_session_id;
  char vlan_iface_name[IPA_RESOURCE_NAME_MAX];
  enum ipa_l2tp_tunnel_type tunnel_type;
  __u16 src_port;
  __u16 dst_port;
  __u16 mtu;
  __u8 padding;
};
struct ipa_ioc_gsb_info {
  char name[IPA_RESOURCE_NAME_MAX];
};
#define QUERY_MAX_EP_PAIRS 2
#define IPA_USB0_EP_ID 11
#define IPA_USB1_EP_ID 12
#define IPA_PCIE0_EP_ID 21
#define IPA_PCIE1_EP_ID 22
#define IPA_ETH0_EP_ID 31
#define IPA_ETH1_EP_ID 32
enum ipa_peripheral_ep_type {
  IPA_DATA_EP_TYP_RESERVED = 0,
  IPA_DATA_EP_TYP_HSIC = 1,
  IPA_DATA_EP_TYP_HSUSB = 2,
  IPA_DATA_EP_TYP_PCIE = 3,
  IPA_DATA_EP_TYP_EMBEDDED = 4,
  IPA_DATA_EP_TYP_BAM_DMUX = 5,
  IPA_DATA_EP_TYP_ETH,
};
enum ipa_data_ep_prot_type {
  IPA_PROT_RMNET = 0,
  IPA_PROT_RMNET_CV2X = 1,
  IPA_PROT_MAX
};
struct ipa_ep_pair_info {
  __u32 consumer_pipe_num;
  __u32 producer_pipe_num;
  __u32 ep_id;
  __u32 padding;
};
struct ipa_ioc_get_ep_info {
  enum ipa_peripheral_ep_type ep_type;
  __u32 ep_pair_size;
  __u8 max_ep_pairs;
  __u8 num_ep_pairs;
  __u16 padding;
  __u64 info;
  enum ipa_data_ep_prot_type teth_prot;
  __u8 teth_prot_valid;
};
struct ipa_set_pkt_threshold {
  uint8_t pkt_threshold_enable;
  int pkt_threshold;
};
struct ipa_ioc_set_pkt_threshold {
  __u64 ioctl_ptr;
  __u32 ioctl_data_size;
  __u32 padding;
};
struct ipa_ioc_wigig_fst_switch {
  uint8_t netdev_name[IPA_RESOURCE_NAME_MAX];
  uint8_t client_mac_addr[IPA_MAC_ADDR_SIZE];
  int to_wigig;
};
struct ipa_msg_meta {
  uint8_t msg_type;
  uint8_t rsvd;
  uint16_t msg_len;
};
struct ipa_wlan_msg {
  char name[IPA_RESOURCE_NAME_MAX];
  uint8_t mac_addr[IPA_MAC_ADDR_SIZE];
  int16_t if_index;
};
enum ipa_wlan_hdr_attrib_type {
  WLAN_HDR_ATTRIB_MAC_ADDR,
  WLAN_HDR_ATTRIB_STA_ID
};
struct ipa_wlan_hdr_attrib_val {
  enum ipa_wlan_hdr_attrib_type attrib_type;
  uint8_t offset;
  union {
    uint8_t mac_addr[IPA_MAC_ADDR_SIZE];
    uint8_t sta_id;
  } u;
};
struct ipa_wlan_msg_ex {
  char name[IPA_RESOURCE_NAME_MAX];
  uint8_t num_of_attribs;
  struct ipa_wlan_hdr_attrib_val attribs[0];
};
struct ipa_wigig_msg {
  char name[IPA_RESOURCE_NAME_MAX];
  uint8_t client_mac_addr[IPA_MAC_ADDR_SIZE];
  union {
    enum ipa_client_type ipa_client;
    uint8_t to_wigig;
  } u;
};
struct ipa_ecm_msg {
  char name[IPA_RESOURCE_NAME_MAX];
  int ifindex;
};
struct ipa_wan_msg {
  char upstream_ifname[IPA_RESOURCE_NAME_MAX];
  char tethered_ifname[IPA_RESOURCE_NAME_MAX];
  enum ipa_ip_type ip;
  uint32_t ipv4_addr_gw;
  uint32_t ipv6_addr_gw[IPA_WAN_MSG_IPv6_ADDR_GW_LEN];
};
#define IPA_SOCKSV5_ADD_COM_ID 15
#define IPA_IPv6_NAT_COM_ID 16
struct ipa_kernel_tests_socksv5_uc_tmpl {
  __u8 direction;
  __u8 padding1;
  __u16 handle;
  __u16 cmd_id;
  __u16 padding2;
  __u32 cmd_param;
  __be32 ip_src_addr;
  __be32 ip_dst_addr;
  __be32 ipv6_src_addr[4];
  __be32 ipv6_dst_addr[4];
  __u16 src_port;
  __u16 dst_port;
  __u32 ipa_sockv5_mask;
  __u32 out_irs;
  __u32 out_iss;
  __u32 in_irs;
  __u32 in_iss;
  __u32 out_ircv_tsval;
  __u32 in_ircv_tsecr;
  __u32 out_ircv_tsecr;
  __u32 in_ircv_tsval;
  __u16 in_isnd_wscale : 4;
  __u16 out_isnd_wscale : 4;
  __u16 in_ircv_wscale : 4;
  __u16 out_ircv_wscale : 4;
  __u32 padding3;
};
struct ipacm_socksv5_info {
  enum ipa_ip_type ip_type;
  __u32 ipv4_src;
  __u32 ipv4_dst;
  __u32 ipv6_src[4];
  __u32 ipv6_dst[4];
  __u16 src_port;
  __u16 dst_port;
  __u16 index;
  __u16 padding;
};
struct ipa_socksv5_msg {
  struct ipacm_socksv5_info ul_in;
  struct ipacm_socksv5_info dl_in;
  __u16 handle;
  __u16 padding;
};
struct ipa_ioc_ipv6_nat_uc_act_entry {
  __u16 cmd_id;
  __u16 index;
  __u32 padding;
  __u32 private_port;
  __u32 public_port;
  __u64 private_address_lsb;
  __u64 private_address_msb;
  __u64 public_address_lsb;
  __u64 public_address_msb;
};
union ipa_ioc_uc_activation_entry {
  struct ipa_kernel_tests_socksv5_uc_tmpl socks;
  struct ipa_ioc_ipv6_nat_uc_act_entry ipv6_nat;
};
struct ipa_ioc_rm_dependency {
  enum ipa_rm_resource_name resource_name;
  enum ipa_rm_resource_name depends_on_name;
};
struct ipa_ioc_generate_flt_eq {
  enum ipa_ip_type ip;
  struct ipa_rule_attrib attrib;
  struct ipa_ipfltri_rule_eq eq_attrib;
};
struct ipa_ioc_write_qmapid {
  enum ipa_client_type client;
  uint8_t qmap_id;
};
struct ipa_flt_rt_counter_alloc {
  uint8_t num_counters;
  uint8_t allow_less;
  uint8_t start_id;
  uint8_t end_id;
};
struct ipa_ioc_flt_rt_counter_alloc {
  int hdl;
  struct ipa_flt_rt_counter_alloc hw_counter;
  struct ipa_flt_rt_counter_alloc sw_counter;
};
struct ipa_flt_rt_stats {
  uint32_t num_pkts;
  uint32_t num_pkts_hash;
  uint64_t num_bytes;
};
struct ipa_ioc_flt_rt_query {
  uint8_t start_id;
  uint8_t end_id;
  uint8_t reset;
  uint32_t stats_size;
  uint8_t reserved;
  uint64_t stats;
};
enum ipacm_client_enum {
  IPACM_CLIENT_USB = 1,
  IPACM_CLIENT_WLAN,
  IPACM_CLIENT_MAX
};
#define IPACM_SUPPORT_OF_LAN_STATS_FOR_ODU_CLIENTS
enum ipacm_per_client_device_type {
  IPACM_CLIENT_DEVICE_TYPE_USB = 0,
  IPACM_CLIENT_DEVICE_TYPE_WLAN = 1,
  IPACM_CLIENT_DEVICE_TYPE_ETH = 2,
  IPACM_CLIENT_DEVICE_TYPE_ODU = 3,
  IPACM_CLIENT_DEVICE_MAX
};
#define IPACM_MAX_CLIENT_DEVICE_TYPES IPACM_CLIENT_DEVICE_MAX
struct ipa_lan_client_msg {
  char lanIface[IPA_RESOURCE_NAME_MAX];
  uint8_t mac[IPA_MAC_ADDR_SIZE];
};
struct ipa_lan_client {
  uint8_t mac[IPA_MAC_ADDR_SIZE];
  int8_t client_idx;
  uint8_t inited;
};
struct ipa_lan_client_cntr_index {
  __u8 ul_cnt_idx;
  __u8 dl_cnt_idx;
};
struct ipa_tether_device_info {
  __s32 ul_src_pipe;
  __u8 hdr_len;
  __u8 padding1;
  __u16 padding2;
  __u32 num_clients;
  struct ipa_lan_client lan_client[IPA_MAX_NUM_HW_PATH_CLIENTS];
  struct ipa_lan_client_cntr_index lan_client_indices[IPA_MAX_NUM_HW_PATH_CLIENTS];
};
enum ipa_vlan_ifaces {
  IPA_VLAN_IF_ETH,
  IPA_VLAN_IF_ETH0,
  IPA_VLAN_IF_ETH1,
  IPA_VLAN_IF_RNDIS,
  IPA_VLAN_IF_ECM
};
#define IPA_VLAN_IF_EMAC IPA_VLAN_IF_ETH
#define IPA_VLAN_IF_MAX (IPA_VLAN_IF_ECM + 1)
struct ipa_ioc_get_vlan_mode {
  enum ipa_vlan_ifaces iface;
  uint32_t is_vlan_mode;
};
struct ipa_ioc_bridge_vlan_mapping_info {
  char bridge_name[IPA_RESOURCE_NAME_MAX];
  uint8_t lan2lan_sw;
  uint16_t vlan_id;
  uint32_t bridge_ipv4;
  uint32_t subnet_mask;
};
struct ipa_coalesce_info {
  uint8_t qmap_id;
  uint8_t tcp_enable;
  uint8_t udp_enable;
};
struct ipa_mtu_info {
  char if_name[IPA_RESOURCE_NAME_MAX];
  enum ipa_ip_type ip_type;
  uint16_t mtu_v4;
  uint16_t mtu_v6;
};
struct ipa_odl_ep_info {
  __u32 cons_pipe_num;
  __u32 prod_pipe_num;
  __u32 peripheral_iface_id;
  __u32 ep_type;
};
struct odl_agg_pipe_info {
  __u16 agg_byte_limit;
};
struct ipa_odl_modem_config {
  __u8 config_status;
};
struct ipa_ioc_fnr_index_info {
  uint8_t hw_counter_offset;
  uint8_t sw_counter_offset;
};
enum ipacm_hw_index_counter_type {
  UL_HW = 0,
  DL_HW,
  DL_ALL,
  UL_ALL,
};
enum ipacm_hw_index_counter_virtual_type {
  UL_HW_CACHE = 0,
  DL_HW_CACHE,
  UL_WLAN_TX,
  DL_WLAN_TX
};
struct ipa_ioc_pdn_config {
  char dev_name[IPA_RESOURCE_NAME_MAX];
  enum ipa_pdn_config_event pdn_cfg_type;
  __u8 enable;
  union {
    struct ipa_pdn_ip_collision_cfg {
      __u32 pdn_ip_addr;
    } collison_cfg;
    struct ipa_pdn_ip_passthrough_cfg {
      __u32 pdn_ip_addr;
      enum ipacm_per_client_device_type device_type;
      __u16 vlan_id;
      __u8 client_mac_addr[IPA_MAC_ADDR_SIZE];
      __u8 skip_nat;
    } passthrough_cfg;
  } u;
  __u8 default_pdn;
};
struct ipa_ioc_mac_client_list_type {
  int num_of_clients;
  __u8 mac_addr[IPA_MAX_NUM_MAC_FLT][IPA_MAC_ADDR_SIZE];
  __u8 flt_state;
  __u8 padding;
};
struct ipa_sw_flt_list_type {
  uint8_t mac_enable;
  int num_of_mac;
  uint8_t mac_addr[IPA_MAX_NUM_MAC_FLT][IPA_MAC_ADDR_SIZE];
  uint8_t ipv4_segs_enable;
  uint8_t ipv4_segs_ipv6_offload;
  int num_of_ipv4_segs;
  uint32_t ipv4_segs[IPA_MAX_NUM_IPv4_SEGS_FLT][2];
  uint8_t iface_enable;
  int num_of_iface;
  char iface[IPA_MAX_NUM_IFACE_FLT][IPA_RESOURCE_NAME_MAX];
};
struct ipa_ippt_sw_flt_list_type {
  uint8_t ipv4_enable;
  int num_of_ipv4;
  uint32_t ipv4[IPA_MAX_PDN_NUM];
  uint8_t port_enable;
  int num_of_port;
  uint16_t port[IPA_MAX_IPPT_NUM_PORT_FLT];
};
struct ipa_ioc_sw_flt_list_type {
  __u64 ioctl_ptr;
  __u32 ioctl_data_size;
  __u32 padding;
};
struct ipa_macsec_map {
  char phy_name[IPA_RESOURCE_NAME_MAX];
  char macsec_name[IPA_RESOURCE_NAME_MAX];
};
struct ipa_ioc_macsec_info {
  __u64 ioctl_ptr;
  __u32 ioctl_data_size;
  __u32 padding;
};
enum ipa_ext_router_mode {
  IPA_PREFIX_DISABLED = 0,
  IPA_PREFIX_SHARING,
  IPA_PREFIX_DELEGATION
};
struct ipa_ioc_ext_router_info {
  enum ipa_ext_router_mode mode;
  char pdn_name[IPA_RESOURCE_NAME_MAX];
  uint32_t ipv6_addr[4];
  uint32_t ipv6_mask[4];
};
#define IPA_IOC_COAL_EVICT_POLICY _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_COAL_EVICT_POLICY, struct ipa_ioc_coal_evict_policy *)
#define IPA_IOC_ADD_HDR _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_HDR, struct ipa_ioc_add_hdr *)
#define IPA_IOC_DEL_HDR _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_HDR, struct ipa_ioc_del_hdr *)
#define IPA_IOC_ADD_RT_RULE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_RT_RULE, struct ipa_ioc_add_rt_rule *)
#define IPA_IOC_ADD_RT_RULE_V2 _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_RT_RULE_V2, struct ipa_ioc_add_rt_rule_v2 *)
#define IPA_IOC_ADD_RT_RULE_EXT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_RT_RULE_EXT, struct ipa_ioc_add_rt_rule_ext *)
#define IPA_IOC_ADD_RT_RULE_EXT_V2 _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_RT_RULE_EXT_V2, struct ipa_ioc_add_rt_rule_ext_v2 *)
#define IPA_IOC_ADD_RT_RULE_AFTER _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_RT_RULE_AFTER, struct ipa_ioc_add_rt_rule_after *)
#define IPA_IOC_ADD_RT_RULE_AFTER_V2 _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_RT_RULE_AFTER_V2, struct ipa_ioc_add_rt_rule_after_v2 *)
#define IPA_IOC_DEL_RT_RULE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_RT_RULE, struct ipa_ioc_del_rt_rule *)
#define IPA_IOC_ADD_FLT_RULE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_FLT_RULE, struct ipa_ioc_add_flt_rule *)
#define IPA_IOC_ADD_FLT_RULE_V2 _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_FLT_RULE_V2, struct ipa_ioc_add_flt_rule_v2 *)
#define IPA_IOC_ADD_FLT_RULE_AFTER _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_FLT_RULE_AFTER, struct ipa_ioc_add_flt_rule_after *)
#define IPA_IOC_ADD_FLT_RULE_AFTER_V2 _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_FLT_RULE_AFTER_V2, struct ipa_ioc_add_flt_rule_after_v2 *)
#define IPA_IOC_DEL_FLT_RULE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_FLT_RULE, struct ipa_ioc_del_flt_rule *)
#define IPA_IOC_COMMIT_HDR _IO(IPA_IOC_MAGIC, IPA_IOCTL_COMMIT_HDR)
#define IPA_IOC_RESET_HDR _IO(IPA_IOC_MAGIC, IPA_IOCTL_RESET_HDR)
#define IPA_IOC_COMMIT_RT _IOW(IPA_IOC_MAGIC, IPA_IOCTL_COMMIT_RT, enum ipa_ip_type)
#define IPA_IOC_RESET_RT _IOW(IPA_IOC_MAGIC, IPA_IOCTL_RESET_RT, enum ipa_ip_type)
#define IPA_IOC_COMMIT_FLT _IOW(IPA_IOC_MAGIC, IPA_IOCTL_COMMIT_FLT, enum ipa_ip_type)
#define IPA_IOC_RESET_FLT _IOW(IPA_IOC_MAGIC, IPA_IOCTL_RESET_FLT, enum ipa_ip_type)
#define IPA_IOC_DUMP _IO(IPA_IOC_MAGIC, IPA_IOCTL_DUMP)
#define IPA_IOC_GET_RT_TBL _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GET_RT_TBL, struct ipa_ioc_get_rt_tbl *)
#define IPA_IOC_PUT_RT_TBL _IOW(IPA_IOC_MAGIC, IPA_IOCTL_PUT_RT_TBL, uint32_t)
#define IPA_IOC_COPY_HDR _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_COPY_HDR, struct ipa_ioc_copy_hdr *)
#define IPA_IOC_QUERY_INTF _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_QUERY_INTF, struct ipa_ioc_query_intf *)
#define IPA_IOC_QUERY_INTF_TX_PROPS _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_QUERY_INTF_TX_PROPS, struct ipa_ioc_query_intf_tx_props *)
#define IPA_IOC_QUERY_INTF_RX_PROPS _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_QUERY_INTF_RX_PROPS, struct ipa_ioc_query_intf_rx_props *)
#define IPA_IOC_QUERY_INTF_EXT_PROPS _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_QUERY_INTF_EXT_PROPS, struct ipa_ioc_query_intf_ext_props *)
#define IPA_IOC_GET_HDR _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GET_HDR, struct ipa_ioc_get_hdr *)
#define IPA_IOC_PUT_HDR _IOW(IPA_IOC_MAGIC, IPA_IOCTL_PUT_HDR, uint32_t)
#define IPA_IOC_ALLOC_NAT_MEM _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ALLOC_NAT_MEM, struct ipa_ioc_nat_alloc_mem *)
#define IPA_IOC_ALLOC_NAT_TABLE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ALLOC_NAT_TABLE, struct ipa_ioc_nat_ipv6ct_table_alloc *)
#define IPA_IOC_ALLOC_IPV6CT_TABLE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ALLOC_IPV6CT_TABLE, struct ipa_ioc_nat_ipv6ct_table_alloc *)
#define IPA_IOC_V4_INIT_NAT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_V4_INIT_NAT, struct ipa_ioc_v4_nat_init *)
#define IPA_IOC_INIT_IPV6CT_TABLE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_INIT_IPV6CT_TABLE, struct ipa_ioc_ipv6ct_init *)
#define IPA_IOC_NAT_DMA _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_NAT_DMA, struct ipa_ioc_nat_dma_cmd *)
#define IPA_IOC_TABLE_DMA_CMD _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_TABLE_DMA_CMD, struct ipa_ioc_nat_dma_cmd *)
#define IPA_IOC_V4_DEL_NAT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_V4_DEL_NAT, struct ipa_ioc_v4_nat_del *)
#define IPA_IOC_DEL_NAT_TABLE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_NAT_TABLE, struct ipa_ioc_nat_ipv6ct_table_del *)
#define IPA_IOC_DEL_IPV6CT_TABLE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_IPV6CT_TABLE, struct ipa_ioc_nat_ipv6ct_table_del *)
#define IPA_IOC_GET_NAT_OFFSET _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GET_NAT_OFFSET, uint32_t *)
#define IPA_IOC_NAT_MODIFY_PDN _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_NAT_MODIFY_PDN, struct ipa_ioc_nat_pdn_entry *)
#define IPA_IOC_SET_FLT _IOW(IPA_IOC_MAGIC, IPA_IOCTL_SET_FLT, uint32_t)
#define IPA_IOC_PULL_MSG _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_PULL_MSG, struct ipa_msg_meta *)
#define IPA_IOC_RM_ADD_DEPENDENCY _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_RM_ADD_DEPENDENCY, struct ipa_ioc_rm_dependency *)
#define IPA_IOC_RM_DEL_DEPENDENCY _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_RM_DEL_DEPENDENCY, struct ipa_ioc_rm_dependency *)
#define IPA_IOC_GENERATE_FLT_EQ _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GENERATE_FLT_EQ, struct ipa_ioc_generate_flt_eq *)
#define IPA_IOC_QUERY_EP_MAPPING _IOR(IPA_IOC_MAGIC, IPA_IOCTL_QUERY_EP_MAPPING, uint32_t)
#define IPA_IOC_QUERY_RT_TBL_INDEX _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_QUERY_RT_TBL_INDEX, struct ipa_ioc_get_rt_tbl_indx *)
#define IPA_IOC_WRITE_QMAPID _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_WRITE_QMAPID, struct ipa_ioc_write_qmapid *)
#define IPA_IOC_MDFY_FLT_RULE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_MDFY_FLT_RULE, struct ipa_ioc_mdfy_flt_rule *)
#define IPA_IOC_MDFY_FLT_RULE_V2 _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_MDFY_FLT_RULE_V2, struct ipa_ioc_mdfy_flt_rule_v2 *)
#define IPA_IOC_MDFY_RT_RULE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_MDFY_RT_RULE, struct ipa_ioc_mdfy_rt_rule *)
#define IPA_IOC_MDFY_RT_RULE_V2 _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_MDFY_RT_RULE_V2, struct ipa_ioc_mdfy_rt_rule_v2 *)
#define IPA_IOC_NOTIFY_WAN_UPSTREAM_ROUTE_ADD _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_NOTIFY_WAN_UPSTREAM_ROUTE_ADD, struct ipa_wan_msg *)
#define IPA_IOC_NOTIFY_WAN_UPSTREAM_ROUTE_DEL _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_NOTIFY_WAN_UPSTREAM_ROUTE_DEL, struct ipa_wan_msg *)
#define IPA_IOC_NOTIFY_WAN_EMBMS_CONNECTED _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_NOTIFY_WAN_EMBMS_CONNECTED, struct ipa_wan_msg *)
#define IPA_IOC_ADD_HDR_PROC_CTX _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_HDR_PROC_CTX, struct ipa_ioc_add_hdr_proc_ctx *)
#define IPA_IOC_DEL_HDR_PROC_CTX _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_HDR_PROC_CTX, struct ipa_ioc_del_hdr_proc_ctx *)
#define IPA_IOC_GET_HW_VERSION _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GET_HW_VERSION, enum ipa_hw_type *)
#define IPA_IOC_ADD_VLAN_IFACE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_VLAN_IFACE, struct ipa_ioc_vlan_iface_info *)
#define IPA_IOC_DEL_VLAN_IFACE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_VLAN_IFACE, struct ipa_ioc_vlan_iface_info *)
#define IPA_IOC_ADD_L2TP_VLAN_MAPPING _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_L2TP_VLAN_MAPPING, struct ipa_ioc_l2tp_vlan_mapping_info *)
#define IPA_IOC_DEL_L2TP_VLAN_MAPPING _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_L2TP_VLAN_MAPPING, struct ipa_ioc_l2tp_vlan_mapping_info *)
#define IPA_IOC_GET_VLAN_MODE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GET_VLAN_MODE, struct ipa_ioc_get_vlan_mode *)
#define IPA_IOC_ADD_BRIDGE_VLAN_MAPPING _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_BRIDGE_VLAN_MAPPING, struct ipa_ioc_bridge_vlan_mapping_info)
#define IPA_IOC_DEL_BRIDGE_VLAN_MAPPING _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_BRIDGE_VLAN_MAPPING, struct ipa_ioc_bridge_vlan_mapping_info)
#define IPA_IOC_CLEANUP _IO(IPA_IOC_MAGIC, IPA_IOCTL_CLEANUP)
#define IPA_IOC_QUERY_WLAN_CLIENT _IO(IPA_IOC_MAGIC, IPA_IOCTL_QUERY_WLAN_CLIENT)
#define IPA_IOC_ODL_QUERY_ADAPL_EP_INFO _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ODL_QUERY_ADAPL_EP_INFO, struct ipa_odl_ep_info)
#define IPA_IOC_ODL_GET_AGG_BYTE_LIMIT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ODL_GET_AGG_BYTE_LIMIT, struct odl_agg_pipe_info)
#define IPA_IOC_ODL_QUERY_MODEM_CONFIG _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ODL_QUERY_MODEM_CONFIG, struct ipa_odl_modem_config)
#define IPA_IOC_GSB_CONNECT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GSB_CONNECT, struct ipa_ioc_gsb_info)
#define IPA_IOC_GSB_DISCONNECT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GSB_DISCONNECT, struct ipa_ioc_gsb_info)
#define IPA_IOC_WIGIG_FST_SWITCH _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_WIGIG_FST_SWITCH, struct ipa_ioc_wigig_fst_switch)
#define IPA_IOC_FNR_COUNTER_ALLOC _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_FNR_COUNTER_ALLOC, struct ipa_ioc_flt_rt_counter_alloc)
#define IPA_IOC_FNR_COUNTER_DEALLOC _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_FNR_COUNTER_DEALLOC, int)
#define IPA_IOC_FNR_COUNTER_QUERY _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_FNR_COUNTER_QUERY, struct ipa_ioc_flt_rt_query)
#define IPA_IOC_SET_FNR_COUNTER_INFO _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_SET_FNR_COUNTER_INFO, struct ipa_ioc_fnr_index_info)
#define IPA_IOC_GET_NAT_IN_SRAM_INFO _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GET_NAT_IN_SRAM_INFO, struct ipa_nat_in_sram_info)
#define IPA_IOC_APP_CLOCK_VOTE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_APP_CLOCK_VOTE, uint32_t)
#define IPA_IOC_PDN_CONFIG _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_PDN_CONFIG, struct ipa_ioc_pdn_config)
#define IPA_IOC_SET_MAC_FLT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_SET_MAC_FLT, struct ipa_ioc_mac_client_list_type)
#define IPA_IOC_GET_PHERIPHERAL_EP_INFO _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_GET_PHERIPHERAL_EP_INFO, struct ipa_ioc_get_ep_info)
#define IPA_IOC_ADD_UC_ACT_ENTRY _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_UC_ACT_ENTRY, union ipa_ioc_uc_activation_entry)
#define IPA_IOC_DEL_UC_ACT_ENTRY _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_UC_ACT_ENTRY, __u16)
#define IPA_IOC_SET_SW_FLT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_SET_SW_FLT, struct ipa_ioc_sw_flt_list_type)
#define IPA_IOC_SET_PKT_THRESHOLD _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_SET_PKT_THRESHOLD, struct ipa_ioc_set_pkt_threshold)
#define IPA_IOC_ADD_EoGRE_MAPPING _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_EoGRE_MAPPING, struct ipa_ioc_eogre_info)
#define IPA_IOC_DEL_EoGRE_MAPPING _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_EoGRE_MAPPING, struct ipa_ioc_eogre_info)
#define IPA_IOC_SET_IPPT_SW_FLT _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_SET_IPPT_SW_FLT, struct ipa_ioc_sw_flt_list_type)
#define IPA_IOC_ADD_MACSEC_MAPPING _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_ADD_MACSEC_MAPPING, struct ipa_ioc_macsec_info)
#define IPA_IOC_DEL_MACSEC_MAPPING _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_DEL_MACSEC_MAPPING, struct ipa_ioc_macsec_info)
#define IPA_IOC_SET_NAT_EXC_RT_TBL_IDX _IOW(IPA_IOC_MAGIC, IPA_IOCTL_SET_NAT_EXC_RT_TBL_IDX, uint32_t)
#define IPA_IOC_SET_CONN_TRACK_EXC_RT_TBL_IDX _IOW(IPA_IOC_MAGIC, IPA_IOCTL_SET_CONN_TRACK_EXC_RT_TBL_IDX, uint32_t)
#define IPA_IOC_SET_EXT_ROUTER_MODE _IOWR(IPA_IOC_MAGIC, IPA_IOCTL_SET_EXT_ROUTER_MODE, struct ipa_ioc_ext_router_info)
#define TETH_BRIDGE_IOC_MAGIC 0xCE
#define TETH_BRIDGE_IOCTL_SET_BRIDGE_MODE 0
#define TETH_BRIDGE_IOCTL_SET_AGGR_PARAMS 1
#define TETH_BRIDGE_IOCTL_GET_AGGR_PARAMS 2
#define TETH_BRIDGE_IOCTL_GET_AGGR_CAPABILITIES 3
#define TETH_BRIDGE_IOCTL_MAX 4
enum teth_link_protocol_type {
  TETH_LINK_PROTOCOL_IP,
  TETH_LINK_PROTOCOL_ETHERNET,
  TETH_LINK_PROTOCOL_MAX,
};
enum teth_aggr_protocol_type {
  TETH_AGGR_PROTOCOL_NONE,
  TETH_AGGR_PROTOCOL_MBIM,
  TETH_AGGR_PROTOCOL_TLP,
  TETH_AGGR_PROTOCOL_MAX,
};
struct teth_aggr_params_link {
  enum teth_aggr_protocol_type aggr_prot;
  uint32_t max_transfer_size_byte;
  uint32_t max_datagrams;
};
struct teth_aggr_params {
  struct teth_aggr_params_link ul;
  struct teth_aggr_params_link dl;
};
struct teth_aggr_capabilities {
  uint16_t num_protocols;
  struct teth_aggr_params_link prot_caps[0];
};
struct teth_ioc_set_bridge_mode {
  enum teth_link_protocol_type link_protocol;
  uint16_t lcid;
};
struct teth_ioc_aggr_params {
  struct teth_aggr_params aggr_params;
  uint16_t lcid;
};
struct ipa_ioc_coal_evict_policy {
  uint32_t coal_vp_thrshld;
  uint32_t reserved1;
  uint8_t coal_eviction_en;
  uint8_t coal_vp_gran_sel;
  uint8_t coal_vp_udp_thrshld;
  uint8_t coal_vp_tcp_thrshld;
  uint8_t coal_vp_udp_thrshld_en;
  uint8_t coal_vp_tcp_thrshld_en;
  uint8_t coal_vp_tcp_num;
  uint8_t reserved2;
};
struct ipa_nat_in_sram_info {
  uint32_t sram_mem_available_for_nat;
  uint32_t nat_table_offset_into_mmap;
  uint32_t best_nat_in_sram_size_rqst;
};
enum ipa_app_clock_vote_type {
  IPA_APP_CLK_DEVOTE = 0,
  IPA_APP_CLK_VOTE = 1,
  IPA_APP_CLK_RESET_VOTE = 2,
};
#define TETH_BRIDGE_IOC_SET_BRIDGE_MODE _IOW(TETH_BRIDGE_IOC_MAGIC, TETH_BRIDGE_IOCTL_SET_BRIDGE_MODE, struct teth_ioc_set_bridge_mode *)
#define TETH_BRIDGE_IOC_SET_AGGR_PARAMS _IOW(TETH_BRIDGE_IOC_MAGIC, TETH_BRIDGE_IOCTL_SET_AGGR_PARAMS, struct teth_ioc_aggr_params *)
#define TETH_BRIDGE_IOC_GET_AGGR_PARAMS _IOR(TETH_BRIDGE_IOC_MAGIC, TETH_BRIDGE_IOCTL_GET_AGGR_PARAMS, struct teth_ioc_aggr_params *)
#define TETH_BRIDGE_IOC_GET_AGGR_CAPABILITIES _IOWR(TETH_BRIDGE_IOC_MAGIC, TETH_BRIDGE_IOCTL_GET_AGGR_CAPABILITIES, struct teth_aggr_capabilities *)
#define ODU_BRIDGE_IOC_MAGIC 0xCD
#define ODU_BRIDGE_IOCTL_SET_MODE 0
#define ODU_BRIDGE_IOCTL_SET_LLV6_ADDR 1
#define ODU_BRIDGE_IOCTL_MAX 2
enum odu_bridge_mode {
  ODU_BRIDGE_MODE_ROUTER,
  ODU_BRIDGE_MODE_BRIDGE,
  ODU_BRIDGE_MODE_MAX,
};
#define ODU_BRIDGE_IOC_SET_MODE _IOW(ODU_BRIDGE_IOC_MAGIC, ODU_BRIDGE_IOCTL_SET_MODE, enum odu_bridge_mode)
#define ODU_BRIDGE_IOC_SET_LLV6_ADDR _IOW(ODU_BRIDGE_IOC_MAGIC, ODU_BRIDGE_IOCTL_SET_LLV6_ADDR, struct in6_addr *)
#endif
