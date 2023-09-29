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
#ifndef _LINUX_IOAM6_H
#define _LINUX_IOAM6_H
#include <asm/byteorder.h>
#include <linux/types.h>
#define IOAM6_U16_UNAVAILABLE U16_MAX
#define IOAM6_U32_UNAVAILABLE U32_MAX
#define IOAM6_U64_UNAVAILABLE U64_MAX
#define IOAM6_DEFAULT_ID (IOAM6_U32_UNAVAILABLE >> 8)
#define IOAM6_DEFAULT_ID_WIDE (IOAM6_U64_UNAVAILABLE >> 8)
#define IOAM6_DEFAULT_IF_ID IOAM6_U16_UNAVAILABLE
#define IOAM6_DEFAULT_IF_ID_WIDE IOAM6_U32_UNAVAILABLE
struct ioam6_hdr {
  __u8 opt_type;
  __u8 opt_len;
  __u8 : 8;
#define IOAM6_TYPE_PREALLOC 0
  __u8 type;
} __attribute__((packed));
struct ioam6_trace_hdr {
  __be16 namespace_id;
#ifdef __LITTLE_ENDIAN_BITFIELD
  __u8 : 1, : 1, overflow : 1, nodelen : 5;
  __u8 remlen : 7, : 1;
  union {
    __be32 type_be32;
    struct {
      __u32 bit7 : 1, bit6 : 1, bit5 : 1, bit4 : 1, bit3 : 1, bit2 : 1, bit1 : 1, bit0 : 1, bit15 : 1, bit14 : 1, bit13 : 1, bit12 : 1, bit11 : 1, bit10 : 1, bit9 : 1, bit8 : 1, bit23 : 1, bit22 : 1, bit21 : 1, bit20 : 1, bit19 : 1, bit18 : 1, bit17 : 1, bit16 : 1, : 8;
    } type;
  };
#elif defined(__BIG_ENDIAN_BITFIELD)
  __u8 nodelen : 5, overflow : 1, : 1, : 1;
  __u8 : 1, remlen : 7;
  union {
    __be32 type_be32;
    struct {
      __u32 bit0 : 1, bit1 : 1, bit2 : 1, bit3 : 1, bit4 : 1, bit5 : 1, bit6 : 1, bit7 : 1, bit8 : 1, bit9 : 1, bit10 : 1, bit11 : 1, bit12 : 1, bit13 : 1, bit14 : 1, bit15 : 1, bit16 : 1, bit17 : 1, bit18 : 1, bit19 : 1, bit20 : 1, bit21 : 1, bit22 : 1, bit23 : 1, : 8;
    } type;
  };
#else
#error "Please fix <asm/byteorder.h>"
#endif
#define IOAM6_TRACE_DATA_SIZE_MAX 244
  __u8 data[0];
} __attribute__((packed));
#endif
