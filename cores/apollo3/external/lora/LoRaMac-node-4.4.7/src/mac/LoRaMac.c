# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3//"
# 1 "<built-in>"
#define __STDC__ 1
#define __STDC_VERSION__ 199901L
#define __STDC_HOSTED__ 1
#define __GNUC__ 10
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __VERSION__ "10.2.1 20201103 (release)"
#define __ATOMIC_RELAXED 0
#define __ATOMIC_SEQ_CST 5
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __OPTIMIZE_SIZE__ 1
#define __OPTIMIZE__ 1
#define __FINITE_MATH_ONLY__ 0
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 4
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_SIZE_T__ 4
#define __CHAR_BIT__ 8
#define __BIGGEST_ALIGNMENT__ 8
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_PDP_ENDIAN__ 3412
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __SIZEOF_POINTER__ 4
#define __SIZE_TYPE__ unsigned int
#define __PTRDIFF_TYPE__ int
#define __WCHAR_TYPE__ unsigned int
#define __WINT_TYPE__ unsigned int
#define __INTMAX_TYPE__ long long int
#define __UINTMAX_TYPE__ long long unsigned int
#define __CHAR16_TYPE__ short unsigned int
#define __CHAR32_TYPE__ long unsigned int
#define __SIG_ATOMIC_TYPE__ int
#define __INT8_TYPE__ signed char
#define __INT16_TYPE__ short int
#define __INT32_TYPE__ long int
#define __INT64_TYPE__ long long int
#define __UINT8_TYPE__ unsigned char
#define __UINT16_TYPE__ short unsigned int
#define __UINT32_TYPE__ long unsigned int
#define __UINT64_TYPE__ long long unsigned int
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST16_TYPE__ short int
#define __INT_LEAST32_TYPE__ long int
#define __INT_LEAST64_TYPE__ long long int
#define __UINT_LEAST8_TYPE__ unsigned char
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __UINT_LEAST32_TYPE__ long unsigned int
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __INT_FAST8_TYPE__ int
#define __INT_FAST16_TYPE__ int
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_TYPE__ long long int
#define __UINT_FAST8_TYPE__ unsigned int
#define __UINT_FAST16_TYPE__ unsigned int
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INTPTR_TYPE__ int
#define __UINTPTR_TYPE__ unsigned int
#define __GXX_ABI_VERSION 1014
#define __SCHAR_MAX__ 0x7f
#define __SHRT_MAX__ 0x7fff
#define __INT_MAX__ 0x7fffffff
#define __LONG_MAX__ 0x7fffffffL
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __WCHAR_MAX__ 0xffffffffU
#define __WCHAR_MIN__ 0U
#define __WINT_MAX__ 0xffffffffU
#define __WINT_MIN__ 0U
#define __PTRDIFF_MAX__ 0x7fffffff
#define __SIZE_MAX__ 0xffffffffU
#define __SCHAR_WIDTH__ 8
#define __SHRT_WIDTH__ 16
#define __INT_WIDTH__ 32
#define __LONG_WIDTH__ 32
#define __LONG_LONG_WIDTH__ 64
#define __WCHAR_WIDTH__ 32
#define __WINT_WIDTH__ 32
#define __PTRDIFF_WIDTH__ 32
#define __SIZE_WIDTH__ 32
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#define __INTMAX_C(c) c ## LL
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#define __UINTMAX_C(c) c ## ULL
#define __INTMAX_WIDTH__ 64
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT8_MAX__ 0x7f
#define __INT16_MAX__ 0x7fff
#define __INT32_MAX__ 0x7fffffffL
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __UINT8_MAX__ 0xff
#define __UINT16_MAX__ 0xffff
#define __UINT32_MAX__ 0xffffffffUL
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __INT_LEAST8_MAX__ 0x7f
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT16_C(c) c
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_MAX__ 0x7fffffffL
#define __INT32_C(c) c ## L
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __INT64_C(c) c ## LL
#define __INT_LEAST64_WIDTH__ 64
#define __UINT_LEAST8_MAX__ 0xff
#define __UINT8_C(c) c
#define __UINT_LEAST16_MAX__ 0xffff
#define __UINT16_C(c) c
#define __UINT_LEAST32_MAX__ 0xffffffffUL
#define __UINT32_C(c) c ## UL
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __UINT64_C(c) c ## ULL
#define __INT_FAST8_MAX__ 0x7fffffff
#define __INT_FAST8_WIDTH__ 32
#define __INT_FAST16_MAX__ 0x7fffffff
#define __INT_FAST16_WIDTH__ 32
#define __INT_FAST32_MAX__ 0x7fffffff
#define __INT_FAST32_WIDTH__ 32
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT_FAST64_WIDTH__ 64
#define __UINT_FAST8_MAX__ 0xffffffffU
#define __UINT_FAST16_MAX__ 0xffffffffU
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __INTPTR_MAX__ 0x7fffffff
#define __INTPTR_WIDTH__ 32
#define __UINTPTR_MAX__ 0xffffffffU
#define __GCC_IEC_559 0
#define __GCC_IEC_559_COMPLEX 0
#define __FLT_EVAL_METHOD__ 0
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __DEC_EVAL_METHOD__ 2
#define __FLT_RADIX__ 2
#define __FLT_MANT_DIG__ 24
#define __FLT_DIG__ 6
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX_10_EXP__ 38
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_MAX__ 3.4028234663852886e+38F
#define __FLT_NORM_MAX__ 3.4028234663852886e+38F
#define __FLT_MIN__ 1.1754943508222875e-38F
#define __FLT_EPSILON__ 1.1920928955078125e-7F
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF 1
#define __DBL_MANT_DIG__ 53
#define __DBL_DIG__ 15
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX_10_EXP__ 308
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_NORM_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_MIN__ ((double)2.2250738585072014e-308L)
#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)
#define __DBL_DENORM_MIN__ ((double)4.9406564584124654e-324L)
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_DIG__ 15
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX_10_EXP__ 308
#define __DECIMAL_DIG__ 17
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_NORM_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT32_MANT_DIG__ 24
#define __FLT32_DIG__ 6
#define __FLT32_MIN_EXP__ (-125)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32_MAX_EXP__ 128
#define __FLT32_MAX_10_EXP__ 38
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT32_MAX__ 3.4028234663852886e+38F32
#define __FLT32_NORM_MAX__ 3.4028234663852886e+38F32
#define __FLT32_MIN__ 1.1754943508222875e-38F32
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32
#define __FLT32_HAS_DENORM__ 1
#define __FLT32_HAS_INFINITY__ 1
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF32 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64_DIG__ 15
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define __FLT64_MAX_EXP__ 1024
#define __FLT64_MAX_10_EXP__ 308
#define __FLT64_DECIMAL_DIG__ 17
#define __FLT64_MAX__ 1.7976931348623157e+308F64
#define __FLT64_NORM_MAX__ 1.7976931348623157e+308F64
#define __FLT64_MIN__ 2.2250738585072014e-308F64
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64
#define __FLT64_HAS_DENORM__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __FLT32X_MANT_DIG__ 53
#define __FLT32X_DIG__ 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32X_MIN_10_EXP__ (-307)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32X_MAX_10_EXP__ 308
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_NORM_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x
#define __FLT32X_HAS_DENORM__ 1
#define __FLT32X_HAS_INFINITY__ 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __SFRACT_FBIT__ 7
#define __SFRACT_IBIT__ 0
#define __SFRACT_MIN__ (-0.5HR-0.5HR)
#define __SFRACT_MAX__ 0X7FP-7HR
#define __SFRACT_EPSILON__ 0x1P-7HR
#define __USFRACT_FBIT__ 8
#define __USFRACT_IBIT__ 0
#define __USFRACT_MIN__ 0.0UHR
#define __USFRACT_MAX__ 0XFFP-8UHR
#define __USFRACT_EPSILON__ 0x1P-8UHR
#define __FRACT_FBIT__ 15
#define __FRACT_IBIT__ 0
#define __FRACT_MIN__ (-0.5R-0.5R)
#define __FRACT_MAX__ 0X7FFFP-15R
#define __FRACT_EPSILON__ 0x1P-15R
#define __UFRACT_FBIT__ 16
#define __UFRACT_IBIT__ 0
#define __UFRACT_MIN__ 0.0UR
#define __UFRACT_MAX__ 0XFFFFP-16UR
#define __UFRACT_EPSILON__ 0x1P-16UR
#define __LFRACT_FBIT__ 31
#define __LFRACT_IBIT__ 0
#define __LFRACT_MIN__ (-0.5LR-0.5LR)
#define __LFRACT_MAX__ 0X7FFFFFFFP-31LR
#define __LFRACT_EPSILON__ 0x1P-31LR
#define __ULFRACT_FBIT__ 32
#define __ULFRACT_IBIT__ 0
#define __ULFRACT_MIN__ 0.0ULR
#define __ULFRACT_MAX__ 0XFFFFFFFFP-32ULR
#define __ULFRACT_EPSILON__ 0x1P-32ULR
#define __LLFRACT_FBIT__ 63
#define __LLFRACT_IBIT__ 0
#define __LLFRACT_MIN__ (-0.5LLR-0.5LLR)
#define __LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR
#define __LLFRACT_EPSILON__ 0x1P-63LLR
#define __ULLFRACT_FBIT__ 64
#define __ULLFRACT_IBIT__ 0
#define __ULLFRACT_MIN__ 0.0ULLR
#define __ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR
#define __ULLFRACT_EPSILON__ 0x1P-64ULLR
#define __SACCUM_FBIT__ 7
#define __SACCUM_IBIT__ 8
#define __SACCUM_MIN__ (-0X1P7HK-0X1P7HK)
#define __SACCUM_MAX__ 0X7FFFP-7HK
#define __SACCUM_EPSILON__ 0x1P-7HK
#define __USACCUM_FBIT__ 8
#define __USACCUM_IBIT__ 8
#define __USACCUM_MIN__ 0.0UHK
#define __USACCUM_MAX__ 0XFFFFP-8UHK
#define __USACCUM_EPSILON__ 0x1P-8UHK
#define __ACCUM_FBIT__ 15
#define __ACCUM_IBIT__ 16
#define __ACCUM_MIN__ (-0X1P15K-0X1P15K)
#define __ACCUM_MAX__ 0X7FFFFFFFP-15K
#define __ACCUM_EPSILON__ 0x1P-15K
#define __UACCUM_FBIT__ 16
#define __UACCUM_IBIT__ 16
#define __UACCUM_MIN__ 0.0UK
#define __UACCUM_MAX__ 0XFFFFFFFFP-16UK
#define __UACCUM_EPSILON__ 0x1P-16UK
#define __LACCUM_FBIT__ 31
#define __LACCUM_IBIT__ 32
#define __LACCUM_MIN__ (-0X1P31LK-0X1P31LK)
#define __LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK
#define __LACCUM_EPSILON__ 0x1P-31LK
#define __ULACCUM_FBIT__ 32
#define __ULACCUM_IBIT__ 32
#define __ULACCUM_MIN__ 0.0ULK
#define __ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK
#define __ULACCUM_EPSILON__ 0x1P-32ULK
#define __LLACCUM_FBIT__ 31
#define __LLACCUM_IBIT__ 32
#define __LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)
#define __LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK
#define __LLACCUM_EPSILON__ 0x1P-31LLK
#define __ULLACCUM_FBIT__ 32
#define __ULLACCUM_IBIT__ 32
#define __ULLACCUM_MIN__ 0.0ULLK
#define __ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK
#define __ULLACCUM_EPSILON__ 0x1P-32ULLK
#define __QQ_FBIT__ 7
#define __QQ_IBIT__ 0
#define __HQ_FBIT__ 15
#define __HQ_IBIT__ 0
#define __SQ_FBIT__ 31
#define __SQ_IBIT__ 0
#define __DQ_FBIT__ 63
#define __DQ_IBIT__ 0
#define __TQ_FBIT__ 127
#define __TQ_IBIT__ 0
#define __UQQ_FBIT__ 8
#define __UQQ_IBIT__ 0
#define __UHQ_FBIT__ 16
#define __UHQ_IBIT__ 0
#define __USQ_FBIT__ 32
#define __USQ_IBIT__ 0
#define __UDQ_FBIT__ 64
#define __UDQ_IBIT__ 0
#define __UTQ_FBIT__ 128
#define __UTQ_IBIT__ 0
#define __HA_FBIT__ 7
#define __HA_IBIT__ 8
#define __SA_FBIT__ 15
#define __SA_IBIT__ 16
#define __DA_FBIT__ 31
#define __DA_IBIT__ 32
#define __TA_FBIT__ 63
#define __TA_IBIT__ 64
#define __UHA_FBIT__ 8
#define __UHA_IBIT__ 8
#define __USA_FBIT__ 16
#define __USA_IBIT__ 16
#define __UDA_FBIT__ 32
#define __UDA_IBIT__ 32
#define __UTA_FBIT__ 64
#define __UTA_IBIT__ 64
#define __REGISTER_PREFIX__ 
#define __USER_LABEL_PREFIX__ 
#define __GNUC_STDC_INLINE__ 1
#define __STRICT_ANSI__ 1
#define __CHAR_UNSIGNED__ 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZEOF_PTRDIFF_T__ 4
#define __ARM_FEATURE_DSP 1
#define __ARM_FEATURE_QBIT 1
#define __ARM_FEATURE_SAT 1
#undef __ARM_FEATURE_CRYPTO
# 1 "<built-in>"
#define __ARM_FEATURE_UNALIGNED 1
#undef __ARM_FEATURE_QRDMX
# 1 "<built-in>"
#undef __ARM_FEATURE_CRC32
# 1 "<built-in>"
#undef __ARM_FEATURE_DOTPROD
# 1 "<built-in>"
#undef __ARM_FEATURE_COMPLEX
# 1 "<built-in>"
#define __ARM_32BIT_STATE 1
#undef __ARM_FEATURE_MVE
# 1 "<built-in>"
#undef __ARM_FEATURE_CMSE
# 1 "<built-in>"
#undef __ARM_FEATURE_LDREX
# 1 "<built-in>"
#define __ARM_FEATURE_LDREX 7
#define __ARM_FEATURE_CLZ 1
#undef __ARM_FEATURE_NUMERIC_MAXMIN
# 1 "<built-in>"
#define __ARM_FEATURE_SIMD32 1
#define __ARM_SIZEOF_MINIMAL_ENUM 1
#define __ARM_SIZEOF_WCHAR_T 4
#undef __ARM_ARCH_PROFILE
# 1 "<built-in>"
#define __ARM_ARCH_PROFILE 77
#define __arm__ 1
#undef __ARM_ARCH
# 1 "<built-in>"
#define __ARM_ARCH 7
#define __APCS_32__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __thumb__ 1
#define __thumb2__ 1
#define __THUMBEL__ 1
#undef __ARM_ARCH_ISA_THUMB
# 1 "<built-in>"
#define __ARM_ARCH_ISA_THUMB 2
#define __ARMEL__ 1
#define __VFP_FP__ 1
#undef __ARM_FP
# 1 "<built-in>"
#define __ARM_FP 4
#undef __ARM_FP16_FORMAT_IEEE
# 1 "<built-in>"
#undef __ARM_FP16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#undef __ARM_FP16_ARGS
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_FML
# 1 "<built-in>"
#define __ARM_FEATURE_FMA 1
#undef __ARM_NEON__
# 1 "<built-in>"
#undef __ARM_NEON
# 1 "<built-in>"
#undef __ARM_NEON_FP
# 1 "<built-in>"
#define __THUMB_INTERWORK__ 1
#define __ARM_ARCH_7EM__ 1
#define __ARM_PCS_VFP 1
#define __ARM_EABI__ 1
#undef __FDPIC__
# 1 "<built-in>"
#define __ARM_ARCH_EXT_IDIV__ 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_ASM_SYNTAX_UNIFIED__ 1
#undef __ARM_FEATURE_COPROC
# 1 "<built-in>"
#define __ARM_FEATURE_COPROC 15
#undef __ARM_FEATURE_CDE
# 1 "<built-in>"
#undef __ARM_FEATURE_CDE_COPROC
# 1 "<built-in>"
#undef __ARM_FEATURE_MATMUL_INT8
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_BF16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#define __GXX_TYPEINFO_EQUALITY_INLINE 0
#define __ELF__ 1
# 1 "<command-line>"
#define __USES_INITFINI__ 1
#define apollo3 1
#define SUPPORT_LORA 1
#define SUPPORT_LORA_P2P 1
#define LORA_IO_SPI_PORT 1
#define SYS_RTC_COUNTER_PORT 2
#define ATCMD_CUST_TABLE_SIZE 64
#define WAN_TYPE 0
#define LORA_STACK_VER 0x040407
#define RAK11720 +RAK5005-O_V1.0 1
#define rak11720 1
#define gcc 1
#define PART_APOLLO3 1
#define AM_PACKAGE_BGA 1
#define AM_PART_APOLLO3 1
#define AM_FREERTOS 1
#define AM_FREERTOS_STIMER_BACKUP 1
#define AM_BLE_USE_NVM 1
#define AM_CUSTOM_BDADDR 1
#define AM_NUS_ADD 1
#define AM_CUS_ADD 1
#define AM_AMOTA_ADD 1
#define AM_UTIL_FAULTISR_PRINT 1
#define SEC_ECC_CFG SEC_ECC_CFG_HCI
#define RTT_LOG_ENABLED 1
#define DEBUG_ENABLED 1
#define rak11720 1
#define SYS_RTC_COUNTER_PORT 2
#define TWI0_ENABLED 1
#define SPI0_ENABLED 1
#define SPI1_ENABLED 1
#define BLE_SUPPORT 1
#define ATCMD_CUST_TABLE_SIZE 64
#define WISBLOCK_BASE_5005_O 1
#define SX1262_CHIP 1
#define REGION_AS923 1
#define REGION_AU915 1
#define REGION_CN470 1
#define REGION_CN779 1
#define REGION_EU433 1
#define REGION_EU868 1
#define REGION_KR920 1
#define REGION_IN865 1
#define REGION_US915 1
#define REGION_RU864 1
#define REGION_LA915 1
#define SOFT_SE 1
#define SECURE_ELEMENT_PRE_PROVISIONED 1
#define LORAMAC_CLASSB_ENABLED 1
#define BLE_CENTRAL_SUPPORT 1
#define WISBLOCK_BASE_5005_O 1
#define SUPPORT_BLE 1
#define SUPPORT_SPI 1
#define SUPPORT_AT 1
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define __UTILITIES_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 1 3 4
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3 4





#define _MACHINE__DEFAULT_TYPES_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 1 3 4
# 22 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define _SYS_FEATURES_H 





# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3 4



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.3.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 3
#define __NEWLIB_PATCHLEVEL__ 0
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 2 3 4




#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __XSI_VISIBLE 0
# 330 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __SSP_FORTIFY_LEVEL 0
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 2 3 4






#define __EXP(x) __ ##x ##__
# 26 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#define __have_longlong64 1






#define __have_long32 1








# 41 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#undef __EXP
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _SYS__INTSUP_H 





#define __STDINT_EXP(x) __ ##x ##__
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef __int20
#undef __int20__
#undef long
#define signed +0
#define unsigned +0
#define char +0
#define short +1
#define __int20 +2
#define __int20__ +2
#define int +2
#define long +4
# 67 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _INTPTR_EQ_INT 






#define _INT32_EQ_LONG 







#define __INT8 "hh"
# 93 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT16 "h"
# 104 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT32 "l"
# 113 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT64 "ll"






#define __FAST8 
# 129 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST16 






#define __FAST32 
# 147 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST64 "ll"



#define __LEAST8 "hh"
# 162 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST16 "h"
# 173 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST32 "l"
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST64 "ll"

#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef long
       
       
       
       
       
# 194 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20
       
# 195 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20__
       
       
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
#define _SYS__STDINT_H 
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;
#define _INT8_T_DECLARED 


typedef __uint8_t uint8_t ;
#define _UINT8_T_DECLARED 

#define __int8_t_defined 1




typedef __int16_t int16_t ;
#define _INT16_T_DECLARED 


typedef __uint16_t uint16_t ;
#define _UINT16_T_DECLARED 

#define __int16_t_defined 1




typedef __int32_t int32_t ;
#define _INT32_T_DECLARED 


typedef __uint32_t uint32_t ;
#define _UINT32_T_DECLARED 

#define __int32_t_defined 1




typedef __int64_t int64_t ;
#define _INT64_T_DECLARED 


typedef __uint64_t uint64_t ;
#define _UINT64_T_DECLARED 

#define __int64_t_defined 1



typedef __intmax_t intmax_t;
#define _INTMAX_T_DECLARED 



typedef __uintmax_t uintmax_t;
#define _UINTMAX_T_DECLARED 



typedef __intptr_t intptr_t;
#define _INTPTR_T_DECLARED 



typedef __uintptr_t uintptr_t;
#define _UINTPTR_T_DECLARED 
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
#define __int_least8_t_defined 1



typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
#define __int_least16_t_defined 1



typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
#define __int_least32_t_defined 1



typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
#define __int_least64_t_defined 1
# 51 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
#define __int_fast8_t_defined 1







  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
#define __int_fast16_t_defined 1







  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
#define __int_fast32_t_defined 1







  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
#define __int_fast64_t_defined 1
# 128 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX (__INTPTR_MAX__)
#define UINTPTR_MAX (__UINTPTR_MAX__)
# 152 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT8_MIN (-__INT8_MAX__ - 1)
#define INT8_MAX (__INT8_MAX__)
#define UINT8_MAX (__UINT8_MAX__)







#define INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
#define UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)
# 174 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_MIN (-__INT16_MAX__ - 1)
#define INT16_MAX (__INT16_MAX__)
#define UINT16_MAX (__UINT16_MAX__)







#define INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
#define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
# 196 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_MIN (-__INT32_MAX__ - 1)
#define INT32_MAX (__INT32_MAX__)
#define UINT32_MAX (__UINT32_MAX__)
# 212 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
#define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX (__INT64_MAX__)
#define UINT64_MAX (__UINT64_MAX__)
# 246 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
#define UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)
# 262 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX (__INT_FAST8_MAX__)
#define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
# 278 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX (__INT_FAST16_MAX__)
#define UINT_FAST16_MAX (__UINT_FAST16_MAX__)
# 294 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX (__INT_FAST32_MAX__)
#define UINT_FAST32_MAX (__UINT_FAST32_MAX__)
# 310 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX (__INT_FAST64_MAX__)
#define UINT_FAST64_MAX (__UINT_FAST64_MAX__)
# 326 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_MAX (__INTMAX_MAX__)
#define INTMAX_MIN (-INTMAX_MAX - 1)







#define UINTMAX_MAX (__UINTMAX_MAX__)







#define SIZE_MAX (__SIZE_MAX__)





#define SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)
#define SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))



#define PTRDIFF_MAX (__PTRDIFF_MAX__)



#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)




#define WCHAR_MIN (__WCHAR_MIN__)
# 374 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WCHAR_MAX (__WCHAR_MAX__)
# 384 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WINT_MAX (__WINT_MAX__)




#define WINT_MIN (__WINT_MIN__)






#define INT8_C(x) __INT8_C(x)
#define UINT8_C(x) __UINT8_C(x)
# 408 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_C(x) __INT16_C(x)
#define UINT16_C(x) __UINT16_C(x)
# 420 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_C(x) __INT32_C(x)
#define UINT32_C(x) __UINT32_C(x)
# 433 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_C(x) __INT64_C(x)
#define UINT64_C(x) __UINT64_C(x)
# 449 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_C(x) __INTMAX_C(x)
#define UINTMAX_C(x) __UINTMAX_C(x)
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h" 2





#define SUCCESS 1



#define FAIL 0
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define MIN(a,b) ( ( ( a ) < ( b ) ) ? ( a ) : ( b ) )
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define MAX(a,b) ( ( ( a ) > ( b ) ) ? ( a ) : ( b ) )
# 72 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define POW2(n) ( 1 << n )





# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
typedef union Version_u
{
    struct Version_s
    {
        uint8_t Revision;
        uint8_t Patch;
        uint8_t Minor;
        uint8_t Major;
    }Fields;
    uint32_t Value;
}Version_t;






void srand1( uint32_t seed );
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
int32_t randr( int32_t min, int32_t max );
# 114 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memcpy1( uint8_t *dst, const uint8_t *src, uint16_t size );
# 123 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memcpyr( uint8_t *dst, const uint8_t *src, uint16_t size );
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memset1( uint8_t *dst, uint8_t value, uint16_t size );







int8_t Nibble2HexChar( uint8_t a );
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32( uint8_t *buffer, uint16_t length );







uint32_t Crc32Init( void );
# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32Update( uint32_t crcInit, uint8_t *buffer, uint16_t length );
# 180 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32Finalize( uint32_t crc );




#define CRITICAL_SECTION_BEGIN() uint32_t mask; BoardCriticalSectionBegin( &mask )




#define CRITICAL_SECTION_END() BoardCriticalSectionEnd( &mask )
# 203 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void BoardCriticalSectionBegin( uint32_t *mask );






void BoardCriticalSectionEnd( uint32_t *mask );
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 1
# 53 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
#define __REGION_H__ 







# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 1 3 4
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool
#define true 1
#define false 0
# 52 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 62 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 1
# 67 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
#define __LORAMAC_H__ 
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
#define __TIMER_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 39 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _STDDEF_H 
#define _STDDEF_H_ 

#define _ANSI_STDDEF_H 
# 131 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 




# 143 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 181 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 






#define __size_t 





typedef unsigned int size_t;
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 260 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
# 287 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 321 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 2







# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
typedef struct TimerEvent_s
{
    uint32_t Timestamp;
    uint32_t ReloadValue;
    
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsStarted;
    
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsNext2Expire;
    void ( *Callback )( void* context );
    void *Context;
    struct TimerEvent_s *Next;
}TimerEvent_t;





typedef uint32_t TimerTime_t;
#define TIMERTIME_T_MAX ( ( uint32_t )~0 )
# 66 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
void TimerInit( TimerEvent_t *obj, void ( *callback )( void *context ) );







void TimerSetContext( TimerEvent_t *obj, void* context );




void TimerIrqHandler( void );






void TimerStart( TimerEvent_t *obj );
# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"

# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
_Bool 
# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
    TimerIsStarted( TimerEvent_t *obj );






void TimerStop( TimerEvent_t *obj );






void TimerReset( TimerEvent_t *obj );







void TimerSetValue( TimerEvent_t *obj, uint32_t value );






TimerTime_t TimerGetCurrentTime( void );
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerGetElapsedTime( TimerTime_t past );
# 146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerTempCompensation( TimerTime_t period, float temperature );




void TimerProcess( void );
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h" 1
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
#define __SYS_TIME_H__ 







# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 1 3







#define _TIME_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3







#define _ANSIDECL_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 1 3







#define __NEWLIB_H__ 1
# 18 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _WANT_IO_C99_FORMATS 1


#define _WANT_IO_LONG_LONG 1


#define _WANT_REGISTER_FINI 1
# 37 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _REENT_CHECK_VERIFY 1





#define _MB_LEN_MAX 1
# 53 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define HAVE_INITFINI_ARRAY 1



#define _ATEXIT_DYNAMIC_ALLOC 1


#define _HAVE_LONG_DOUBLE 1


#define _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL 1


#define _LDBL_EQ_DBL 1


#define _FVWRITE_IN_STREAMIO 1


#define _FSEEK_OPTIMIZATION 1


#define _WIDE_ORIENT 1


#define _UNBUF_STREAM_OPT 1
# 95 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _RETARGETABLE_LOCKING 1
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 1 3

#define __SYS_CONFIG_H__ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN 
# 473 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 1


#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
# 5 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 3
#define _POINTER_INT long





#undef __RAND_MAX



#define __RAND_MAX 0x7fffffff
# 250 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 3
#define __EXPORT 



#define __IMPORT 






#define _READ_WRITE_RETURN_TYPE int





#define _READ_WRITE_BUFSIZE_TYPE int
# 12 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 31 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 3
#define _BEGIN_STD_C 
#define _END_STD_C 
#define _NOTHROW 



#define _LONG_DOUBLE long double





#define _ATTRIBUTE(attrs) __attribute__ (attrs)
# 69 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 3
#define _ELIDABLE_INLINE static __inline__



#define _NOINLINE __attribute__ ((__noinline__))
#define _NOINLINE_STATIC _NOINLINE static
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 1 3
# 43 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _SYS_CDEFS_H_ 



# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 48 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 2 3

#define __PMT(args) args
#define __DOTS , ...
#define __THROW 


#define __ASMNAME(cname) __XSTRING (__USER_LABEL_PREFIX__) cname


#define __ptr_t void *
#define __long_double_t long double

#define __attribute_malloc__ 
#define __attribute_pure__ 
#define __attribute_format_strfmon__(a,b) 
#define __flexarr [0]


#define __bounded 
#define __unbounded 
#define __ptrvalue 
# 78 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __has_extension __has_feature


#define __has_feature(x) 0
# 94 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __BEGIN_DECLS 
#define __END_DECLS 
# 107 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __GNUCLIKE_ASM 3
#define __GNUCLIKE_MATH_BUILTIN_CONSTANTS 



#define __GNUCLIKE___TYPEOF 1
#define __GNUCLIKE___OFFSETOF 1
#define __GNUCLIKE___SECTION 1


#define __GNUCLIKE_CTOR_SECTION_HANDLING 1


#define __GNUCLIKE_BUILTIN_CONSTANT_P 1






#define __GNUCLIKE_BUILTIN_VARARGS 1
#define __GNUCLIKE_BUILTIN_STDARG 1
#define __GNUCLIKE_BUILTIN_VAALIST 1



#define __GNUC_VA_LIST_COMPATIBILITY 1






#define __compiler_membar() __asm __volatile(" " : : : "memory")



#define __GNUCLIKE_BUILTIN_NEXT_ARG 1
#define __GNUCLIKE_MATH_BUILTIN_RELOPS 


#define __GNUCLIKE_BUILTIN_MEMCPY 1


#define __CC_SUPPORTS_INLINE 1
#define __CC_SUPPORTS___INLINE 1
#define __CC_SUPPORTS___INLINE__ 1

#define __CC_SUPPORTS___FUNC__ 1
#define __CC_SUPPORTS_WARNING 1

#define __CC_SUPPORTS_VARADIC_XXX 1

#define __CC_SUPPORTS_DYNAMIC_ARRAY_INIT 1
# 177 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __P(protos) protos
#define __CONCAT1(x,y) x ## y
#define __CONCAT(x,y) __CONCAT1(x,y)
#define __STRING(x) #x
#define __XSTRING(x) __STRING(x)

#define __const const
#define __signed signed
#define __volatile volatile
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __weak_symbol __attribute__((__weak__))
# 243 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __dead2 __attribute__((__noreturn__))
#define __pure2 __attribute__((__const__))
#define __unused __attribute__((__unused__))
#define __used __attribute__((__used__))
#define __packed __attribute__((__packed__))
#define __aligned(x) __attribute__((__aligned__(x)))
#define __section(x) __attribute__((__section__(x)))


#define __alloc_size(x) __attribute__((__alloc_size__(x)))
#define __alloc_size2(n,x) __attribute__((__alloc_size__(n, x)))





#define __alloc_align(x) __attribute__((__alloc_align__(x)))
# 280 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Alignas(x) __aligned(x)






#define _Alignof(x) __alignof(x)
# 296 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Atomic(T) struct { T volatile __val; }





#define _Noreturn __dead2
# 331 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Thread_local __thread
# 351 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __generic(expr,t,yes,no) __builtin_choose_expr( __builtin_types_compatible_p(__typeof(expr), t), yes, no)
# 366 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __min_size(x) static (x)





#define __malloc_like __attribute__((__malloc__))
#define __pure __attribute__((__pure__))






#define __always_inline __inline__ __attribute__((__always_inline__))





#define __noinline __attribute__ ((__noinline__))





#define __nonnull(x) __attribute__((__nonnull__ x))
#define __nonnull_all __attribute__((__nonnull__))






#define __fastcall __attribute__((__fastcall__))
#define __result_use_check __attribute__((__warn_unused_result__))






#define __returns_twice __attribute__((__returns_twice__))





#define __unreachable() __builtin_unreachable()
# 434 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __restrict restrict
# 467 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __predict_true(exp) __builtin_expect((exp), 1)
#define __predict_false(exp) __builtin_expect((exp), 0)






#define __null_sentinel __attribute__((__sentinel__))
#define __exported __attribute__((__visibility__("default")))


#define __hidden __attribute__((__visibility__("hidden")))
# 489 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __offsetof(type,field) offsetof(type, field)
#define __rangeof(type,start,end) (__offsetof(type, end) - __offsetof(type, start))
# 500 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __containerof(x,s,m) ({ const volatile __typeof(((s *)0)->m) *__x = (x); __DEQUALIFY(s *, (const volatile char *)__x - __offsetof(s, m));})
# 522 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))

#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))

#define __format_arg(fmtarg) __attribute__((__format_arg__ (fmtarg)))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))

#define __strftimelike(fmtarg,firstvararg) __attribute__((__format__ (__strftime__, fmtarg, firstvararg)))
# 539 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __printf0like(fmtarg,firstvararg) 




#define __strong_reference(sym,aliassym) extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))




#define __weak_reference(sym,alias) __asm__(".weak " #alias); __asm__(".equ " #alias ", " #sym)


#define __warn_references(sym,msg) __asm__(".section .gnu.warning." #sym); __asm__(".asciz \"" msg "\""); __asm__(".previous")



#define __sym_compat(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@" #verid)

#define __sym_default(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@@" #verid)
# 593 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __FBSDID(s) struct __hack



#define __RCSID(s) struct __hack



#define __RCSID_SOURCE(s) struct __hack



#define __SCCSID(s) struct __hack



#define __COPYRIGHT(s) struct __hack



#define __DECONST(type,var) ((type)(__uintptr_t)(const void *)(var))



#define __DEVOLATILE(type,var) ((type)(__uintptr_t)(volatile void *)(var))



#define __DEQUALIFY(type,var) ((type)(__uintptr_t)(const volatile void *)(var))






#define _Nonnull 
#define _Nullable 
#define _Null_unspecified 
#define __NULLABILITY_PRAGMA_PUSH 
#define __NULLABILITY_PRAGMA_POP 
# 653 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __arg_type_tag(arg_kind,arg_idx,type_tag_idx) 
#define __datatype_type_tag(kind,type) 
# 672 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __lock_annotate(x) 





#define __lockable __lock_annotate(lockable)


#define __locks_exclusive(...) __lock_annotate(exclusive_lock_function(__VA_ARGS__))

#define __locks_shared(...) __lock_annotate(shared_lock_function(__VA_ARGS__))



#define __trylocks_exclusive(...) __lock_annotate(exclusive_trylock_function(__VA_ARGS__))

#define __trylocks_shared(...) __lock_annotate(shared_trylock_function(__VA_ARGS__))



#define __unlocks(...) __lock_annotate(unlock_function(__VA_ARGS__))


#define __asserts_exclusive(...) __lock_annotate(assert_exclusive_lock(__VA_ARGS__))

#define __asserts_shared(...) __lock_annotate(assert_shared_lock(__VA_ARGS__))



#define __requires_exclusive(...) __lock_annotate(exclusive_locks_required(__VA_ARGS__))

#define __requires_shared(...) __lock_annotate(shared_locks_required(__VA_ARGS__))

#define __requires_unlocked(...) __lock_annotate(locks_excluded(__VA_ARGS__))



#define __no_lock_analysis __lock_annotate(no_thread_safety_analysis)


#define __guarded_by(x) __lock_annotate(guarded_by(x))
#define __pt_guarded_by(x) __lock_annotate(pt_guarded_by(x))
# 12 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 1 3
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _SYS_REENT_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 1 3
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#define _SYS__TYPES_H 

#define __need_size_t 
#define __need_wint_t 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t




#define _WINT_T 





# 350 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef unsigned int wint_t;

#undef __need_wint_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 25 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_types.h" 1 3





#define _MACHINE__TYPES_H 
# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 127 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#undef __size_t



typedef unsigned int __size_t;
# 146 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#define unsigned signed
typedef signed int _ssize_t;
#undef unsigned
# 158 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;



#define _CLOCK_T_ unsigned long


typedef unsigned long __clock_t;




#define _TIME_T_ __int_least64_t

typedef __int_least64_t __time_t;


#define _CLOCKID_T_ unsigned long


typedef unsigned long __clockid_t;

#define _TIMER_T_ unsigned long
typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3

#define _NULL 0



#define __Long long
typedef unsigned long __ULong;
# 34 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/lock.h" 1 3

#define __SYS_LOCK_H__ 
# 33 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;
#define _LOCK_RECURSIVE_T _LOCK_T

#define __LOCK_INIT(class,lock) extern struct __lock __lock_ ## lock; class _LOCK_T lock = &__lock_ ## lock

#define __LOCK_INIT_RECURSIVE(class,lock) __LOCK_INIT(class,lock)

extern void __retarget_lock_init(_LOCK_T *lock);
#define __lock_init(lock) __retarget_lock_init(&lock)
extern void __retarget_lock_init_recursive(_LOCK_T *lock);
#define __lock_init_recursive(lock) __retarget_lock_init_recursive(&lock)
extern void __retarget_lock_close(_LOCK_T lock);
#define __lock_close(lock) __retarget_lock_close(lock)
extern void __retarget_lock_close_recursive(_LOCK_T lock);
#define __lock_close_recursive(lock) __retarget_lock_close_recursive(lock)
extern void __retarget_lock_acquire(_LOCK_T lock);
#define __lock_acquire(lock) __retarget_lock_acquire(lock)
extern void __retarget_lock_acquire_recursive(_LOCK_T lock);
#define __lock_acquire_recursive(lock) __retarget_lock_acquire_recursive(lock)
extern int __retarget_lock_try_acquire(_LOCK_T lock);
#define __lock_try_acquire(lock) __retarget_lock_try_acquire(lock)
extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);
#define __lock_try_acquire_recursive(lock) __retarget_lock_try_acquire_recursive(lock)

extern void __retarget_lock_release(_LOCK_T lock);
#define __lock_release(lock) __retarget_lock_release(lock)
extern void __retarget_lock_release_recursive(_LOCK_T lock);
#define __lock_release_recursive(lock) __retarget_lock_release_recursive(lock)
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};





#define _ATEXIT_SIZE 32

struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
#define _ATEXIT_INIT {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}





#define _REENT_INIT_ATEXIT _NULL, _ATEXIT_INIT,
# 122 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 183 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_SMALL_CHECK_INIT(ptr) 


struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 317 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _RAND48_SEED_0 (0x330e)
#define _RAND48_SEED_1 (0xabcd)
#define _RAND48_SEED_2 (0x1234)
#define _RAND48_MULT_0 (0xe66d)
#define _RAND48_MULT_1 (0xdeec)
#define _RAND48_MULT_2 (0x0005)
#define _RAND48_ADD (0x000b)
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};


#define _REENT_EMERGENCY_SIZE 25
#define _REENT_ASCTIME_SIZE 26
#define _REENT_SIGNAL_SIZE 24
# 613 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {
#define _N_LISTS 30
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};





#define _REENT_STDIO_STREAM(var,index) &(var)->__sf[index]


#define _REENT_INIT(var) { 0, _REENT_STDIO_STREAM(&(var), 0), _REENT_STDIO_STREAM(&(var), 1), _REENT_STDIO_STREAM(&(var), 2), 0, "", 0, _NULL, 0, _NULL, _NULL, 0, _NULL, _NULL, 0, _NULL, { { 0, _NULL, "", {0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 1, { {_RAND48_SEED_0, _RAND48_SEED_1, _RAND48_SEED_2}, {_RAND48_MULT_0, _RAND48_MULT_1, _RAND48_MULT_2}, _RAND48_ADD }, {0, {0}}, {0, {0}}, {0, {0}}, "", "", 0, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}} } }, _REENT_INIT_ATEXIT _NULL, {_NULL, 0, _NULL} }
# 751 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_INIT_PTR_ZEROED(var) { (var)->_stdin = _REENT_STDIO_STREAM(var, 0); (var)->_stdout = _REENT_STDIO_STREAM(var, 1); (var)->_stderr = _REENT_STDIO_STREAM(var, 2); (var)->_new._reent._rand_next = 1; (var)->_new._reent._r48._seed[0] = _RAND48_SEED_0; (var)->_new._reent._r48._seed[1] = _RAND48_SEED_1; (var)->_new._reent._r48._seed[2] = _RAND48_SEED_2; (var)->_new._reent._r48._mult[0] = _RAND48_MULT_0; (var)->_new._reent._r48._mult[1] = _RAND48_MULT_1; (var)->_new._reent._r48._mult[2] = _RAND48_MULT_2; (var)->_new._reent._r48._add = _RAND48_ADD; }
# 765 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_CHECK_RAND48(ptr) 
#define _REENT_CHECK_MP(ptr) 
#define _REENT_CHECK_TM(ptr) 
#define _REENT_CHECK_ASCTIME_BUF(ptr) 
#define _REENT_CHECK_EMERGENCY(ptr) 
#define _REENT_CHECK_MISC(ptr) 
#define _REENT_CHECK_SIGNAL_BUF(ptr) 

#define _REENT_SIGNGAM(ptr) ((ptr)->_new._reent._gamma_signgam)
#define _REENT_RAND_NEXT(ptr) ((ptr)->_new._reent._rand_next)
#define _REENT_RAND48_SEED(ptr) ((ptr)->_new._reent._r48._seed)
#define _REENT_RAND48_MULT(ptr) ((ptr)->_new._reent._r48._mult)
#define _REENT_RAND48_ADD(ptr) ((ptr)->_new._reent._r48._add)
#define _REENT_MP_RESULT(ptr) ((ptr)->_result)
#define _REENT_MP_RESULT_K(ptr) ((ptr)->_result_k)
#define _REENT_MP_P5S(ptr) ((ptr)->_p5s)
#define _REENT_MP_FREELIST(ptr) ((ptr)->_freelist)
#define _REENT_ASCTIME_BUF(ptr) ((ptr)->_new._reent._asctime_buf)
#define _REENT_TM(ptr) (&(ptr)->_new._reent._localtime_buf)
#define _REENT_EMERGENCY(ptr) ((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr) ((ptr)->_new._reent._strtok_last)
#define _REENT_MBLEN_STATE(ptr) ((ptr)->_new._reent._mblen_state)
#define _REENT_MBTOWC_STATE(ptr) ((ptr)->_new._reent._mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr) ((ptr)->_new._reent._wctomb_state)
#define _REENT_MBRLEN_STATE(ptr) ((ptr)->_new._reent._mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr) ((ptr)->_new._reent._mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_new._reent._mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr) ((ptr)->_new._reent._wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_new._reent._wcsrtombs_state)
#define _REENT_L64A_BUF(ptr) ((ptr)->_new._reent._l64a_buf)
#define _REENT_SIGNAL_BUF(ptr) ((ptr)->_new._reent._signal_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._getdate_err))



#define _REENT_INIT_PTR(var) { memset((var), 0, sizeof(*(var))); _REENT_INIT_PTR_ZEROED(var); }







#define _Kmax (sizeof (size_t) << 3)







#define __ATTRIBUTE_IMPURE_PTR__ 


extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 832 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT _impure_ptr


#define _GLOBAL_REENT _global_impure_ptr





#define _GLOBAL_ATEXIT (_GLOBAL_REENT->_atexit)
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3

#define __need_size_t 
#define __need_NULL 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 17 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/time.h" 1 3

#define _MACHTIME_H_ 




#define _CLOCKS_PER_SEC_ 100
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3





#define CLOCKS_PER_SEC _CLOCKS_PER_SEC_
#define CLK_TCK CLOCKS_PER_SEC

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 1 3
# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef __intptr_t register_t;
#define __BIT_TYPES_DEFINED__ 1



#define _SYS_TYPES_H 
# 97 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;
#define _BLKCNT_T_DECLARED 



typedef __blksize_t blksize_t;
#define _BLKSIZE_T_DECLARED 



typedef unsigned long clock_t;
#define __clock_t_defined 
#define _CLOCK_T_DECLARED 



typedef __int_least64_t time_t;
#define __time_t_defined 
#define _TIME_T_DECLARED 



typedef long daddr_t;
#define __daddr_t_defined 


typedef char * caddr_t;
#define __caddr_t_defined 



typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
#define _FSBLKCNT_T_DECLARED 



typedef __id_t id_t;
#define _ID_T_DECLARED 



typedef __ino_t ino_t;
#define _INO_T_DECLARED 
# 157 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __off_t off_t;
#define _OFF_T_DECLARED 


typedef __dev_t dev_t;
#define _DEV_T_DECLARED 


typedef __uid_t uid_t;
#define _UID_T_DECLARED 


typedef __gid_t gid_t;
#define _GID_T_DECLARED 



typedef __pid_t pid_t;
#define _PID_T_DECLARED 



typedef __key_t key_t;
#define _KEY_T_DECLARED 



typedef _ssize_t ssize_t;
#define _SSIZE_T_DECLARED 



typedef __mode_t mode_t;
#define _MODE_T_DECLARED 



typedef __nlink_t nlink_t;
#define _NLINK_T_DECLARED 



typedef __clockid_t clockid_t;
#define __clockid_t_defined 
#define _CLOCKID_T_DECLARED 



typedef __timer_t timer_t;
#define __timer_t_defined 
#define _TIMER_T_DECLARED 



typedef __useconds_t useconds_t;
#define _USECONDS_T_DECLARED 



typedef __suseconds_t suseconds_t;
#define _SUSECONDS_T_DECLARED 


typedef __int64_t sbintime_t;


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_pthreadtypes.h" 1 3
# 19 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_pthreadtypes.h" 3
#define _SYS__PTHREADTYPES_H_ 
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/types.h" 1 3
# 225 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 2 3



#undef __need_inttypes
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 1 3
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 3
#define _SYS_TIMESPEC_H_ 


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 1 3
# 37 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 3
#define _SYS__TIMESPEC_H_ 
# 47 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 3
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 39 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 2 3
# 58 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 3
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 30 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3







struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;






};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char *asctime (const struct tm *_tblock);
char *ctime (const time_t *_time);
struct tm *gmtime (const time_t *_timer);
struct tm *localtime (const time_t *_timer);

size_t strftime (char *restrict _s,
        size_t _maxsize, const char *restrict _fmt,
        const struct tm *restrict _t);







char *asctime_r (const struct tm *restrict,
     char *restrict);
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *restrict,
     struct tm *restrict);
struct tm *localtime_r (const time_t *restrict,
     struct tm *restrict);


# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 3
void _tzset_r (struct _reent *);

typedef struct __tzrule_struct
{
  char ch;
  int m;
  int n;
  int d;
  int s;
  time_t change;
  long offset;
} __tzrule_type;

typedef struct __tzinfo_struct
{
  int __tznorth;
  int __tzyear;
  __tzrule_type __tzrule[2];
} __tzinfo_type;

__tzinfo_type *__gettzinfo (void);
# 240 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 3
#define CLOCK_ENABLED 1
#define CLOCK_DISABLED 0



#define CLOCK_ALLOWED 1


#define CLOCK_DISALLOWED 0






#define TIMER_ABSTIME 4







#define CLOCK_REALTIME ((clockid_t) 1)
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h" 2




#define TM_DAYS_IN_LEAP_YEAR ( ( uint32_t ) 366U )
#define TM_DAYS_IN_YEAR ( ( uint32_t ) 365U )
#define TM_SECONDS_IN_1DAY ( ( uint32_t )86400U )
#define TM_SECONDS_IN_1HOUR ( ( uint32_t ) 3600U )
#define TM_SECONDS_IN_1MINUTE ( ( uint32_t ) 60U )
#define TM_MINUTES_IN_1HOUR ( ( uint32_t ) 60U )
#define TM_HOURS_IN_1DAY ( ( uint32_t ) 24U )





#define TM_MONTH_JANUARY ( ( uint8_t ) 0U )
#define TM_MONTH_FEBRUARY ( ( uint8_t ) 1U )
#define TM_MONTH_MARCH ( ( uint8_t ) 2U )
#define TM_MONTH_APRIL ( ( uint8_t ) 3U )
#define TM_MONTH_MAY ( ( uint8_t ) 4U )
#define TM_MONTH_JUNE ( ( uint8_t ) 5U )
#define TM_MONTH_JULY ( ( uint8_t ) 6U )
#define TM_MONTH_AUGUST ( ( uint8_t ) 7U )
#define TM_MONTH_SEPTEMBER ( ( uint8_t ) 8U )
#define TM_MONTH_OCTOBER ( ( uint8_t ) 9U )
#define TM_MONTH_NOVEMBER ( ( uint8_t )10U )
#define TM_MONTH_DECEMBER ( ( uint8_t )11U )




#define TM_WEEKDAY_SUNDAY ( ( uint8_t )0U )
#define TM_WEEKDAY_MONDAY ( ( uint8_t )1U )
#define TM_WEEKDAY_TUESDAY ( ( uint8_t )2U )
#define TM_WEEKDAY_WEDNESDAY ( ( uint8_t )3U )
#define TM_WEEKDAY_THURSDAY ( ( uint8_t )4U )
#define TM_WEEKDAY_FRIDAY ( ( uint8_t )5U )
#define TM_WEEKDAY_SATURDAY ( ( uint8_t )6U )




#define UNIX_GPS_EPOCH_OFFSET 315964800





# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
typedef struct SysTime_s
{
    uint32_t Seconds;
    int16_t SubSeconds;
}SysTime_t;
# 97 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
SysTime_t SysTimeAdd( SysTime_t a, SysTime_t b );
# 107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
SysTime_t SysTimeSub( SysTime_t a, SysTime_t b );






void SysTimeSet( SysTime_t sysTime );






SysTime_t SysTimeGet( void );






SysTime_t SysTimeGetMcuTime( void );
# 137 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
uint32_t SysTimeToMs( SysTime_t sysTime );
# 146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
SysTime_t SysTimeFromMs( uint32_t timeMs );







uint32_t SysTimeMkTime( const struct tm* localtime );
# 163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
void SysTimeLocalTime( const uint32_t timestamp, struct tm *localtime );
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 1
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define __LORAMAC_TYPES_H__ 
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define LORAMAC_CRYPTO_UNICAST_KEYS 0




#define LORAMAC_CRYPTO_MULTICAST_KEYS 127




#define LORAMAC_MAX_MC_CTX 4
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_0 0
# 93 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_1 1
# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_2 2
# 125 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_3 3
# 141 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_4 4
# 157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_5 5
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_6 6
# 189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_7 7
# 205 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_8 8
# 221 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_9 9
# 237 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_10 10
# 253 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_11 11
# 269 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_12 12
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_13 13
# 301 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_14 14
# 317 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_15 15
# 335 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_0 0
# 351 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_1 1
# 367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_2 2
# 383 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_3 3
# 399 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_4 4
# 415 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_5 5
# 431 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_6 6
# 447 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_7 7
# 463 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_8 8
# 479 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_9 9
# 495 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_10 10
# 511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_11 11
# 527 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_12 12
# 543 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_13 13
# 559 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_14 14




#define TX_POWER_15 15






typedef enum DeviceClass_e
{





    CLASS_A = 0x00,





    CLASS_B = 0x01,





    CLASS_C = 0x02,
}DeviceClass_t;







typedef enum eFType
{





    FRAME_TYPE_A,





    FRAME_TYPE_B,





    FRAME_TYPE_C,





    FRAME_TYPE_D,
}FType_t;




typedef enum eFCntIdentifier
{



    FCNT_UP = 0,




    N_FCNT_DOWN,




    A_FCNT_DOWN,




    FCNT_DOWN,



    MC_FCNT_DOWN_0,



    MC_FCNT_DOWN_1,



    MC_FCNT_DOWN_2,



    MC_FCNT_DOWN_3,
}FCntIdentifier_t;




typedef enum eKeyIdentifier
{



    APP_KEY = 0,



    NWK_KEY,



    J_S_INT_KEY,



    J_S_ENC_KEY,



    F_NWK_S_INT_KEY,



    S_NWK_S_INT_KEY,



    NWK_S_ENC_KEY,



    APP_S_KEY,



    MC_ROOT_KEY,



    MC_KE_KEY = 127,



    MC_KEY_0,



    MC_APP_S_KEY_0,



    MC_NWK_S_KEY_0,



    MC_KEY_1,



    MC_APP_S_KEY_1,



    MC_NWK_S_KEY_1,



    MC_KEY_2,



    MC_APP_S_KEY_2,



    MC_NWK_S_KEY_2,



    MC_KEY_3,



    MC_APP_S_KEY_3,



    MC_NWK_S_KEY_3,



    SLOT_RAND_ZERO_KEY,



    NO_KEY,
}KeyIdentifier_t;




typedef enum eAddressIdentifier
{



    MULTICAST_0_ADDR = 0,



    MULTICAST_1_ADDR = 1,



    MULTICAST_2_ADDR = 2,



    MULTICAST_3_ADDR = 3,



    UNICAST_DEV_ADDR = 4,
}AddressIdentifier_t;




typedef union uMcRxParams
{
    struct
    {



        uint32_t Frequency;



        int8_t Datarate;




        uint16_t Periodicity;
    }ClassB;
    struct
    {



        uint32_t Frequency;



        int8_t Datarate;
    }ClassC;
}McRxParams_t;




typedef struct sMcChannelParams
{




    
# 842 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 842 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
        IsRemotelySetup;



    DeviceClass_t Class;



    
# 850 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 850 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
        IsEnabled;



    AddressIdentifier_t GroupID;



    uint32_t Address;



    union uMcKeys
    {




        uint8_t *McKeyE;



        struct
        {



            uint8_t *McAppSKey;



            uint8_t *McNwkSKey;
        }Session;
    }McKeys;



    uint32_t FCountMin;



    uint32_t FCountMax;



    McRxParams_t RxParams;
}McChannelParams_t;




typedef struct sMulticastCtx
{



    McChannelParams_t ChannelParams;



    uint32_t* DownLinkCounter;
# 920 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
    uint8_t PingNb;





    uint16_t PingPeriod;



    uint16_t PingOffset;
}MulticastCtx_t;




typedef enum eJoinReqIdentifier
{



    REJOIN_REQ_0 = 0x00,



    REJOIN_REQ_1 = 0x01,



    REJOIN_REQ_2 = 0x02,



    JOIN_REQ = 0xFF,
}JoinReqIdentifier_t;






typedef enum eLoRaMacMoteCmd
{



    MOTE_MAC_LINK_CHECK_REQ = 0x02,



    MOTE_MAC_LINK_ADR_ANS = 0x03,



    MOTE_MAC_DUTY_CYCLE_ANS = 0x04,



    MOTE_MAC_RX_PARAM_SETUP_ANS = 0x05,



    MOTE_MAC_DEV_STATUS_ANS = 0x06,



    MOTE_MAC_NEW_CHANNEL_ANS = 0x07,



    MOTE_MAC_RX_TIMING_SETUP_ANS = 0x08,



    MOTE_MAC_TX_PARAM_SETUP_ANS = 0x09,



    MOTE_MAC_DL_CHANNEL_ANS = 0x0A,



    MOTE_MAC_DEVICE_TIME_REQ = 0x0D,



    MOTE_MAC_PING_SLOT_INFO_REQ = 0x10,



    MOTE_MAC_PING_SLOT_FREQ_ANS = 0x11,



    MOTE_MAC_BEACON_TIMING_REQ = 0x12,



    MOTE_MAC_BEACON_FREQ_ANS = 0x13,
}LoRaMacMoteCmd_t;






typedef enum eLoRaMacSrvCmd
{



    SRV_MAC_RESET_CONF = 0x01,



    SRV_MAC_LINK_CHECK_ANS = 0x02,



    SRV_MAC_LINK_ADR_REQ = 0x03,



    SRV_MAC_DUTY_CYCLE_REQ = 0x04,



    SRV_MAC_RX_PARAM_SETUP_REQ = 0x05,



    SRV_MAC_DEV_STATUS_REQ = 0x06,



    SRV_MAC_NEW_CHANNEL_REQ = 0x07,



    SRV_MAC_RX_TIMING_SETUP_REQ = 0x08,



    SRV_MAC_TX_PARAM_SETUP_REQ = 0x09,



    SRV_MAC_DL_CHANNEL_REQ = 0x0A,



    SRV_MAC_DEVICE_TIME_ANS = 0x0D,



    SRV_MAC_PING_SLOT_INFO_ANS = 0x10,



    SRV_MAC_PING_SLOT_CHANNEL_REQ = 0x11,



    SRV_MAC_BEACON_TIMING_ANS = 0x12,



    SRV_MAC_BEACON_FREQ_REQ = 0x13,
}LoRaMacSrvCmd_t;




typedef struct sBand
{



    uint16_t DCycle;



    int8_t TxMaxPower;




    TimerTime_t LastBandUpdateTime;




    TimerTime_t LastMaxCreditAssignTime;




    TimerTime_t TimeCredits;




    TimerTime_t MaxTimeCredits;



    
# 1126 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 1126 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
        ReadyForTransmission;
}Band_t;




typedef union uDrRange
{



    int8_t Value;



    struct sFields
    {







        int8_t Min : 4;







        int8_t Max : 4;
    }Fields;
}DrRange_t;




typedef struct sChannelParams
{



    uint32_t Frequency;



    uint32_t Rx1Frequency;



    DrRange_t DrRange;



    uint8_t Band;
}ChannelParams_t;






typedef enum eLoRaMacFrameType
{



    FRAME_TYPE_JOIN_REQ = 0x00,



    FRAME_TYPE_JOIN_ACCEPT = 0x01,



    FRAME_TYPE_DATA_UNCONFIRMED_UP = 0x02,



    FRAME_TYPE_DATA_UNCONFIRMED_DOWN = 0x03,



    FRAME_TYPE_DATA_CONFIRMED_UP = 0x04,



    FRAME_TYPE_DATA_CONFIRMED_DOWN = 0x05,



    FRAME_TYPE_PROPRIETARY = 0x07,
}LoRaMacFrameType_t;




typedef enum eLoRaMacBatteryLevel
{



    BAT_LEVEL_EXT_SRC = 0x00,



    BAT_LEVEL_EMPTY = 0x01,



    BAT_LEVEL_FULL = 0xFE,



    BAT_LEVEL_NO_MEASURE = 0xFF,
}LoRaMacBatteryLevel_t;
# 80 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h"
#define __REGIONNVM_H__ 






# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 1
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h" 2



#define REGION_NVM_MAX_NB_CHANNELS 96
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h"
#define REGION_NVM_MAX_NB_BANDS 6
# 68 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h"
#define REGION_NVM_CHANNELS_MASK_SIZE 6
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h"
typedef struct sRegionNvmDataGroup1
{



    Band_t Bands[ 6 ];




    uint16_t ChannelsMaskRemaining[ 6 ];




    uint8_t JoinChannelGroupsCurrentIndex;



    uint8_t JoinTrialsCounter;




    uint32_t Crc32;
}RegionNvmDataGroup1_t;





typedef struct sRegionNvmDataGroup2
{



    ChannelParams_t Channels[ 96 ];



    uint16_t ChannelsMask[ 6 ];



    uint16_t ChannelsDefaultMask[ 6 ];



    uint32_t Crc32;
}RegionNvmDataGroup2_t;
# 82 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCryptoNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCryptoNvm.h"
#define __LORAMAC_CRYPTO_NVM_H__ 
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCryptoNvm.h"
typedef struct sFCntList
{



    uint32_t FCntUp;




    uint32_t NFCntDown;




    uint32_t AFCntDown;




    uint32_t FCntDown;



    uint32_t McFCntDown[4];






}FCntList_t;




typedef struct sLoRaMacCryptoNvmData
{




    Version_t LrWanVersion;




    uint16_t DevNonce;




    uint32_t JoinNonce;



    FCntList_t FCntList;





    uint32_t LastDownFCnt;



    uint32_t Crc32;
}LoRaMacCryptoNvmData_t;
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element-nvm.h" 1
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element-nvm.h"
#define __SECURE_ELEMENT_NVM_H__ 
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element-nvm.h"
#define SE_KEY_SIZE 16




#define SE_EUI_SIZE 8




#define SE_PIN_SIZE 4





#define NUM_OF_KEYS 23




typedef struct sKey
{



    KeyIdentifier_t KeyID;



    uint8_t KeyValue[16];
} Key_t;


typedef struct sSecureElementNvCtx
{



    uint8_t DevEui[8];



    uint8_t JoinEui[8];



    uint8_t Pin[4];





    Key_t KeyList[23];




    uint32_t Crc32;
} SecureElementNvmData_t;
# 84 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassBNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassBNvm.h"
#define __LORAMACCLASSBNVM_H__ 
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassBNvm.h"
typedef struct sLoRaMacClassBPingSlotNvmData
{
    struct sPingSlotCtrlNvm
    {



        uint8_t Assigned : 1;



        uint8_t CustomFreq : 1;
    }Ctrl;



    uint8_t PingNb;



    uint16_t PingPeriod;



    uint32_t Frequency;



    int8_t Datarate;
} LoRaMacClassBPingSlotNvmData_t;





typedef struct sLoRaMacClassBBeaconNvmData
{
    struct sBeaconCtrlNvm
    {



        uint8_t CustomFreq : 1;
    }Ctrl;



    uint32_t Frequency;
} LoRaMacClassBBeaconNvmData_t;




typedef struct sLoRaMacClassBNvmData
{



    LoRaMacClassBPingSlotNvmData_t PingSlotCtx;



    LoRaMacClassBBeaconNvmData_t BeaconCtx;



    uint32_t Crc32;
} LoRaMacClassBNvmData_t;
# 85 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2




#define MAX_ACK_RETRIES 8




#define UP_LINK 0




#define DOWN_LINK 1




#define LORA_MAC_MLME_CONFIRM_QUEUE_LEN 5




#define LORAMAC_CRYPTO_MULTICAST_KEYS 127




#define LORA_MAC_COMMAND_MAX_LENGTH 128





#define LORAMAC_NVM_NOTIFY_FLAG_NONE 0x00




#define LORAMAC_NVM_NOTIFY_FLAG_CRYPTO 0x01




#define LORAMAC_NVM_NOTIFY_FLAG_MAC_GROUP1 0x02




#define LORAMAC_NVM_NOTIFY_FLAG_MAC_GROUP2 0x04




#define LORAMAC_NVM_NOTIFY_FLAG_SECURE_ELEMENT 0x08




#define LORAMAC_NVM_NOTIFY_FLAG_REGION_GROUP1 0x10




#define LORAMAC_NVM_NOTIFY_FLAG_REGION_GROUP2 0x20




#define LORAMAC_NVM_NOTIFY_FLAG_CLASS_B 0x40




typedef enum eActivationType
{



    ACTIVATION_TYPE_NONE = 0,



    ACTIVATION_TYPE_ABP = 1,



    ACTIVATION_TYPE_OTAA = 2,
}ActivationType_t;




typedef struct sRxChannelParams
{



    uint32_t Frequency;







    uint8_t Datarate;
}RxChannelParams_t;




typedef enum eLoRaMacRxSlot
{



    RX_SLOT_WIN_1,



    RX_SLOT_WIN_2,



    RX_SLOT_WIN_CLASS_C,



    RX_SLOT_WIN_CLASS_C_MULTICAST,



    RX_SLOT_WIN_CLASS_B_PING_SLOT,



    RX_SLOT_WIN_CLASS_B_MULTICAST_SLOT,



    RX_SLOT_NONE,
}LoRaMacRxSlot_t;




typedef struct sLoRaMacParams
{





    uint32_t SystemMaxRxError;




    uint8_t MinRxSymbols;



    uint32_t MaxRxWindow;



    uint32_t ReceiveDelay1;



    uint32_t ReceiveDelay2;



    uint32_t JoinAcceptDelay1;



    uint32_t JoinAcceptDelay2;



    uint8_t ChannelsNbTrans;



    uint8_t Rx1DrOffset;



    RxChannelParams_t Rx2Channel;



    RxChannelParams_t RxCChannel;



    uint8_t UplinkDwellTime;



    uint8_t DownlinkDwellTime;



    float MaxEirp;



    float AntennaGain;
}LoRaMacParams_t;






typedef union uPingSlotInfo
{



    uint8_t Value;



    struct sInfoFields
    {




        uint8_t Periodicity : 3;



        uint8_t RFU : 5;
    }Fields;
}PingSlotInfo_t;






typedef struct sBeaconInfo
{




    SysTime_t Time;



    uint32_t Frequency;



    uint8_t Datarate;



    int16_t Rssi;



    int8_t Snr;




    struct sGwSpecific
    {



        uint8_t InfoDesc;



        uint8_t Info[6];
    }GwSpecific;
}BeaconInfo_t;




typedef enum eLoRaMacEventInfoStatus
{



    LORAMAC_EVENT_INFO_STATUS_OK = 0,



    LORAMAC_EVENT_INFO_STATUS_ERROR,



    LORAMAC_EVENT_INFO_STATUS_TX_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX1_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX2_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX1_ERROR,



    LORAMAC_EVENT_INFO_STATUS_RX2_ERROR,



    LORAMAC_EVENT_INFO_STATUS_JOIN_FAIL,





    LORAMAC_EVENT_INFO_STATUS_DOWNLINK_REPEATED,




    LORAMAC_EVENT_INFO_STATUS_TX_DR_PAYLOAD_SIZE_ERROR,



    LORAMAC_EVENT_INFO_STATUS_DOWNLINK_TOO_MANY_FRAMES_LOSS,



    LORAMAC_EVENT_INFO_STATUS_ADDRESS_FAIL,



    LORAMAC_EVENT_INFO_STATUS_MIC_FAIL,



    LORAMAC_EVENT_INFO_STATUS_MULTICAST_FAIL,



    LORAMAC_EVENT_INFO_STATUS_BEACON_LOCKED,



    LORAMAC_EVENT_INFO_STATUS_BEACON_LOST,



    LORAMAC_EVENT_INFO_STATUS_BEACON_NOT_FOUND,
}LoRaMacEventInfoStatus_t;




typedef union eLoRaMacFlags_t
{



    uint8_t Value;



    struct sMacFlagBits
    {



        uint8_t McpsReq : 1;



        uint8_t McpsInd : 1;



        uint8_t MlmeReq : 1;



        uint8_t MlmeInd : 1;



        uint8_t MlmeSchedUplinkInd : 1;



        uint8_t MacDone : 1;
    }Bits;
}LoRaMacFlags_t;




typedef enum eLoRaMacRegion
{



    LORAMAC_REGION_AS923,



    LORAMAC_REGION_AU915,



    LORAMAC_REGION_CN470,



    LORAMAC_REGION_CN779,



    LORAMAC_REGION_EU433,



    LORAMAC_REGION_EU868,



    LORAMAC_REGION_KR920,



    LORAMAC_REGION_IN865,



    LORAMAC_REGION_US915,



    LORAMAC_REGION_RU864,
    LORAMAC_REGION_LA915,
}LoRaMacRegion_t;

typedef struct sLoRaMacNvmDataGroup1
{



    uint32_t AdrAckCounter;



    TimerTime_t LastTxDoneTime;



    TimerTime_t AggregatedTimeOff;



    uint32_t LastRxMic;



    int8_t ChannelsTxPower;



    int8_t ChannelsDatarate;




    
# 570 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 570 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        SrvAckRequested;



    uint32_t Crc32;
}LoRaMacNvmDataGroup1_t;

typedef struct sLoRaMacNvmDataGroup2
{



    LoRaMacRegion_t Region;



    LoRaMacParams_t MacParams;



    LoRaMacParams_t MacParamsDefaults;



    int8_t ChannelsTxPowerDefault;



    int8_t ChannelsDatarateDefault;



    uint32_t NetID;



    uint32_t DevAddr;



    MulticastCtx_t MulticastChannelList[4];



    DeviceClass_t DeviceClass;




    
# 619 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 619 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        PublicNetwork;



    
# 623 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 623 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        AdrCtrlOn;




    uint8_t MaxDCycle;



    
# 632 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 632 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        DutyCycleOn;



    uint16_t AggregatedDCycle;





    SysTime_t InitializationTime;



    Version_t Version;



    ActivationType_t NetworkActivation;



    uint32_t Crc32;
}LoRaMacNvmDataGroup2_t;





typedef struct sLoRaMacNvmData
{




    LoRaMacCryptoNvmData_t Crypto;




    LoRaMacNvmDataGroup1_t MacGroup1;




    LoRaMacNvmDataGroup2_t MacGroup2;



    SecureElementNvmData_t SecureElement;




    RegionNvmDataGroup1_t RegionGroup1;




    RegionNvmDataGroup2_t RegionGroup2;



    LoRaMacClassBNvmData_t ClassB;
}LoRaMacNvmData_t;
# 721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
typedef enum eMcps
{



    MCPS_UNCONFIRMED,



    MCPS_CONFIRMED,



    MCPS_MULTICAST,



    MCPS_PROPRIETARY,
}Mcps_t;




typedef struct sRequestReturnParam
{





    TimerTime_t DutyCycleWaitTime;
}RequestReturnParam_t;




typedef struct sMcpsReqUnconfirmed
{






    uint8_t fPort;



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
}McpsReqUnconfirmed_t;




typedef struct sMcpsReqConfirmed
{






    uint8_t fPort;



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
# 824 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    uint8_t NbTrials;
}McpsReqConfirmed_t;




typedef struct sMcpsReqProprietary
{



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
}McpsReqProprietary_t;




typedef struct sMcpsReq
{



    Mcps_t Type;




    union uMcpsParam
    {



        McpsReqUnconfirmed_t Unconfirmed;



        McpsReqConfirmed_t Confirmed;



        McpsReqProprietary_t Proprietary;
    }Req;




    RequestReturnParam_t ReqReturn;
}McpsReq_t;




typedef struct sMcpsConfirm
{



    Mcps_t McpsRequest;



    LoRaMacEventInfoStatus_t Status;



    uint8_t Datarate;



    int8_t TxPower;



    
# 905 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 905 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        AckReceived;



    uint8_t NbRetries;



    TimerTime_t TxTimeOnAir;



    uint32_t UpLinkCounter;



    uint32_t Channel;
}McpsConfirm_t;




typedef struct sMcpsIndication
{



    Mcps_t McpsIndication;



    LoRaMacEventInfoStatus_t Status;



    uint8_t Multicast;



    uint8_t Port;



    uint8_t RxDatarate;



    uint8_t FramePending;



    uint8_t* Buffer;



    uint8_t BufferSize;



    
# 964 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 964 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        RxData;



    int16_t Rssi;



    int8_t Snr;



    LoRaMacRxSlot_t RxSlot;



    
# 980 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 980 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        AckReceived;



    uint32_t DownLinkCounter;



    uint32_t DevAddress;



    
# 992 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 992 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        DeviceTimeAnsReceived;
}McpsIndication_t;
# 1019 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
typedef enum eMlme
{



    MLME_UNKNOWN,





    MLME_JOIN,





    MLME_REJOIN_0,





    MLME_REJOIN_1,





    MLME_LINK_CHECK,





    MLME_TXCW,





    MLME_TXCW_1,




    MLME_SCHEDULE_UPLINK,



    MLME_DERIVE_MC_KE_KEY,



    MLME_DERIVE_MC_KEY_PAIR,





    MLME_DEVICE_TIME,






    MLME_BEACON,






    MLME_BEACON_ACQUISITION,





    MLME_PING_SLOT_INFO,





    MLME_BEACON_TIMING,







    MLME_BEACON_LOST,
}Mlme_t;




typedef struct sMlmeReqJoin
{



    uint8_t Datarate;
}MlmeReqJoin_t;




typedef struct sMlmeReqTxCw
{



    uint16_t Timeout;



    uint32_t Frequency;



    int8_t Power;
}MlmeReqTxCw_t;




typedef struct sMlmeReqPingSlotInfo
{
    PingSlotInfo_t PingSlot;
}MlmeReqPingSlotInfo_t;




typedef struct sMlmeReqDeriveMcKEKey
{



    KeyIdentifier_t KeyID;



    uint16_t Nonce;



    uint8_t* DevEUI;
}MlmeReqDeriveMcKEKey_t;




typedef struct sMlmeReqDeriveMcSessionKeyPair
{



    AddressIdentifier_t GroupID;
}MlmeReqDeriveMcSessionKeyPair_t;




typedef struct sMlmeReq
{



    Mlme_t Type;




    union uMlmeParam
    {



        MlmeReqJoin_t Join;



        MlmeReqTxCw_t TxCw;



        MlmeReqPingSlotInfo_t PingSlotInfo;



        MlmeReqDeriveMcKEKey_t DeriveMcKEKey;



        MlmeReqDeriveMcSessionKeyPair_t DeriveMcSessionKeyPair;
    }Req;




    RequestReturnParam_t ReqReturn;
}MlmeReq_t;




typedef struct sMlmeConfirm
{



    Mlme_t MlmeRequest;



    LoRaMacEventInfoStatus_t Status;



    TimerTime_t TxTimeOnAir;




    uint8_t DemodMargin;



    uint8_t NbGateways;



    uint8_t NbRetries;




    TimerTime_t BeaconTimingDelay;



    uint8_t BeaconTimingChannel;
}MlmeConfirm_t;




typedef struct sMlmeIndication
{



    Mlme_t MlmeIndication;



    LoRaMacEventInfoStatus_t Status;




    BeaconInfo_t BeaconInfo;
}MlmeIndication_t;
# 1370 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
typedef enum eMib
{





    MIB_DEVICE_CLASS,





    MIB_NETWORK_ACTIVATION,





    MIB_DEV_EUI,





    MIB_JOIN_EUI,



    MIB_SE_PIN,







    MIB_ADR,





    MIB_NET_ID,





    MIB_DEV_ADDR,





    MIB_APP_KEY,





    MIB_NWK_KEY,





    MIB_J_S_INT_KEY,





    MIB_J_S_ENC_KEY,





    MIB_F_NWK_S_INT_KEY,





    MIB_S_NWK_S_INT_KEY,





    MIB_NWK_S_ENC_KEY,





    MIB_APP_S_KEY,





    MIB_MC_KE_KEY,





    MIB_MC_KEY_0,





    MIB_MC_APP_S_KEY_0,





    MIB_MC_NWK_S_KEY_0,





    MIB_MC_KEY_1,





    MIB_MC_APP_S_KEY_1,





    MIB_MC_NWK_S_KEY_1,





    MIB_MC_KEY_2,





    MIB_MC_APP_S_KEY_2,





    MIB_MC_NWK_S_KEY_2,





    MIB_MC_KEY_3,





    MIB_MC_APP_S_KEY_3,





    MIB_MC_NWK_S_KEY_3,







    MIB_PUBLIC_NETWORK,







    MIB_CHANNELS,





    MIB_RX2_CHANNEL,





    MIB_RX2_DEFAULT_CHANNEL,





    MIB_RXC_CHANNEL,





    MIB_RXC_DEFAULT_CHANNEL,





    MIB_CHANNELS_MASK,





    MIB_CHANNELS_DEFAULT_MASK,





    MIB_CHANNELS_NB_TRANS,





    MIB_MAX_RX_WINDOW_DURATION,





    MIB_RECEIVE_DELAY_1,





    MIB_RECEIVE_DELAY_2,





    MIB_JOIN_ACCEPT_DELAY_1,





    MIB_JOIN_ACCEPT_DELAY_2,







    MIB_CHANNELS_DEFAULT_DATARATE,







    MIB_CHANNELS_DATARATE,







    MIB_CHANNELS_TX_POWER,







    MIB_CHANNELS_DEFAULT_TX_POWER,





    MIB_SYSTEM_MAX_RX_ERROR,




    MIB_MIN_RX_SYMBOLS,
# 1687 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    MIB_ANTENNA_GAIN,
# 1698 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    MIB_DEFAULT_ANTENNA_GAIN,



    MIB_NVM_CTXS,



    MIB_ABP_LORAWAN_VERSION,



    MIB_LORAWAN_VERSION,



    MIB_BEACON_INTERVAL,



    MIB_BEACON_RESERVED,



    MIB_BEACON_GUARD,



    MIB_BEACON_WINDOW,



    MIB_BEACON_WINDOW_SLOTS,



    MIB_PING_SLOT_WINDOW,



    MIB_BEACON_SYMBOL_TO_DEFAULT,



    MIB_BEACON_SYMBOL_TO_EXPANSION_MAX,



    MIB_PING_SLOT_SYMBOL_TO_EXPANSION_MAX,




    MIB_BEACON_SYMBOL_TO_EXPANSION_FACTOR,




    MIB_PING_SLOT_SYMBOL_TO_EXPANSION_FACTOR,



    MIB_MAX_BEACON_LESS_PERIOD,







     MIB_PING_SLOT_DATARATE,
}Mib_t;




typedef union uMibParam
{





    DeviceClass_t Class;





    ActivationType_t NetworkActivation;





    uint8_t* DevEui;





    uint8_t* JoinEui;





    uint8_t* SePin;





    
# 1811 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 1811 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        AdrEnable;





    uint32_t NetID;





    uint32_t DevAddr;





    uint8_t* AppKey;





    uint8_t* NwkKey;





    uint8_t* JSIntKey;





    uint8_t* JSEncKey;





    uint8_t* FNwkSIntKey;





    uint8_t* SNwkSIntKey;





    uint8_t* NwkSEncKey;





    uint8_t* AppSKey;





    uint8_t* McKEKey;





    uint8_t* McKey0;





    uint8_t* McAppSKey0;





    uint8_t* McNwkSKey0;





    uint8_t* McKey1;





    uint8_t* McAppSKey1;





    uint8_t* McNwkSKey1;





    uint8_t* McKey2;





    uint8_t* McAppSKey2;





    uint8_t* McNwkSKey2;





    uint8_t* McKey3;





    uint8_t* McAppSKey3;





    uint8_t* McNwkSKey3;





    
# 1955 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 1955 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        EnablePublicNetwork;





    ChannelParams_t* ChannelList;





    RxChannelParams_t Rx2Channel;





    RxChannelParams_t Rx2DefaultChannel;





    RxChannelParams_t RxCChannel;





    RxChannelParams_t RxCDefaultChannel;





    uint16_t* ChannelsMask;





    uint16_t* ChannelsDefaultMask;





    uint8_t ChannelsNbTrans;





    uint32_t MaxRxWindow;





    uint32_t ReceiveDelay1;





    uint32_t ReceiveDelay2;





    uint32_t JoinAcceptDelay1;





    uint32_t JoinAcceptDelay2;





    int8_t ChannelsDefaultDatarate;





    int8_t ChannelsDatarate;





    int8_t ChannelsDefaultTxPower;





    int8_t ChannelsTxPower;





    McChannelParams_t MulticastChannel;





    uint32_t SystemMaxRxError;





    uint8_t MinRxSymbols;





    float AntennaGain;





    float DefaultAntennaGain;






    LoRaMacNvmData_t* Contexts;





    Version_t AbpLrWanVersion;





    struct sLrWanVersion
    {
        Version_t LoRaWan;
        Version_t LoRaWanRegion;
    }LrWanVersion;





    uint32_t BeaconInterval;





    uint32_t BeaconReserved;





    uint32_t BeaconGuard;





    uint32_t BeaconWindow;





    uint32_t BeaconWindowSlots;





    uint32_t PingSlotWindow;





    uint32_t BeaconSymbolToDefault;





    uint32_t BeaconSymbolToExpansionMax;





    uint32_t PingSlotSymbolToExpansionMax;






    uint32_t BeaconSymbolToExpansionFactor;






    uint32_t PingSlotSymbolToExpansionFactor;





    uint32_t MaxBeaconLessPeriod;





    int8_t PingSlotDatarate;
}MibParam_t;




typedef struct eMibRequestConfirm
{



    Mib_t Type;




    MibParam_t Param;
}MibRequestConfirm_t;




typedef struct sLoRaMacTxInfo
{



    uint8_t MaxPossibleApplicationDataSize;




    uint8_t CurrentPossiblePayloadSize;
}LoRaMacTxInfo_t;




typedef enum eLoRaMacStatus
{



    LORAMAC_STATUS_OK,



    LORAMAC_STATUS_BUSY,



    LORAMAC_STATUS_SERVICE_UNKNOWN,



    LORAMAC_STATUS_PARAMETER_INVALID,



    LORAMAC_STATUS_FREQUENCY_INVALID,



    LORAMAC_STATUS_DATARATE_INVALID,



    LORAMAC_STATUS_FREQ_AND_DR_INVALID,



    LORAMAC_STATUS_NO_NETWORK_JOINED,



    LORAMAC_STATUS_LENGTH_ERROR,




    LORAMAC_STATUS_REGION_NOT_SUPPORTED,




    LORAMAC_STATUS_SKIPPED_APP_DATA,
# 2289 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    LORAMAC_STATUS_DUTYCYCLE_RESTRICTED,



    LORAMAC_STATUS_NO_CHANNEL_FOUND,



    LORAMAC_STATUS_NO_FREE_CHANNEL_FOUND,



    LORAMAC_STATUS_BUSY_BEACON_RESERVED_TIME,



    LORAMAC_STATUS_BUSY_PING_SLOT_WINDOW_TIME,



    LORAMAC_STATUS_BUSY_UPLINK_COLLISION,



    LORAMAC_STATUS_CRYPTO_ERROR,



    LORAMAC_STATUS_FCNT_HANDLER_ERROR,



    LORAMAC_STATUS_MAC_COMMAD_ERROR,



    LORAMAC_STATUS_CLASS_B_ERROR,



    LORAMAC_STATUS_CONFIRM_QUEUE_ERROR,



    LORAMAC_STATUS_MC_GROUP_UNDEFINED,



    LORAMAC_STATUS_ERROR
}LoRaMacStatus_t;





typedef struct sLoRaMacPrimitives
{





    void ( *MacMcpsConfirm )( McpsConfirm_t* McpsConfirm );





    void ( *MacMcpsIndication )( McpsIndication_t* McpsIndication );





    void ( *MacMlmeConfirm )( MlmeConfirm_t* MlmeConfirm );





    void ( *MacMlmeIndication )( MlmeIndication_t* MlmeIndication );
}LoRaMacPrimitives_t;




typedef struct sLoRaMacCallback
{
# 2385 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    uint8_t ( *GetBatteryLevel )( void );





    float ( *GetTemperatureLevel )( void );






    void ( *NvmDataChange )( uint16_t notifyFlags );






    void ( *MacProcessNotify )( void );
}LoRaMacCallback_t;





static const uint8_t LoRaMacMaxEirpTable[] = { 8, 10, 12, 13, 14, 16, 18, 20, 21, 24, 26, 27, 29, 30, 33, 36 };
# 2436 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacInitialization( LoRaMacPrimitives_t* primitives, LoRaMacCallback_t* callbacks, LoRaMacRegion_t region );
# 2445 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacStart( void );
# 2454 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacStop( void );







# 2461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
_Bool 
# 2461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    LoRaMacIsBusy( void );






void LoRaMacProcess( void );
# 2495 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacQueryTxPossible( uint8_t size, LoRaMacTxInfo_t* txInfo );
# 2513 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacChannelAdd( uint8_t id, ChannelParams_t params );
# 2527 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacChannelRemove( uint8_t id );
# 2542 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelSetup( McChannelParams_t *channel );
# 2556 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelDelete( AddressIdentifier_t groupID );
# 2566 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
uint8_t LoRaMacMcChannelGetGroupId( uint32_t mcAddress );
# 2583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelSetupRxParams( AddressIdentifier_t groupID, McRxParams_t *rxParams, uint8_t *status );
# 2611 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMibGetRequestConfirm( MibRequestConfirm_t* mibGet );
# 2642 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMibSetRequestConfirm( MibRequestConfirm_t* mibSet );
# 2675 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMlmeRequest( MlmeReq_t* mlmeRequest );
# 2709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcpsRequest( McpsReq_t* mcpsRequest );
# 2721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacDeInitialization( void );
# 64 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
#define __REGIONCOMMON_H__ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define __LORAMAC_HEADER_TYPES_H__ 
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_MHDR_FIELD_SIZE 1


#define LORAMAC_JOIN_TYPE_FIELD_SIZE 1


#define LORAMAC_JOIN_EUI_FIELD_SIZE 8


#define LORAMAC_DEV_EUI_FIELD_SIZE 8


#define LORAMAC_DEV_NONCE_FIELD_SIZE 2


#define LORAMAC_JOIN_NONCE_FIELD_SIZE 3


#define LORAMAC_RJCOUNT_0_FIELD_SIZE 2


#define LORAMAC_RJCOUNT_1_FIELD_SIZE 2


#define LORAMAC_NET_ID_FIELD_SIZE 3


#define LORAMAC_DEV_ADDR_FIELD_SIZE 4


#define LORAMAC_DL_SETTINGS_FIELD_SIZE 1


#define LORAMAC_RX_DELAY_FIELD_SIZE 1


#define LORAMAC_CF_LIST_FIELD_SIZE 16


#define LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE LORAMAC_DEV_ADDR_FIELD_SIZE


#define LORAMAC_FHDR_F_CTRL_FIELD_SIZE 1


#define LORAMAC_FHDR_F_CNT_FIELD_SIZE 2


#define LORAMAC_FHDR_F_OPTS_MAX_FIELD_SIZE 15


#define LORAMAC_F_PORT_FIELD_SIZE 1


#define LORAMAC_MAC_PAYLOAD_FIELD_MAX_SIZE 242


#define LORAMAC_MIC_FIELD_SIZE 4






#define LORAMAC_JOIN_REQ_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_DEV_NONCE_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 121 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_RE_JOIN_1_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_RJCOUNT_1_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 131 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_RE_JOIN_0_2_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_RJCOUNT_0_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 141 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_JOIN_ACCEPT_FRAME_MIN_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_NONCE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_ADDR_FIELD_SIZE + LORAMAC_DL_SETTINGS_FIELD_SIZE + LORAMAC_RX_DELAY_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_JOIN_ACCEPT_FRAME_MAX_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_NONCE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_ADDR_FIELD_SIZE + LORAMAC_DL_SETTINGS_FIELD_SIZE + LORAMAC_RX_DELAY_FIELD_SIZE + LORAMAC_CF_LIST_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 160 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define JOIN_ACCEPT_MIC_COMPUTATION_OFFSET ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_NONCE_FIELD_SIZE )
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_FRAME_PAYLOAD_OVERHEAD_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_F_PORT_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 182 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_FRAME_PAYLOAD_MIN_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_MIC_FIELD_SIZE )







#define LORAMAC_FRAME_PAYLOAD_MAX_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_F_PORT_FIELD_SIZE + LORAMAC_MAC_PAYLOAD_FIELD_MAX_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 200 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h"
typedef union uLoRaMacDLSettings
{



    uint8_t Value;



    struct sDLSettingsBits
    {



        uint8_t RX2DataRate : 4;



        uint8_t RX1DRoffset : 3;



        uint8_t OptNeg : 1;
    }Bits;
}LoRaMacDLSettings_t;






typedef union uLoRaMacHeader
{



    uint8_t Value;



    struct sMacHeaderBits
    {



        uint8_t Major : 2;



        uint8_t RFU : 3;



        uint8_t MType : 3;
    }Bits;
}LoRaMacHeader_t;






typedef union uLoRaMacFrameCtrl
{



    uint8_t Value;



    struct sCtrlBits
    {



        uint8_t FOptsLen : 4;



        uint8_t FPending : 1;



        uint8_t Ack : 1;



        uint8_t AdrAckReq : 1;



        uint8_t Adr : 1;
    }Bits;
}LoRaMacFrameCtrl_t;






typedef struct sLoRaMacFrameHeader
{



    uint32_t DevAddr;



    LoRaMacFrameCtrl_t FCtrl;



    uint16_t FCnt;



    uint8_t FOpts[15];
}LoRaMacFrameHeader_t;
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 1
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 2






#define REGION_COMMON_DEFAULT_RECEIVE_DELAY1 1000




#define REGION_COMMON_DEFAULT_RECEIVE_DELAY2 ( REGION_COMMON_DEFAULT_RECEIVE_DELAY1 + 1000 )




#define REGION_COMMON_DEFAULT_JOIN_ACCEPT_DELAY1 5000




#define REGION_COMMON_DEFAULT_JOIN_ACCEPT_DELAY2 ( REGION_COMMON_DEFAULT_JOIN_ACCEPT_DELAY1 + 1000 )




#define REGION_COMMON_DEFAULT_ADR_ACK_LIMIT 64




#define REGION_COMMON_DEFAULT_ADR_ACK_DELAY 32




#define REGION_COMMON_DEFAULT_MAX_FCNT_GAP 16384




#define REGION_COMMON_DEFAULT_ACK_TIMEOUT 2000





#define REGION_COMMON_DEFAULT_ACK_TIMEOUT_RND 1000




#define REGION_COMMON_DEFAULT_RX1_DR_OFFSET 0




#define REGION_COMMON_DEFAULT_DOWNLINK_DWELL_TIME 0







#define REGION_COMMON_DEFAULT_PING_SLOT_PERIODICITY 7

typedef struct sRegionCommonLinkAdrParams
{



    uint8_t NbRep;



    int8_t Datarate;



    int8_t TxPower;



    uint8_t ChMaskCtrl;



    uint16_t ChMask;
}RegionCommonLinkAdrParams_t;

typedef struct sRegionCommonLinkAdrReqVerifyParams
{



    Version_t Version;



    uint8_t Status;



    
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
   _Bool 
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
        AdrEnabled;



    int8_t Datarate;



    int8_t TxPower;



    uint8_t NbRep;



    int8_t CurrentDatarate;



    int8_t CurrentTxPower;



    int8_t CurrentNbRep;



    uint8_t NbChannels;



    uint16_t* ChannelsMask;



    int8_t MinDatarate;



    int8_t MaxDatarate;



    ChannelParams_t* Channels;



    int8_t MinTxPower;



    int8_t MaxTxPower;
}RegionCommonLinkAdrReqVerifyParams_t;

typedef struct sRegionCommonRxBeaconSetupParams
{



    const uint8_t* Datarates;



    uint32_t Frequency;



    uint8_t BeaconSize;



    uint8_t BeaconDatarate;



    uint8_t BeaconChannelBW;



    uint32_t RxTime;



    uint16_t SymbolTimeout;
}RegionCommonRxBeaconSetupParams_t;

typedef struct sRegionCommonCountNbOfEnabledChannelsParams
{



    
# 244 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
   _Bool 
# 244 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
        Joined;



    uint8_t Datarate;



    uint16_t* ChannelsMask;



    ChannelParams_t* Channels;



    Band_t* Bands;



    uint16_t MaxNbChannels;





    uint16_t* JoinChannels;
}RegionCommonCountNbOfEnabledChannelsParams_t;

typedef struct sRegionCommonIdentifyChannelsParam
{



    TimerTime_t AggrTimeOff;



    TimerTime_t LastAggrTx;



    
# 286 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
   _Bool 
# 286 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
        DutyCycleEnabled;



    uint8_t MaxBands;



    SysTime_t ElapsedTimeSinceStartUp;



    
# 298 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
   _Bool 
# 298 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
        LastTxIsJoinRequest;



    TimerTime_t ExpectedTimeOnAir;



    RegionCommonCountNbOfEnabledChannelsParams_t* CountNbOfEnabledChannelsParam;
}RegionCommonIdentifyChannelsParam_t;

typedef struct sRegionCommonSetDutyCycleParams
{



    TimerTime_t DutyCycleTimePeriod;



    uint8_t MaxBands;



    Band_t* Bands;
}RegionCommonSetDutyCycleParams_t;

typedef struct sRegionCommonGetNextLowerTxDrParams
{
    int8_t CurrentDr;
    int8_t MaxDr;
    int8_t MinDr;
    uint8_t NbChannels;
    uint16_t* ChannelsMask;
    ChannelParams_t* Channels;
}RegionCommonGetNextLowerTxDrParams_t;
# 347 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
uint8_t RegionCommonValueInRange( int8_t value, int8_t min, int8_t max );
# 367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"

# 367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
_Bool 
# 367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
    RegionCommonChanVerifyDr( uint8_t nbChannels, uint16_t* channelsMask, int8_t dr,
                            int8_t minDr, int8_t maxDr, ChannelParams_t* channels );
# 382 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"

# 382 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
_Bool 
# 382 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
    RegionCommonChanDisable( uint16_t* channelsMask, uint8_t id, uint8_t maxChannels );
# 396 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
uint8_t RegionCommonCountChannels( uint16_t* channelsMask, uint8_t startIdx, uint8_t stopIdx );
# 408 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
void RegionCommonChanMaskCopy( uint16_t* channelsMaskDest, uint16_t* channelsMaskSrc, uint8_t len );
# 422 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
void RegionCommonSetBandTxDone( Band_t* band, TimerTime_t lastTxAirTime, 
# 422 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
                                                                        _Bool 
# 422 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
                                                                             joined, SysTime_t elapsedTimeSinceStartup );
# 444 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
TimerTime_t RegionCommonUpdateBandTimeOff( 
# 444 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
                                          _Bool 
# 444 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
                                               joined, Band_t* bands,
                                           uint8_t nbBands, 
# 445 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
                                                           _Bool 
# 445 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
                                                                dutyCycleEnabled,
                                           
# 446 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h" 3 4
                                          _Bool 
# 446 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
                                               lastTxIsJoinRequest, SysTime_t elapsedTimeSinceStartup,
                                           TimerTime_t expectedTimeOnAir );
# 461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
uint8_t RegionCommonParseLinkAdrReq( uint8_t* payload, RegionCommonLinkAdrParams_t* parseLinkAdr );
# 477 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
uint8_t RegionCommonLinkAdrReqVerifyParams( RegionCommonLinkAdrReqVerifyParams_t* verifyParams, int8_t* dr, int8_t* txPow, uint8_t* nbRep );
# 488 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
uint32_t RegionCommonComputeSymbolTimeLoRa( uint8_t phyDr, uint32_t bandwidthInHz );
# 497 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
uint32_t RegionCommonComputeSymbolTimeFsk( uint8_t phyDrInKbps );
# 515 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
void RegionCommonComputeRxWindowParameters( uint32_t tSymbolInUs, uint8_t minRxSymbols, uint32_t rxErrorInMs, uint32_t wakeUpTimeInMs, uint32_t* windowTimeoutInSymbols, int32_t* windowOffsetInMs );
# 532 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
int8_t RegionCommonComputeTxPower( int8_t txPowerIndex, float maxEirp, float antennaGain );






void RegionCommonRxBeaconSetup( RegionCommonRxBeaconSetupParams_t* rxBeaconSetupParams );
# 554 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
void RegionCommonCountNbOfEnabledChannels( RegionCommonCountNbOfEnabledChannelsParams_t* countNbOfEnabledChannelsParams,
                                           uint8_t* enabledChannels, uint8_t* nbEnabledChannels, uint8_t* nbRestrictedChannels );
# 578 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
LoRaMacStatus_t RegionCommonIdentifyChannels( RegionCommonIdentifyChannelsParam_t* identifyChannelsParam,
                                              TimerTime_t* aggregatedTimeOff, uint8_t* enabledChannels,
                                              uint8_t* nbEnabledChannels, uint8_t* nbRestrictedChannels,
                                              TimerTime_t* nextTxDelay );
# 590 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
int8_t RegionCommonGetNextLowerTxDr( RegionCommonGetNextLowerTxDrParams_t *params );
# 601 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
int8_t RegionCommonLimitTxPower( int8_t txPower, int8_t maxBandTxPower );
# 612 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionCommon.h"
uint32_t RegionCommonGetBandwidth( uint32_t drIndex, const uint32_t* bandwidths );



typedef uint32_t (*IsSingleChannel_t)(void);

typedef uint8_t (*AlternateDr_t)(void);

typedef struct SingleChannel_s
{
    IsSingleChannel_t IsSingleChannel;
    AlternateDr_t AlternateDr;
}SingleChannel_t;

int32_t US915_SingleChannelRegisterCallback(SingleChannel_t* SingleChannel);

int32_t AU915_SingleChannelRegisterCallback(SingleChannel_t* SingleChannel);
# 66 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 2




#define LC(channelIndex) ( uint16_t )( 1 << ( channelIndex - 1 ) )





#define REGION_VERSION 0x00010003







typedef enum ePhyAttribute
{




    PHY_FREQUENCY,



    PHY_MIN_RX_DR,



    PHY_MIN_TX_DR,



    PHY_MAX_RX_DR,



    PHY_MAX_TX_DR,





    PHY_TX_DR,



    PHY_DEF_TX_DR,




    PHY_RX_DR,



    PHY_MAX_TX_POWER,




    PHY_TX_POWER,



    PHY_DEF_TX_POWER,



    PHY_DEF_ADR_ACK_LIMIT,



    PHY_DEF_ADR_ACK_DELAY,



    PHY_MAX_PAYLOAD,



    PHY_DUTY_CYCLE,



    PHY_MAX_RX_WINDOW,



    PHY_RECEIVE_DELAY1,



    PHY_RECEIVE_DELAY2,



    PHY_JOIN_ACCEPT_DELAY1,



    PHY_JOIN_ACCEPT_DELAY2,



    PHY_MAX_FCNT_GAP,



    PHY_ACK_TIMEOUT,



    PHY_DEF_DR1_OFFSET,



    PHY_DEF_RX2_FREQUENCY,



    PHY_DEF_RX2_DR,



    PHY_CHANNELS_MASK,



    PHY_CHANNELS_DEFAULT_MASK,



    PHY_MAX_NB_CHANNELS,



    PHY_CHANNELS,



    PHY_DEF_UPLINK_DWELL_TIME,



    PHY_DEF_DOWNLINK_DWELL_TIME,



    PHY_DEF_MAX_EIRP,



    PHY_DEF_ANTENNA_GAIN,



    PHY_NEXT_LOWER_TX_DR,



    PHY_BEACON_INTERVAL,



    PHY_BEACON_RESERVED,



    PHY_BEACON_GUARD,



    PHY_BEACON_WINDOW,



    PHY_BEACON_WINDOW_SLOTS,



    PHY_PING_SLOT_WINDOW,



    PHY_BEACON_SYMBOL_TO_DEFAULT,



    PHY_BEACON_SYMBOL_TO_EXPANSION_MAX,



    PHY_PING_SLOT_SYMBOL_TO_EXPANSION_MAX,




    PHY_BEACON_SYMBOL_TO_EXPANSION_FACTOR,




    PHY_PING_SLOT_SYMBOL_TO_EXPANSION_FACTOR,



    PHY_MAX_BEACON_LESS_PERIOD,



    PHY_BEACON_DELAY_BEACON_TIMING_ANS,



    PHY_BEACON_CHANNEL_FREQ,



    PHY_BEACON_FORMAT,



    PHY_BEACON_CHANNEL_DR,



    PHY_BEACON_NB_CHANNELS,



    PHY_BEACON_CHANNEL_OFFSET,



    PHY_PING_SLOT_CHANNEL_FREQ,



    PHY_PING_SLOT_CHANNEL_DR,



    PHY_PING_SLOT_NB_CHANNELS,



    PHY_SF_FROM_DR,



    PHY_BW_FROM_DR,
}PhyAttribute_t;




typedef enum eInitType
{






    INIT_TYPE_DEFAULTS,




    INIT_TYPE_RESET_TO_DEFAULT_CHANNELS,




    INIT_TYPE_ACTIVATE_DEFAULT_CHANNELS
}InitType_t;

typedef enum eChannelsMask
{



    CHANNELS_MASK,



    CHANNELS_DEFAULT_MASK
}ChannelsMask_t;




typedef struct sBeaconFormat
{



    uint8_t BeaconSize;



    uint8_t Rfu1Size;



    uint8_t Rfu2Size;
}BeaconFormat_t;




typedef union uPhyParam
{



    uint32_t Value;



    float fValue;



    uint16_t* ChannelsMask;



    ChannelParams_t* Channels;



    BeaconFormat_t BeaconFormat;



    TimerTime_t DutyCycleTimePeriod;
}PhyParam_t;




typedef struct sGetPhyParams
{



    PhyAttribute_t Attribute;





    int8_t Datarate;






    uint8_t UplinkDwellTime;






    uint8_t DownlinkDwellTime;





    uint8_t Channel;
}GetPhyParams_t;




typedef struct sSetBandTxDoneParams
{



    uint8_t Channel;



    
# 458 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
   _Bool 
# 458 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
        Joined;



    TimerTime_t LastTxDoneTime;



    TimerTime_t LastTxAirTime;



    SysTime_t ElapsedTimeSinceStartUp;
}SetBandTxDoneParams_t;




typedef struct sInitDefaultsParams
{



    void* NvmGroup1;



    void* NvmGroup2;



    InitType_t Type;
}InitDefaultsParams_t;




typedef union uVerifyParams
{



    uint32_t Frequency;



    int8_t TxPower;



    
# 508 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
   _Bool 
# 508 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
        DutyCycle;



    struct sDatarateParams
    {



        int8_t Datarate;



        uint8_t DownlinkDwellTime;



        uint8_t UplinkDwellTime;
    }DatarateParams;
}VerifyParams_t;




typedef struct sApplyCFListParams
{



    uint8_t* Payload;



    uint8_t Size;
}ApplyCFListParams_t;




typedef struct sChanMaskSetParams
{



    uint16_t* ChannelsMaskIn;



    ChannelsMask_t ChannelsMaskType;
}ChanMaskSetParams_t;




typedef struct sRxConfigParams
{



    uint8_t Channel;



    int8_t Datarate;



    uint8_t Bandwidth;



    int8_t DrOffset;



    uint32_t Frequency;



     uint32_t WindowTimeout;



    int32_t WindowOffset;



    uint8_t DownlinkDwellTime;



    
# 599 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
   _Bool 
# 599 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
        RxContinuous;



    LoRaMacRxSlot_t RxSlot;
}RxConfigParams_t;




typedef struct sTxConfigParams
{



    uint8_t Channel;



    int8_t Datarate;



    int8_t TxPower;



    float MaxEirp;



    float AntennaGain;



    uint16_t PktLen;
}TxConfigParams_t;




typedef struct sLinkAdrReqParams
{



    Version_t Version;



    uint8_t* Payload;



    uint8_t PayloadSize;



    uint8_t UplinkDwellTime;



    
# 661 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
   _Bool 
# 661 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
        AdrEnabled;



    int8_t CurrentDatarate;



    int8_t CurrentTxPower;



    uint8_t CurrentNbRep;
}LinkAdrReqParams_t;




typedef struct sRxParamSetupReqParams
{



    int8_t Datarate;



    int8_t DrOffset;



    uint32_t Frequency;
}RxParamSetupReqParams_t;




typedef struct sNewChannelReqParams
{



    ChannelParams_t* NewChannel;



    int8_t ChannelId;
}NewChannelReqParams_t;




typedef struct sTxParamSetupReqParams
{



    uint8_t UplinkDwellTime;



    uint8_t DownlinkDwellTime;



    uint8_t MaxEirp;
}TxParamSetupReqParams_t;




typedef struct sDlChannelReqParams
{



    uint8_t ChannelId;



    uint32_t Rx1Frequency;
}DlChannelReqParams_t;




typedef enum eAlternateDrType
{



    ALTERNATE_DR,



    ALTERNATE_DR_RESTORE
}AlternateDrType_t;




typedef struct sNextChanParams
{



    TimerTime_t AggrTimeOff;



    TimerTime_t LastAggrTx;



    int8_t Datarate;



    
# 779 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
   _Bool 
# 779 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
        Joined;



    
# 783 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
   _Bool 
# 783 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
        DutyCycleEnabled;



    SysTime_t ElapsedTimeSinceStartUp;



    
# 791 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
   _Bool 
# 791 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
        LastTxIsJoinRequest;



    uint16_t PktLen;
}NextChanParams_t;




typedef struct sChannelAddParams
{



    ChannelParams_t* NewChannel;



    uint8_t ChannelId;
}ChannelAddParams_t;




typedef struct sChannelRemoveParams
{



    uint8_t ChannelId;
}ChannelRemoveParams_t;




typedef struct sContinuousWaveParams
{



    uint8_t Channel;



    int8_t Datarate;



    int8_t TxPower;



    float MaxEirp;



    float AntennaGain;



    uint16_t Timeout;
}ContinuousWaveParams_t;




typedef struct sRxBeaconSetupParams
{



    uint16_t SymbolTimeout;



    uint32_t RxTime;



    uint32_t Frequency;
}RxBeaconSetup_t;
# 884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"

# 884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
_Bool 
# 884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
    RegionIsActive( LoRaMacRegion_t region );
# 895 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
PhyParam_t RegionGetPhyParam( LoRaMacRegion_t region, GetPhyParams_t* getPhy );
# 904 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
void RegionSetBandTxDone( LoRaMacRegion_t region, SetBandTxDoneParams_t* txDone );
# 913 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
void RegionInitDefaults( LoRaMacRegion_t region, InitDefaultsParams_t* params );
# 926 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"

# 926 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
_Bool 
# 926 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
    RegionVerify( LoRaMacRegion_t region, VerifyParams_t* verify, PhyAttribute_t phyAttribute );
# 936 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
void RegionApplyCFList( LoRaMacRegion_t region, ApplyCFListParams_t* applyCFList );
# 947 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"

# 947 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
_Bool 
# 947 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
    RegionChanMaskSet( LoRaMacRegion_t region, ChanMaskSetParams_t* chanMaskSet );
# 960 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"

# 960 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
_Bool 
# 960 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
    RegionRxConfig( LoRaMacRegion_t region, RxConfigParams_t* rxConfig, int8_t* datarate );
# 1015 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
void RegionComputeRxWindowParameters( LoRaMacRegion_t region, int8_t datarate, uint8_t minRxSymbols, uint32_t rxError, RxConfigParams_t *rxConfigParams );
# 1030 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"

# 1030 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
_Bool 
# 1030 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
    RegionTxConfig( LoRaMacRegion_t region, TxConfigParams_t* txConfig, int8_t* txPower, TimerTime_t* txTimeOnAir );
# 1049 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
uint8_t RegionLinkAdrReq( LoRaMacRegion_t region, LinkAdrReqParams_t* linkAdrReq, int8_t* drOut, int8_t* txPowOut, uint8_t* nbRepOut, uint8_t* nbBytesParsed );
# 1060 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
uint8_t RegionRxParamSetupReq( LoRaMacRegion_t region, RxParamSetupReqParams_t* rxParamSetupReq );
# 1071 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
int8_t RegionNewChannelReq( LoRaMacRegion_t region, NewChannelReqParams_t* newChannelReq );
# 1084 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
int8_t RegionTxParamSetupReq( LoRaMacRegion_t region, TxParamSetupReqParams_t* txParamSetupReq );
# 1095 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
int8_t RegionDlChannelReq( LoRaMacRegion_t region, DlChannelReqParams_t* dlChannelReq );
# 1108 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
int8_t RegionAlternateDr( LoRaMacRegion_t region, int8_t currentDr, AlternateDrType_t type );
# 1124 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
LoRaMacStatus_t RegionNextChannel( LoRaMacRegion_t region, NextChanParams_t* nextChanParams, uint8_t* channel, TimerTime_t* time, TimerTime_t* aggregatedTimeOff );
# 1135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
LoRaMacStatus_t RegionChannelAdd( LoRaMacRegion_t region, ChannelAddParams_t* channelAdd );
# 1146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"

# 1146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h" 3 4
_Bool 
# 1146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
    RegionChannelsRemove( LoRaMacRegion_t region, ChannelRemoveParams_t* channelRemove );
# 1155 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
void RegionSetContinuousWave( LoRaMacRegion_t region, ContinuousWaveParams_t* continuousWave );
# 1168 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
uint8_t RegionApplyDrOffset( LoRaMacRegion_t region, uint8_t downlinkDwellTime, int8_t dr, int8_t drOffset );
# 1177 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/Region.h"
void RegionRxBeaconSetup( LoRaMacRegion_t region, RxBeaconSetup_t* rxBeaconSetup, uint8_t* outDr );






Version_t RegionGetVersion( void );
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
#define __LORAMACCLASSB_H__ 
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
typedef enum eBeaconState
{



    BEACON_STATE_ACQUISITION,



    BEACON_STATE_ACQUISITION_BY_TIME,



    BEACON_STATE_TIMEOUT,



    BEACON_STATE_BEACON_MISSED,




    BEACON_STATE_REACQUISITION,



    BEACON_STATE_LOCKED,



    BEACON_STATE_HALT,




    BEACON_STATE_IDLE,



    BEACON_STATE_GUARD,



    BEACON_STATE_RX,



    BEACON_STATE_LOST,
}BeaconState_t;




typedef enum ePingSlotState
{



    PINGSLOT_STATE_CALC_PING_OFFSET,



    PINGSLOT_STATE_SET_TIMER,



    PINGSLOT_STATE_IDLE,



    PINGSLOT_STATE_RX,
}PingSlotState_t;




typedef struct sPingSlotContext
{




    uint32_t PingSlotWindow;



    uint16_t PingOffset;




    uint16_t SymbolTimeout;



    MulticastCtx_t *NextMulticastChannel;
}PingSlotContext_t;





typedef struct sBeaconContext
{
    struct sBeaconCtrl
    {



        uint8_t BeaconMode : 1;



        uint8_t BeaconAcquired : 1;



        uint8_t BeaconDelaySet : 1;



        uint8_t BeaconChannelSet : 1;



        uint8_t AcquisitionPending : 1;



        uint8_t ResumeBeaconing : 1;
    }Ctrl;




    float Temperature;



    SysTime_t BeaconTime;



    SysTime_t LastBeaconRx;



    SysTime_t NextBeaconRx;





    TimerTime_t NextBeaconRxAdjusted;




    uint16_t SymbolTimeout;



    TimerTime_t BeaconWindowMovement;



    uint8_t BeaconTimingChannel;



    TimerTime_t BeaconTimingDelay;
    TimerTime_t TimeStamp;
}BeaconContext_t;




typedef struct sLoRaMacClassBCallback
{





    float ( *GetTemperatureLevel )( void );






    void ( *MacProcessNotify )( void );
}LoRaMacClassBCallback_t;




typedef struct sLoRaMacClassBParams
{



    MlmeIndication_t *MlmeIndication;



    McpsIndication_t *McpsIndication;



    MlmeConfirm_t *MlmeConfirm;



    LoRaMacFlags_t *LoRaMacFlags;



    uint32_t *LoRaMacDevAddr;



    LoRaMacRegion_t *LoRaMacRegion;



    LoRaMacParams_t *LoRaMacParams;



    MulticastCtx_t *MulticastChannels;
}LoRaMacClassBParams_t;





typedef void ( *LoRaMacClassBNvmEvent )( void );
# 297 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
void LoRaMacClassBInit( LoRaMacClassBParams_t *classBParams, LoRaMacClassBCallback_t *callbacks,
                        LoRaMacClassBNvmData_t* nvm );






void LoRaMacClassBSetBeaconState( BeaconState_t beaconState );






void LoRaMacClassBSetPingSlotState( PingSlotState_t pingSlotState );






void LoRaMacClassBSetMulticastSlotState( PingSlotState_t multicastSlotState );







# 326 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 326 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsAcquisitionInProgress( void );




void LoRaMacClassBBeaconTimerEvent( void* context );




void LoRaMacClassBPingSlotTimerEvent( void* context );




void LoRaMacClassBMulticastSlotTimerEvent( void* context );
# 350 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"

# 350 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 350 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
    LoRaMacClassBRxBeacon( uint8_t *payload, uint16_t size );








# 358 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 358 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsBeaconExpected( void );








# 366 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 366 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsPingExpected( void );








# 374 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 374 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsMulticastExpected( void );







# 381 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 381 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsAcquisitionPending( void );







# 388 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 388 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsBeaconModeActive( void );




void LoRaMacClassBHaltBeaconing( void );




void LoRaMacClassBResumeBeaconing( void );






void LoRaMacClassBSetPingSlotInfo( uint8_t periodicity );
# 414 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
LoRaMacStatus_t LoRaMacClassBSwitchClass( DeviceClass_t nextClass );
# 429 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
LoRaMacStatus_t LoRaMacClassBMibGetRequestConfirm( MibRequestConfirm_t *mibGet );
# 445 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
LoRaMacStatus_t LoRaMacMibClassBSetRequestConfirm( MibRequestConfirm_t *mibSet );




void LoRaMacClassBPingSlotInfoAns( void );
# 460 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
uint8_t LoRaMacClassBPingSlotChannelReq( uint8_t datarate, uint32_t frequency );
# 469 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
void LoRaMacClassBBeaconTimingAns( uint16_t beaconTimingDelay, uint8_t beaconTimingChannel, TimerTime_t lastRxDone );




void LoRaMacClassBDeviceTimeAns( void );
# 483 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"

# 483 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 483 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
    LoRaMacClassBBeaconFreqReq( uint32_t frequency );
# 492 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
TimerTime_t LoRaMacClassBIsUplinkCollision( TimerTime_t txTimeOnAir );





void LoRaMacClassBStopRxSlots( void );





void LoRaMacClassBStartRxSlots( void );
# 514 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassB.h"
void LoRaMacClassBSetMulticastPeriodicity( MulticastCtx_t* multicastChannel );

void LoRaMacClassBProcess( void );
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
#define __LORAMAC_CRYPTO_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 1 3







#define _STDLIB_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 2 3


#define __need_size_t 
#define __need_wchar_t 
#define __need_NULL 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 17 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 2 3



# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/stdlib.h" 1 3

#define _MACHSTDLIB_H_ 
# 21 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 2 3
# 33 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3



# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;



#define __compar_fn_t_defined 
typedef int (*__compar_fn_t) (const void *, const void *);


#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define RAND_MAX __RAND_MAX

int __locale_mb_cur_max (void);

#define MB_CUR_MAX __locale_mb_cur_max()

void abort (void) __attribute__ ((__noreturn__));
int abs (int);





int atexit (void (*__func)(void));
double atof (const char *__nptr);



int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void *__key,
         const void *__base,
         size_t __nmemb,
         size_t __size,
         __compar_fn_t _compar);
void *calloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__))
      __attribute__((__alloc_size__(1, 2))) ;
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) ;
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);



char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);




long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void *malloc(size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(1))) ;
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int _mbtowc_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);
size_t _wcstombs_r (struct _reent *, char *restrict, const wchar_t *restrict, size_t, _mbstate_t *);
# 137 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void *realloc(void *, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2))) ;
# 159 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
void srand (unsigned __seed);
double strtod (const char *restrict __n, char **restrict __end_PTR);
double _strtod_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR);

float strtof (const char *restrict __n, char **restrict __end_PTR);







long strtol (const char *restrict __n, char **restrict __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long strtoul (const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
# 191 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
int system (const char *__string);
# 202 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
void _Exit (int __status) __attribute__ ((__noreturn__));




int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);



int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);
# 263 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
long long atoll (const char *__nptr);

long long _atoll_r (struct _reent *, const char *__nptr);

long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *restrict __n, char **restrict __end_PTR, int __base);

long long _strtoll_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long strtoull (const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long _strtoull_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);
# 284 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
int _unsetenv_r (struct _reent *, const char *__string);







char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) ;
void * _calloc_r (struct _reent *, size_t, size_t) ;
void _free_r (struct _reent *, void *) ;
void * _realloc_r (struct _reent *, void *, size_t) ;
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);
# 322 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
extern long double _strtold_r (struct _reent *, const char *restrict, char **restrict);

extern long double strtold (const char *restrict, char **restrict);
# 339 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3

# 46 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h" 2




# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacMessageTypes.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacMessageTypes.h"
#define __LORAMAC_MESSAGE_TYPES_H__ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacHeaderTypes.h" 1
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacMessageTypes.h" 2





# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacMessageTypes.h"
typedef struct sLoRaMacMessageJoinRequest
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t JoinEUI[8];



    uint8_t DevEUI[8];



    uint16_t DevNonce;



    uint32_t MIC;
}LoRaMacMessageJoinRequest_t;




typedef struct sLoRaMacMessageReJoinType1
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t ReJoinType;



    uint8_t JoinEUI[8];



    uint8_t DevEUI[8];



    uint16_t RJcount1;



    uint32_t MIC;
}LoRaMacMessageReJoinType1_t;




typedef struct sLoRaMacMessageReJoinType0or2
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t ReJoinType;



    uint8_t NetID[3];



    uint8_t DevEUI[8];



    uint16_t RJcount0;



    uint32_t MIC;
}LoRaMacMessageReJoinType0or2_t;




typedef struct sLoRaMacMessageJoinAccept
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t JoinNonce[3];



    uint8_t NetID[3];



    uint32_t DevAddr;



    LoRaMacDLSettings_t DLSettings;



    uint8_t RxDelay;



    uint8_t CFList[16];



    uint32_t MIC;
}LoRaMacMessageJoinAccept_t;






typedef struct sLoRaMacMessageData
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    LoRaMacFrameHeader_t FHDR;



    uint8_t FPort;



    uint8_t* FRMPayload;



    uint8_t FRMPayloadSize;



    uint32_t MIC;
}LoRaMacMessageData_t;




typedef enum eLoRaMacMessageType
{



    LORAMAC_MSG_TYPE_JOIN_REQUEST,



    LORAMAC_MSG_TYPE_RE_JOIN_1,



    LORAMAC_MSG_TYPE_RE_JOIN_0_2,



    LORAMAC_MSG_TYPE_JOIN_ACCEPT,



    LORAMAC_MSG_TYPE_DATA,



    LORAMAC_MSG_TYPE_UNDEF,
}LoRaMacMessageType_t;




typedef struct sLoRaMacMessage
{
    LoRaMacMessageType_t Type;
    union uMessage
    {
        LoRaMacMessageJoinRequest_t JoinReq;
        LoRaMacMessageReJoinType1_t ReJoin1;
        LoRaMacMessageReJoinType0or2_t ReJoin0or2;
        LoRaMacMessageJoinAccept_t JoinAccept;
        LoRaMacMessageData_t Data;
    }Message;
}LoRaMacMessage_t;
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h" 2





#define USE_LRWAN_1_1_X_CRYPTO 0




#define USE_RANDOM_DEV_NONCE 1




#define USE_JOIN_NONCE_COUNTER_CHECK 0




#define FCNT_DOWN_INITAL_VALUE 0xFFFFFFFF




typedef enum eLoRaMacCryptoStatus
{



    LORAMAC_CRYPTO_SUCCESS = 0,



    LORAMAC_CRYPTO_FAIL_MIC,



    LORAMAC_CRYPTO_FAIL_ADDRESS,



    LORAMAC_CRYPTO_FAIL_JOIN_NONCE,



    LORAMAC_CRYPTO_FAIL_RJCOUNT0_OVERFLOW,



    LORAMAC_CRYPTO_FAIL_FCNT_ID,



    LORAMAC_CRYPTO_FAIL_FCNT_SMALLER,



    LORAMAC_CRYPTO_FAIL_FCNT_DUPLICATED,



    LORAMAC_CRYPTO_FAIL_MAX_GAP_FCNT,



    LORAMAC_CRYPTO_FAIL_PARAM,



    LORAMAC_CRYPTO_ERROR_NPE,



    LORAMAC_CRYPTO_ERROR_INVALID_KEY_ID,



    LORAMAC_CRYPTO_ERROR_INVALID_ADDR_ID,



    LORAMAC_CRYPTO_ERROR_INVALID_VERSION,



    LORAMAC_CRYPTO_ERROR_BUF_SIZE,



    LORAMAC_CRYPTO_ERROR_SECURE_ELEMENT_FUNC,



    LORAMAC_CRYPTO_ERROR_PARSER,



    LORAMAC_CRYPTO_ERROR_SERIALIZER,



    LORAMAC_CRYPTO_ERROR_RJCOUNT1_OVERFLOW,



    LORAMAC_CRYPTO_ERROR,
}LoRaMacCryptoStatus_t;







typedef void ( *LoRaMacCryptoNvmEvent )( void );
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoInit( LoRaMacCryptoNvmData_t* nvm );
# 187 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoSetLrWanVersion( Version_t version );
# 198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoGetFCntDown( FCntIdentifier_t fCntID, uint16_t maxFCntGap, uint32_t frameFcnt, uint32_t* currentDown );







LoRaMacCryptoStatus_t LoRaMacCryptoGetFCntUp( uint32_t* currentUp );
# 215 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoSetMulticastReference( MulticastCtx_t* multicastList );
# 224 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoSetKey( KeyIdentifier_t keyID, uint8_t* key );
# 233 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoPrepareJoinRequest( LoRaMacMessageJoinRequest_t* macMsg );
# 242 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoPrepareReJoinType1( LoRaMacMessageReJoinType1_t* macMsg );
# 251 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoPrepareReJoinType0or2( LoRaMacMessageReJoinType0or2_t* macMsg );
# 262 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoHandleJoinAccept( JoinReqIdentifier_t joinReqType, uint8_t* joinEUI, LoRaMacMessageJoinAccept_t* macMsg );
# 273 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoSecureMessage( uint32_t fCntUp, uint8_t txDr, uint8_t txCh, LoRaMacMessageData_t* macMsg );
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoUnsecureMessage( AddressIdentifier_t addrID, uint32_t address, FCntIdentifier_t fCntID, uint32_t fCntDown, LoRaMacMessageData_t* macMsg );
# 300 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoDeriveMcRootKey( uint8_t versionMinor, KeyIdentifier_t keyID );
# 310 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoDeriveMcKEKey( KeyIdentifier_t keyID );
# 322 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoDeriveMcSessionKeyPair( AddressIdentifier_t addrID, uint32_t mcAddr );
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h" 1
# 39 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
#define __SECURE_ELEMENT_H__ 
# 53 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
typedef enum eSecureElementStatus
{



    SECURE_ELEMENT_SUCCESS = 0,



    SECURE_ELEMENT_FAIL_CMAC,



    SECURE_ELEMENT_ERROR_NPE,



    SECURE_ELEMENT_ERROR_INVALID_KEY_ID,



    SECURE_ELEMENT_ERROR_INVALID_LORAWAM_SPEC_VERSION,



    SECURE_ELEMENT_ERROR_BUF_SIZE,



    SECURE_ELEMENT_ERROR,



    SECURE_ELEMENT_FAIL_ENCRYPT,
}SecureElementStatus_t;
# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
SecureElementStatus_t SecureElementInit( SecureElementNvmData_t* nvm );
# 105 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
SecureElementStatus_t SecureElementSetKey( KeyIdentifier_t keyID, uint8_t* key );
# 117 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
SecureElementStatus_t SecureElementComputeAesCmac( uint8_t* micBxBuffer, uint8_t* buffer, uint16_t size, KeyIdentifier_t keyID, uint32_t* cmac );
# 128 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
SecureElementStatus_t SecureElementVerifyAesCmac( uint8_t* buffer, uint16_t size, uint32_t expectedCmac, KeyIdentifier_t keyID );
# 139 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
SecureElementStatus_t SecureElementAesEncrypt( uint8_t* buffer, uint16_t size, KeyIdentifier_t keyID, uint8_t* encBuffer );
# 149 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
SecureElementStatus_t SecureElementDeriveAndStoreKey( uint8_t* input, KeyIdentifier_t rootKeyID, KeyIdentifier_t targetKeyID );
# 162 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
SecureElementStatus_t SecureElementProcessJoinAccept( JoinReqIdentifier_t joinReqType, uint8_t* joinEui,
                                                      uint16_t devNonce, uint8_t* encJoinAccept,
                                                      uint8_t encJoinAcceptSize, uint8_t* decJoinAccept,
                                                      uint8_t* versionMinor );







SecureElementStatus_t SecureElementRandomNumber( uint32_t* randomNum );







SecureElementStatus_t SecureElementSetDevEui( uint8_t* devEui );






uint8_t* SecureElementGetDevEui( void );







SecureElementStatus_t SecureElementSetJoinEui( uint8_t* joinEui );






uint8_t* SecureElementGetJoinEui( void );







SecureElementStatus_t SecureElementSetPin( uint8_t* pin );






uint8_t* SecureElementGetPin( void );






# 224 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h" 3 4
_Bool 
# 224 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element.h"
    Get_McRoot_Key(uint8_t *key);
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTest.h" 1
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTest.h"
#define __LORAMACTEST_H__ 
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTest.h"
void LoRaMacTestSetDutyCycleOn( 
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTest.h" 3 4
                               _Bool 
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTest.h"
                                    enable );
# 39 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 1
# 40 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
#define __LORAMAC_CONFIRMQUEUE_H__ 
# 50 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 1
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 2




#define LORA_MAC_MLME_CONFIRM_QUEUE_LEN 5




typedef struct sMlmeConfirmQueue
{



    Mlme_t Request;



    LoRaMacEventInfoStatus_t Status;



    
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
   _Bool 
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
        ReadyToHandle;




    
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
   _Bool 
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
        RestrictCommonReadyToHandle;
}MlmeConfirmQueue_t;






void LoRaMacConfirmQueueInit( LoRaMacPrimitives_t* primitive );
# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"

# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueAdd( MlmeConfirmQueue_t* mlmeConfirm );







# 102 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 102 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueRemoveLast( void );







# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueRemoveFirst( void );
# 118 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
void LoRaMacConfirmQueueSetStatus( LoRaMacEventInfoStatus_t status, Mlme_t request );
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
LoRaMacEventInfoStatus_t LoRaMacConfirmQueueGetStatus( Mlme_t request );






void LoRaMacConfirmQueueSetStatusCmn( LoRaMacEventInfoStatus_t status );






LoRaMacEventInfoStatus_t LoRaMacConfirmQueueGetStatusCmn( void );
# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"

# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueIsCmdActive( Mlme_t request );






void LoRaMacConfirmQueueHandleCb( MlmeConfirm_t* mlmeConfirm );






uint8_t LoRaMacConfirmQueueGetCnt( void );







# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueIsFull( void );
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2


# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacParser.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacParser.h"
#define __LORAMAC_PARSER_H__ 
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacParser.h"
typedef enum eLoRaMacParserStatus
{



    LORAMAC_PARSER_SUCCESS = 0,



    LORAMAC_PARSER_FAIL,



    LORAMAC_PARSER_ERROR_NPE,



    LORAMAC_PARSER_ERROR,
}LoRaMacParserStatus_t;
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacParser.h"
LoRaMacParserStatus_t LoRaMacParserJoinAccept( LoRaMacMessageJoinAccept_t *macMsg );







LoRaMacParserStatus_t LoRaMacParserData( LoRaMacMessageData_t *macMsg );
# 44 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 1
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
#define __LORAMAC_COMMANDS_H__ 







# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 2






#define LORAMAC_COMMADS_MAX_NUM_OF_PARAMS 2




typedef struct sMacCommand MacCommand_t;

struct sMacCommand
{



    MacCommand_t* Next;



    uint8_t CID;



    uint8_t Payload[2];



    size_t PayloadSize;



    
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 3 4
   _Bool 
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
        IsSticky;
};




typedef enum eLoRaMacCommandsStatus
{



    LORAMAC_COMMANDS_SUCCESS = 0,



    LORAMAC_COMMANDS_ERROR_NPE,



    LORAMAC_COMMANDS_ERROR_MEMORY,



    LORAMAC_COMMANDS_ERROR_CMD_NOT_FOUND,



    LORAMAC_COMMANDS_ERROR_UNKNOWN_CMD,



    LORAMAC_COMMANDS_ERROR,
}LoRaMacCommandStatus_t;





typedef void ( *LoRaMacCommandsNvmEvent )( void );






LoRaMacCommandStatus_t LoRaMacCommandsInit( void );
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsAddCmd( uint8_t cid, uint8_t* payload, size_t payloadSize );
# 144 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsRemoveCmd( MacCommand_t* macCmd );
# 154 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsGetCmd( uint8_t cid, MacCommand_t** macCmd );






LoRaMacCommandStatus_t LoRaMacCommandsRemoveNoneStickyCmds( void );






LoRaMacCommandStatus_t LoRaMacCommandsRemoveStickyAnsCmds( void );
# 177 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsGetSizeSerializedCmds( size_t* size );
# 188 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsSerializeCmds( size_t availableSize, size_t* effectiveSize, uint8_t* buffer );
# 197 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsStickyCmdsPending( 
# 197 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 3 4
                                                        _Bool
# 197 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
                                                            * cmdsPending );
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
uint8_t LoRaMacCommandsGetCmdSize( uint8_t cid );
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h"
#define __LORAMACADR_H__ 
# 50 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h"
typedef struct sCalcNextAdrParams
{



    Version_t Version;



    
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h" 3 4
   _Bool 
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h"
        UpdateChanMask;



    
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h" 3 4
   _Bool 
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h"
        AdrEnabled;



    uint32_t AdrAckCounter;



    uint16_t AdrAckLimit;



    uint16_t AdrAckDelay;



    int8_t Datarate;



    int8_t TxPower;



    uint8_t UplinkDwellTime;



    LoRaMacRegion_t Region;
}CalcNextAdrParams_t;
# 107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h"

# 107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h" 3 4
_Bool 
# 107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacAdr.h"
    LoRaMacAdrCalcNext( CalcNextAdrParams_t* adrNext, int8_t* drOut, int8_t* txPowOut, uint32_t* adrAckCounter );
# 46 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacSerializer.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacSerializer.h"
#define __LORAMAC_SERIALIZER_H__ 
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacSerializer.h"
typedef enum eLoRaMacSerializerStatus
{



    LORAMAC_SERIALIZER_SUCCESS = 0,



    LORAMAC_SERIALIZER_ERROR_NPE,



    LORAMAC_SERIALIZER_ERROR_BUF_SIZE,



    LORAMAC_SERIALIZER_ERROR,
}LoRaMacSerializerStatus_t;







LoRaMacSerializerStatus_t LoRaMacSerializerJoinRequest( LoRaMacMessageJoinRequest_t* macMsg );







LoRaMacSerializerStatus_t LoRaMacSerializerReJoinType1( LoRaMacMessageReJoinType1_t* macMsg );







LoRaMacSerializerStatus_t LoRaMacSerializerReJoinType0or2( LoRaMacMessageReJoinType0or2_t* macMsg );







LoRaMacSerializerStatus_t LoRaMacSerializerData( LoRaMacMessageData_t* macMsg );
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
#define __RADIO_H__ 
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
typedef enum
{
    MODEM_FSK = 0,
    MODEM_LORA,
}RadioModems_t;




typedef enum
{
    RF_IDLE = 0,
    RF_RX_RUNNING,
    RF_TX_RUNNING,
    RF_CAD,
}RadioState_t;




typedef struct
{



    void ( *TxDone )( void );



    void ( *TxTimeout )( void );
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *RxDone )( uint8_t *payload, uint16_t size, int16_t rssi, int8_t snr );



    void ( *RxTimeout )( void );



    void ( *RxError )( void );





    void ( *FhssChangeChannel )( uint8_t currentChannel );






    void ( *CadDone ) ( 
# 98 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                       _Bool 
# 98 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                            channelActivityDetected );




    void ( *GnssDone )( void );




    void ( *WifiDone )( void );
}RadioEvents_t;




struct Radio_s
{





    void ( *Init )( RadioEvents_t *events );





    RadioState_t ( *GetStatus )( void );





    void ( *SetModem )( RadioModems_t modem );





    void ( *SetChannel )( uint32_t freq );
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
   _Bool 
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
           ( *IsChannelFree )( uint32_t freq, uint32_t rxBandwidth, int16_t rssiThresh, uint32_t maxCarrierSenseTime );
# 163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    uint32_t ( *Random )( void );
# 203 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *SetRxConfig )( RadioModems_t modem, uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint32_t bandwidthAfc, uint16_t preambleLen,
                              uint16_t symbTimeout, 
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                                   _Bool 
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                        fixLen,
                              uint8_t payloadLen,
                              
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                             _Bool 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                  crcOn, 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                         _Bool 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                              freqHopOn, uint8_t hopPeriod,
                              
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                             _Bool 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                  iqInverted, 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                              _Bool 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                   rxContinuous );
# 245 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *SetTxConfig )( RadioModems_t modem, int8_t power, uint32_t fdev,
                              uint32_t bandwidth, uint32_t datarate,
                              uint8_t coderate, uint16_t preambleLen,
                              
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                             _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                  fixLen, 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                          _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                               crcOn, 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                                      _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                           freqHopOn,
                              uint8_t hopPeriod, 
# 249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                                _Bool 
# 249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                     iqInverted, uint32_t timeout );






    
# 256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
   _Bool 
# 256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
           ( *CheckRfFrequency )( uint32_t frequency );
# 283 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    uint32_t ( *TimeOnAir )( RadioModems_t modem, uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint16_t preambleLen, 
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                                   _Bool 
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                        fixLen, uint8_t payloadLen,
                              
# 286 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                             _Bool 
# 286 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                  crcOn );







    void ( *Send )( uint8_t *buffer, uint8_t size );



    void ( *Sleep )( void );



    void ( *Standby )( void );





    void ( *Rx )( uint32_t timeout );



    void ( *StartCad )( void );







    void ( *SetTxContinuousWave )( uint32_t freq, int8_t power, uint16_t time );





    int16_t ( *Rssi )( RadioModems_t modem );






    void ( *Write )( uint32_t addr, uint8_t data );






    uint8_t ( *Read )( uint32_t addr );







    void ( *WriteBuffer )( uint32_t addr, uint8_t *buffer, uint8_t size );







    void ( *ReadBuffer )( uint32_t addr, uint8_t *buffer, uint8_t size );






    void ( *SetMaxPayloadLength )( RadioModems_t modem, uint8_t max );







    void ( *SetPublicNetwork )( 
# 371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                  _Bool 
# 371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                       enable );





    uint32_t ( *GetWakeupTime )( void );



    void ( *IrqProcess )( void );
# 393 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *RxBoosted )( uint32_t timeout );
# 402 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *SetRxDutyCycle ) ( uint32_t rxTime, uint32_t sleepTime );
};







extern const struct Radio_s Radio;
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/service/lora/service_lora_arssi.h" 1

#define __SERVICE_LORA_ARSSI_H__ 
# 12 "/home/jenkins/workspace/RUI_Release/rui-v3/component/service/lora/service_lora_arssi.h"
typedef struct chan_rssi_t
{
    uint32_t chan;
    uint16_t mask;
    int8_t rssi;
} chan_rssi;

void service_lora_arssi_tx_callback(uint8_t channel);
void service_lora_arssi_rx_callback(int8_t rssi);
int32_t service_lora_get_arssi(chan_rssi *iterator);
# 50 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/system/udrv_system.h" 1

#define _UDRV_SYSTEM_H_ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/timer/udrv_timer.h" 1

#define _UDRV_TIMER_H_ 







typedef enum {
        TIMER_0 = 0,
        TIMER_1 = 1,
        TIMER_2 = 2,
        TIMER_3 = 3,
        TIMER_4 = 4,
        TIMER_ID_MAX = 5,
} TimerID_E;

typedef enum {
        SYSTIMER_LORAWAN = 0,
        SYSTIMER_TRANSPARENT_MODE = 1,
        SYSTIMER_PROTOCOL_MODE = 2,
        SYSTIMER_LED = 3,
        SYSTIMER_LCT = 4,
        SYSTIMER_ID_MAX = 5,
} SysTimerID_E;

typedef enum hwtmr_op_mode {
    HTMR_ONESHOT = 0,
    HTMR_PERIODIC = 1,
} TimerMode_E;

typedef void (*timer_handler) (void *m_data);


struct udrv_timer_api {
    void (*TIMER_INIT) (void);
    int32_t (*TIMER_CREATE) (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
    int32_t (*TIMER_START) (TimerID_E timer_id, uint32_t count, void *m_data);
    int32_t (*TIMER_STOP) (TimerID_E timer_id);
};

void udrv_timer_init (void);
int32_t udrv_timer_create (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
int32_t udrv_timer_start (TimerID_E timer_id, uint32_t count, void *m_data);
int32_t udrv_timer_stop (TimerID_E timer_id);

int32_t udrv_system_timer_create (SysTimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
int32_t udrv_system_timer_start (SysTimerID_E timer_id, uint32_t count, void *m_data);
int32_t udrv_system_timer_stop (SysTimerID_E timer_id);

void udrv_system_timer_handler_handler (void *pdata);

unsigned long udrv_get_microsecond(void);
# 11 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/system/udrv_system.h" 2

#define RANDOM_LENGTH 4
#define SEED_LENGTH 4


#define EVENT_QUEUE_SIZE (128)
#define EVENT_DATA_SIZE (8)




typedef enum
{
    UDRV_SYS_EVT_OP_SERIAL_UART = 0x00,




    UDRV_SYS_EVT_OP_SERIAL_BLE,


    UDRV_SYS_EVT_OP_LORAWAN,
    UDRV_SYS_EVT_OP_LORAWAN_JOIN_CB,

    UDRV_SYS_EVT_OP_USER_APP,
    UDRV_SYS_EVT_OP_USER_TIMER,
    UDRV_SYS_EVT_OP_SYS_TIMER,



    UDRV_SYS_EVT_OP_SERIAL_FALLBACK,
    UDRV_SYS_EVT_OP_RTC,
    UDRV_SYS_EVT_OP_GPIO_INTERRUPT,
} udrv_system_event_op_t;

typedef struct
{
    udrv_system_event_op_t request;
    void *p_context;
} udrv_system_event_t;

typedef void (*UDRV_TASK_HANDLER) (void);

void udrv_system_event_init(void);

int32_t udrv_system_event_produce(udrv_system_event_t *event);

void udrv_system_event_consume(void);

void udrv_system_reboot(void);
# 69 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/system/udrv_system.h"
void udrv_system_critical_section_begin(uint32_t *mask);

void udrv_system_critical_section_end (uint32_t *mask);

unsigned long udrv_system_random (unsigned long maxvalue);

void udrv_system_randomseed(unsigned long seed);

int32_t udrv_system_user_app_timer_create (timer_handler tmr_handler, TimerMode_E mode);

int32_t udrv_system_user_app_timer_start (uint32_t count, void *m_data);

int32_t udrv_system_user_app_timer_stop (void);

int32_t udrv_create_thread(char *name, UDRV_TASK_HANDLER handler);
void udrv_destroy_thread(char *name);
void udrv_destroy_myself(void);
void udrv_thread_lock(void);
void udrv_thread_unlock(void);
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 2





#define LORAMAC_VERSION 0x01000300





#define LORAMAC_PHY_MAXPAYLOAD 255




#define LORA_MAC_COMMAND_MAX_FOPTS_LENGTH 15




#define BACKOFF_DC_1_HOUR 100




#define BACKOFF_DC_10_HOURS 1000




#define BACKOFF_DC_24_HOURS 10000

extern 
# 84 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 84 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           udrv_powersave_in_sleep;
static udrv_system_event_t rui_lora_event = {.request = UDRV_SYS_EVT_OP_LORAWAN, .p_context = 
# 85 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                             ((void *)0)
# 85 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                                 };




enum eLoRaMacState
{
    LORAMAC_IDLE = 0x00000000,
    LORAMAC_STOPPED = 0x00000001,
    LORAMAC_TX_RUNNING = 0x00000002,
    LORAMAC_RX = 0x00000004,
    LORAMAC_ACK_RETRY = 0x00000010,
    LORAMAC_TX_DELAYED = 0x00000020,
    LORAMAC_TX_CONFIG = 0x00000040,
    LORAMAC_RX_ABORT = 0x00000080,
};




typedef enum eLoRaMacRequestHandling
{
    LORAMAC_REQUEST_HANDLING_OFF = 0,
    LORAMAC_REQUEST_HANDLING_ON = !LORAMAC_REQUEST_HANDLING_OFF
}LoRaMacRequestHandling_t;

typedef struct sLoRaMacCtx
{



    uint16_t PktBufferLen;



    uint8_t PktBuffer[255];



    LoRaMacMessage_t TxMsg;



    uint8_t AppData[255];



    uint8_t AppDataSize;



    uint8_t RxPayload[255];
    SysTime_t LastTxSysTime;



    uint32_t MacState;



    LoRaMacPrimitives_t* MacPrimitives;



    LoRaMacCallback_t* MacCallbacks;



    RadioEvents_t RadioEvents;



    TimerEvent_t TxDelayedTimer;



    TimerEvent_t RxWindowTimer1;
    TimerEvent_t RxWindowTimer2;





    uint32_t RxWindow1Delay;
    uint32_t RxWindow2Delay;



    RxConfigParams_t RxWindow1Config;
    RxConfigParams_t RxWindow2Config;
    RxConfigParams_t RxWindowCConfig;



    uint16_t AdrAckLimit;




    uint16_t AdrAckDelay;



    TimerEvent_t AckTimeoutTimer;



    uint8_t ChannelsNbTransCounter;



    uint8_t AckTimeoutRetries;



    uint8_t AckTimeoutRetriesCounter;



    
# 204 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
   _Bool 
# 204 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
        AckTimeoutRetry;




    
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
   _Bool 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
        NodeAckRequested;



    uint8_t Channel;



    TimerTime_t TxTimeOnAir;



    McpsIndication_t McpsIndication;



    McpsConfirm_t McpsConfirm;



    MlmeConfirm_t MlmeConfirm;



    MlmeIndication_t MlmeIndication;



    LoRaMacRxSlot_t RxSlot;



    LoRaMacFlags_t MacFlags;



    LoRaMacRequestHandling_t AllowRequests;



    TimerTime_t DutyCycleWaitTime;



    uint8_t MacCommandsBuffer[128];
}LoRaMacCtx_t;




static LoRaMacCtx_t MacCtx;

static LoRaMacNvmData_t Nvm;




typedef union uLoRaMacRadioEvents
{
    uint32_t Value;
    struct sEvents
    {
        uint32_t RxTimeout : 1;
        uint32_t RxError : 1;
        uint32_t TxTimeout : 1;
        uint32_t RxDone : 1;
        uint32_t TxDone : 1;
    }Events;
}LoRaMacRadioEvents_t;




LoRaMacRadioEvents_t LoRaMacRadioEvents = { .Value = 0 };




static void OnRadioTxDone( void );





static void PrepareRxDoneAbort( void );




static void OnRadioRxDone( uint8_t* payload, uint16_t size, int16_t rssi, int8_t snr );




static void OnRadioTxTimeout( void );




static void OnRadioRxError( void );




static void OnRadioRxTimeout( void );




static void OnTxDelayedTimerEvent( void* context );




static void OnRxWindow1TimerEvent( void* context );




static void OnRxWindow2TimerEvent( void* context );




static void OnAckTimeoutTimerEvent( void* context );





static void SetMlmeScheduleUplinkIndication( void );
# 354 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
static LoRaMacCryptoStatus_t GetFCntDown( AddressIdentifier_t addrID, FType_t fType, LoRaMacMessageData_t* macMsg, Version_t lrWanVersion,
                                          uint16_t maxFCntGap, FCntIdentifier_t* fCntID, uint32_t* currentDown );






static LoRaMacStatus_t SwitchClass( DeviceClass_t deviceClass );
# 371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
static uint8_t GetMaxAppPayloadWithoutFOptsLength( int8_t datarate );
# 389 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
static 
# 389 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 389 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           ValidatePayloadLength( uint8_t lenN, int8_t datarate, uint8_t fOptsLen );
# 400 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
static void ProcessMacCommands( uint8_t* payload, uint8_t macIndex, uint8_t commandsSize, int8_t snr, LoRaMacRxSlot_t rxSlot );
# 411 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
LoRaMacStatus_t Send( LoRaMacHeader_t* macHdr, uint8_t fPort, void* fBuffer, uint16_t fBufferSize );
# 420 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
LoRaMacStatus_t SendReJoinReq( JoinReqIdentifier_t joinReqType );
# 433 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
LoRaMacStatus_t PrepareFrame( LoRaMacHeader_t* macHdr, LoRaMacFrameCtrl_t* fCtrl, uint8_t fPort, void* fBuffer, uint16_t fBufferSize );
# 442 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
static LoRaMacStatus_t ScheduleTx( 
# 442 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  _Bool 
# 442 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       allowDelayedTx );







static LoRaMacStatus_t SecureFrame( uint8_t txDr, uint8_t txCh );




static void CalculateBackOff( void );
# 464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
static void RemoveMacCommands( LoRaMacRxSlot_t rxSlot, LoRaMacFrameCtrl_t fCtrl, Mcps_t request );
# 475 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
LoRaMacStatus_t SendFrameOnChannel( uint8_t channel );
# 485 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
LoRaMacStatus_t SetTxContinuousWave( uint16_t timeout );
# 497 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
LoRaMacStatus_t SetTxContinuousWave1( uint16_t timeout, uint32_t frequency, int8_t power );




static void ResetMacParameters( void );







static void RxWindowSetup( TimerEvent_t* rxTimer, RxConfigParams_t* rxConfig );





static void OpenContinuousRxCWindow( void );






static LoRaMacNvmData_t* GetNvmData( void );
# 536 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
static LoRaMacStatus_t RestoreNvmData( LoRaMacNvmData_t* contexts );
# 550 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
LoRaMacStatus_t DetermineFrameType( LoRaMacMessageData_t* macMsg, FType_t* fType );






static 
# 557 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 557 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           CheckRetransUnconfirmedUplink( void );






static 
# 564 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 564 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           CheckRetransConfirmedUplink( void );






static 
# 571 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 571 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           StopRetransmission( void );




static void CallNvmDataChangeCallback( uint16_t notifyFlags );







static void AckTimeoutRetriesProcess( void );





static void AckTimeoutRetriesFinalize( void );






static uint8_t IsRequestPending( void );






static void LoRaMacEnableRequests( LoRaMacRequestHandling_t requestState );




static void LoRaMacCheckForRxAbort( void );







static uint8_t LoRaMacCheckForBeaconAcquisition( void );




static void LoRaMacHandleMlmeRequest( void );




static void LoRaMacHandleMcpsRequest( void );




static void LoRaMacHandleRequestEvents( void );




static void LoRaMacHandleIndicationEvents( void );






static void LoRaMacHandleNvm( LoRaMacNvmData_t* nvmData );




struct
{
    TimerTime_t CurTime;
}TxDoneParams;




struct
{
    TimerTime_t LastRxDone;
    uint8_t *Payload;
    uint16_t Size;
    int16_t Rssi;
    int8_t Snr;
}RxDoneParams;

static void OnRadioTxDone( void )
{
    TxDoneParams.CurTime = TimerGetCurrentTime( );
    MacCtx.LastTxSysTime = SysTimeGet( );

    LoRaMacRadioEvents.Events.TxDone = 1;

    if( ( MacCtx.MacCallbacks != 
# 673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                     ) && ( MacCtx.MacCallbacks->MacProcessNotify != 
# 673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                     ((void *)0) 
# 673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                          ) )
    {
        MacCtx.MacCallbacks->MacProcessNotify( );
    }
}

static void OnRadioRxDone( uint8_t *payload, uint16_t size, int16_t rssi, int8_t snr )
{
    RxDoneParams.LastRxDone = TimerGetCurrentTime( );
    RxDoneParams.Payload = payload;
    RxDoneParams.Size = size;
    RxDoneParams.Rssi = rssi;
    RxDoneParams.Snr = snr;

    LoRaMacRadioEvents.Events.RxDone = 1;

    if( ( MacCtx.MacCallbacks != 
# 689 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 689 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                     ) && ( MacCtx.MacCallbacks->MacProcessNotify != 
# 689 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                     ((void *)0) 
# 689 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                          ) )
    {
        MacCtx.MacCallbacks->MacProcessNotify( );
    }
}

static void OnRadioTxTimeout( void )
{
    LoRaMacRadioEvents.Events.TxTimeout = 1;

    if( ( MacCtx.MacCallbacks != 
# 699 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 699 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                     ) && ( MacCtx.MacCallbacks->MacProcessNotify != 
# 699 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                     ((void *)0) 
# 699 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                          ) )
    {
        MacCtx.MacCallbacks->MacProcessNotify( );
    }
}

static void OnRadioRxError( void )
{
    LoRaMacRadioEvents.Events.RxError = 1;

    if( ( MacCtx.MacCallbacks != 
# 709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                     ) && ( MacCtx.MacCallbacks->MacProcessNotify != 
# 709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                     ((void *)0) 
# 709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                          ) )
    {
        MacCtx.MacCallbacks->MacProcessNotify( );
    }
}

static void OnRadioRxTimeout( void )
{
    LoRaMacRadioEvents.Events.RxTimeout = 1;

    if( ( MacCtx.MacCallbacks != 
# 719 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 719 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                     ) && ( MacCtx.MacCallbacks->MacProcessNotify != 
# 719 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                     ((void *)0) 
# 719 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                          ) )
    {
        MacCtx.MacCallbacks->MacProcessNotify( );
    }
}

static void UpdateRxSlotIdleState( void )
{
    if( Nvm.MacGroup2.DeviceClass != CLASS_C )
    {
        MacCtx.RxSlot = RX_SLOT_NONE;
    }
    else
    {
        MacCtx.RxSlot = RX_SLOT_WIN_CLASS_C;
    }
}

static void ProcessRadioTxDone( void )
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;
    SetBandTxDoneParams_t txDone;

    if( Nvm.MacGroup2.DeviceClass != CLASS_C )
    {
        Radio.Sleep( );
    }

    TimerSetValue( &MacCtx.RxWindowTimer1, MacCtx.RxWindow1Delay );
    TimerStart( &MacCtx.RxWindowTimer1 );
    TimerSetValue( &MacCtx.RxWindowTimer2, MacCtx.RxWindow2Delay );
    TimerStart( &MacCtx.RxWindowTimer2 );

    if( ( Nvm.MacGroup2.DeviceClass == CLASS_C ) || ( MacCtx.NodeAckRequested == 
# 753 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                1 
# 753 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                     ) )
    {
        getPhy.Attribute = PHY_ACK_TIMEOUT;
        phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
        TimerSetValue( &MacCtx.AckTimeoutTimer, MacCtx.RxWindow2Delay + phyParam.Value );
        TimerStart( &MacCtx.AckTimeoutTimer );
    }


    Nvm.MacGroup1.LastTxDoneTime = TxDoneParams.CurTime;


    txDone.Channel = MacCtx.Channel;
    txDone.LastTxDoneTime = TxDoneParams.CurTime;
    txDone.ElapsedTimeSinceStartUp = SysTimeSub( SysTimeGetMcuTime( ), Nvm.MacGroup2.InitializationTime );
    txDone.LastTxAirTime = MacCtx.TxTimeOnAir;
    txDone.Joined = 
# 769 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                    1
# 769 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                        ;
    if( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_NONE )
    {
        txDone.Joined = 
# 772 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                        0
# 772 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ;
    }

    RegionSetBandTxDone( Nvm.MacGroup2.Region, &txDone );

    if( MacCtx.NodeAckRequested == 
# 777 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  0 
# 777 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                        )
    {
        MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_OK;
    }
}

static void PrepareRxDoneAbort( void )
{
    MacCtx.MacState |= LORAMAC_RX_ABORT;

    if( MacCtx.NodeAckRequested == 
# 787 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  1 
# 787 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       )
    {
        OnAckTimeoutTimerEvent( 
# 789 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                               ((void *)0) 
# 789 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                    );
    }

    MacCtx.MacFlags.Bits.McpsInd = 1;
    MacCtx.MacFlags.Bits.MacDone = 1;

    UpdateRxSlotIdleState( );
}

static void ProcessRadioRxDone( void )
{
    LoRaMacHeader_t macHdr;
    ApplyCFListParams_t applyCFList;
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;
    LoRaMacCryptoStatus_t macCryptoStatus = LORAMAC_CRYPTO_ERROR;

    LoRaMacMessageData_t macMsgData;
    LoRaMacMessageJoinAccept_t macMsgJoinAccept;
    uint8_t *payload = RxDoneParams.Payload;
    uint16_t size = RxDoneParams.Size;
    int16_t rssi = RxDoneParams.Rssi;
    int8_t snr = RxDoneParams.Snr;

    uint8_t pktHeaderLen = 0;

    uint32_t downLinkCounter = 0;
    uint32_t address = Nvm.MacGroup2.DevAddr;
    uint8_t multicast = 0;
    AddressIdentifier_t addrID = UNICAST_DEV_ADDR;
    FCntIdentifier_t fCntID;

    MacCtx.McpsConfirm.AckReceived = 
# 821 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                    0
# 821 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                         ;
    MacCtx.McpsIndication.Rssi = rssi;
    MacCtx.McpsIndication.Snr = snr;
    MacCtx.McpsIndication.RxSlot = MacCtx.RxSlot;
    MacCtx.McpsIndication.Port = 0;
    MacCtx.McpsIndication.Multicast = 0;
    MacCtx.McpsIndication.FramePending = 0;
    MacCtx.McpsIndication.Buffer = 
# 828 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  ((void *)0)
# 828 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                      ;
    MacCtx.McpsIndication.BufferSize = 0;
    MacCtx.McpsIndication.RxData = 
# 830 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  0
# 830 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       ;
    MacCtx.McpsIndication.AckReceived = 
# 831 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       0
# 831 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            ;
    MacCtx.McpsIndication.DownLinkCounter = 0;
    MacCtx.McpsIndication.McpsIndication = MCPS_UNCONFIRMED;
    MacCtx.McpsIndication.DevAddress = 0;
    MacCtx.McpsIndication.DeviceTimeAnsReceived = 
# 835 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                 0
# 835 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                      ;

    Radio.Sleep( );
    TimerStop( &MacCtx.RxWindowTimer2 );


    if( LoRaMacClassBRxBeacon( payload, size ) == 
# 841 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                 1 
# 841 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                      )
    {
        MacCtx.MlmeIndication.BeaconInfo.Rssi = rssi;
        MacCtx.MlmeIndication.BeaconInfo.Snr = snr;
        return;
    }

    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {
        if( LoRaMacClassBIsPingExpected( ) == 
# 850 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             1 
# 850 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                  )
        {
            LoRaMacClassBSetPingSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
            LoRaMacClassBPingSlotTimerEvent( 
# 853 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 853 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                 );
            MacCtx.McpsIndication.RxSlot = RX_SLOT_WIN_CLASS_B_PING_SLOT;
        }
        else if( LoRaMacClassBIsMulticastExpected( ) == 
# 856 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                       1 
# 856 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                            )
        {
            LoRaMacClassBSetMulticastSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
            LoRaMacClassBMulticastSlotTimerEvent( 
# 859 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                 ((void *)0) 
# 859 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                      );
            MacCtx.McpsIndication.RxSlot = RX_SLOT_WIN_CLASS_B_MULTICAST_SLOT;
        }
    }

    macHdr.Value = payload[pktHeaderLen++];

    switch( macHdr.Bits.MType )
    {
        case FRAME_TYPE_JOIN_ACCEPT:

            if( size < ( 1 + 3 + 3 + 4 + 1 + 1 + 4 ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }
            macMsgJoinAccept.Buffer = payload;
            macMsgJoinAccept.BufSize = size;


            if( Nvm.MacGroup2.NetworkActivation != ACTIVATION_TYPE_NONE )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }
            macCryptoStatus = LoRaMacCryptoHandleJoinAccept( JOIN_REQ, SecureElementGetJoinEui( ), &macMsgJoinAccept );

            if( LORAMAC_CRYPTO_SUCCESS == macCryptoStatus )
            {

                Nvm.MacGroup2.NetID = ( uint32_t ) macMsgJoinAccept.NetID[0];
                Nvm.MacGroup2.NetID |= ( ( uint32_t ) macMsgJoinAccept.NetID[1] << 8 );
                Nvm.MacGroup2.NetID |= ( ( uint32_t ) macMsgJoinAccept.NetID[2] << 16 );


                Nvm.MacGroup2.DevAddr = macMsgJoinAccept.DevAddr;


                Nvm.MacGroup2.MacParams.Rx1DrOffset = macMsgJoinAccept.DLSettings.Bits.RX1DRoffset;
                Nvm.MacGroup2.MacParams.Rx2Channel.Datarate = macMsgJoinAccept.DLSettings.Bits.RX2DataRate;
                Nvm.MacGroup2.MacParams.RxCChannel.Datarate = macMsgJoinAccept.DLSettings.Bits.RX2DataRate;


                Nvm.MacGroup2.MacParams.ReceiveDelay1 = macMsgJoinAccept.RxDelay;
                if( Nvm.MacGroup2.MacParams.ReceiveDelay1 == 0 )
                {
                    Nvm.MacGroup2.MacParams.ReceiveDelay1 = 1;
                }
                Nvm.MacGroup2.MacParams.ReceiveDelay1 *= 1000;
                Nvm.MacGroup2.MacParams.ReceiveDelay2 = Nvm.MacGroup2.MacParams.ReceiveDelay1 + 1000;

                Nvm.MacGroup2.Version.Fields.Minor = 0;


                applyCFList.Payload = macMsgJoinAccept.CFList;

                applyCFList.Size = size - 17;

                RegionApplyCFList( Nvm.MacGroup2.Region, &applyCFList );

                Nvm.MacGroup2.NetworkActivation = ACTIVATION_TYPE_OTAA;


                if( LoRaMacConfirmQueueIsCmdActive( MLME_JOIN ) == 
# 924 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                  1 
# 924 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                       )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_JOIN );
                }
            }
            else
            {

                if( LoRaMacConfirmQueueIsCmdActive( MLME_JOIN ) == 
# 932 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                  1 
# 932 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                       )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_JOIN_FAIL, MLME_JOIN );
                }
            }
            break;
        case FRAME_TYPE_DATA_CONFIRMED_DOWN:
            MacCtx.McpsIndication.McpsIndication = MCPS_CONFIRMED;

        case FRAME_TYPE_DATA_UNCONFIRMED_DOWN:

            getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
            getPhy.Datarate = MacCtx.McpsIndication.RxDatarate;
            getPhy.Attribute = PHY_MAX_PAYLOAD;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
            if( ( ( ( ( 0 ) > ( ( int16_t )( ( int16_t ) size - ( int16_t ) ( 1 + ( 4 + 1 + 2 ) + 1 + 4 ) ) ) ) ? ( 0 ) : ( ( int16_t )( ( int16_t ) size - ( int16_t ) ( 1 + ( 4 + 1 + 2 ) + 1 + 4 ) ) ) ) > ( int16_t )phyParam.Value ) ||
                ( size < ( 1 + ( 4 + 1 + 2 ) + 4 ) ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }
            macMsgData.Buffer = payload;
            macMsgData.BufSize = size;
            macMsgData.FRMPayload = MacCtx.RxPayload;
            macMsgData.FRMPayloadSize = 255;

            if( LORAMAC_PARSER_SUCCESS != LoRaMacParserData( &macMsgData ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }


            MacCtx.McpsIndication.DevAddress = macMsgData.FHDR.DevAddr;

            FType_t fType;
            if( LORAMAC_STATUS_OK != DetermineFrameType( &macMsgData, &fType ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }


            multicast = 0;
            downLinkCounter = 0;
            for( uint8_t i = 0; i < 4; i++ )
            {
                if( ( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.Address == macMsgData.FHDR.DevAddr ) &&
                    ( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.IsEnabled == 
# 983 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                      1 
# 983 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                           ) )
                {
                    multicast = 1;
                    addrID = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.GroupID;
                    downLinkCounter = *( Nvm.MacGroup2.MulticastChannelList[i].DownLinkCounter );
                    address = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.Address;
                    if( Nvm.MacGroup2.DeviceClass == CLASS_C )
                    {
                        MacCtx.McpsIndication.RxSlot = RX_SLOT_WIN_CLASS_C_MULTICAST;
                    }
                    break;
                }
            }


            if( ( multicast == 1 ) && ( ( fType != FRAME_TYPE_D ) ||
                                        ( macMsgData.FHDR.FCtrl.Bits.Ack != 0 ) ||
                                        ( macMsgData.FHDR.FCtrl.Bits.AdrAckReq != 0 ) ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }


            getPhy.Attribute = PHY_MAX_FCNT_GAP;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );


            macCryptoStatus = GetFCntDown( addrID, fType, &macMsgData, Nvm.MacGroup2.Version, phyParam.Value, &fCntID, &downLinkCounter );
            if( macCryptoStatus != LORAMAC_CRYPTO_SUCCESS )
            {
                if( macCryptoStatus == LORAMAC_CRYPTO_FAIL_FCNT_DUPLICATED )
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_DOWNLINK_REPEATED;
                    if( ( Nvm.MacGroup2.Version.Fields.Minor == 0 ) && ( macHdr.Bits.MType == FRAME_TYPE_DATA_CONFIRMED_DOWN ) && ( Nvm.MacGroup1.LastRxMic == macMsgData.MIC ) )
                    {
                        Nvm.MacGroup1.SrvAckRequested = 
# 1021 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                       1
# 1021 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                           ;
                    }
                }
                else if( macCryptoStatus == LORAMAC_CRYPTO_FAIL_MAX_GAP_FCNT )
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_DOWNLINK_TOO_MANY_FRAMES_LOSS;
                }
                else
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                }
                MacCtx.McpsIndication.DownLinkCounter = downLinkCounter;
                PrepareRxDoneAbort( );
                return;
            }

            macCryptoStatus = LoRaMacCryptoUnsecureMessage( addrID, address, fCntID, downLinkCounter, &macMsgData );
            if( macCryptoStatus != LORAMAC_CRYPTO_SUCCESS )
            {
                if( macCryptoStatus == LORAMAC_CRYPTO_FAIL_ADDRESS )
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ADDRESS_FAIL;
                }
                else
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_MIC_FAIL;
                }
                PrepareRxDoneAbort( );
                return;
            }


            MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_OK;
            MacCtx.McpsIndication.Multicast = multicast;
            MacCtx.McpsIndication.FramePending = macMsgData.FHDR.FCtrl.Bits.FPending;
            MacCtx.McpsIndication.Buffer = 
# 1060 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                          ((void *)0)
# 1060 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              ;
            MacCtx.McpsIndication.BufferSize = 0;
            MacCtx.McpsIndication.DownLinkCounter = downLinkCounter;
            MacCtx.McpsIndication.AckReceived = macMsgData.FHDR.FCtrl.Bits.Ack;

            MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_OK;
            MacCtx.McpsConfirm.AckReceived = macMsgData.FHDR.FCtrl.Bits.Ack;


            if( ( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_1 ) ||
                ( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_2 ) )
            {
                Nvm.MacGroup1.AdrAckCounter = 0;
            }


            if( multicast == 1 )
            {
                MacCtx.McpsIndication.McpsIndication = MCPS_MULTICAST;
            }
            else
            {
                if( macHdr.Bits.MType == FRAME_TYPE_DATA_CONFIRMED_DOWN )
                {
                    Nvm.MacGroup1.SrvAckRequested = 
# 1084 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                   1
# 1084 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                       ;
                    if( Nvm.MacGroup2.Version.Fields.Minor == 0 )
                    {
                        Nvm.MacGroup1.LastRxMic = macMsgData.MIC;
                    }
                    MacCtx.McpsIndication.McpsIndication = MCPS_CONFIRMED;
                }
                else
                {
                    Nvm.MacGroup1.SrvAckRequested = 
# 1093 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                   0
# 1093 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                        ;
                    MacCtx.McpsIndication.McpsIndication = MCPS_UNCONFIRMED;
                }
            }

            RemoveMacCommands( MacCtx.McpsIndication.RxSlot, macMsgData.FHDR.FCtrl, MacCtx.McpsConfirm.McpsRequest );

            switch( fType )
            {
                case FRAME_TYPE_A:
                {







                    ProcessMacCommands( macMsgData.FHDR.FOpts, 0, macMsgData.FHDR.FCtrl.Bits.FOptsLen, snr, MacCtx.McpsIndication.RxSlot );
                    MacCtx.McpsIndication.Port = macMsgData.FPort;
                    MacCtx.McpsIndication.Buffer = macMsgData.FRMPayload;
                    MacCtx.McpsIndication.BufferSize = macMsgData.FRMPayloadSize;
                    MacCtx.McpsIndication.RxData = 
# 1115 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                  1
# 1115 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                      ;
                    break;
                }
                case FRAME_TYPE_B:
                {







                    ProcessMacCommands( macMsgData.FHDR.FOpts, 0, macMsgData.FHDR.FCtrl.Bits.FOptsLen, snr, MacCtx.McpsIndication.RxSlot );
                    MacCtx.McpsIndication.Port = macMsgData.FPort;
                    break;
                }
                case FRAME_TYPE_C:
                {







                    ProcessMacCommands( macMsgData.FRMPayload, 0, macMsgData.FRMPayloadSize, snr, MacCtx.McpsIndication.RxSlot );
                    MacCtx.McpsIndication.Port = macMsgData.FPort;
                    break;
                }
                case FRAME_TYPE_D:
                {







                    MacCtx.McpsIndication.Port = macMsgData.FPort;
                    MacCtx.McpsIndication.Buffer = macMsgData.FRMPayload;
                    MacCtx.McpsIndication.BufferSize = macMsgData.FRMPayloadSize;
                    MacCtx.McpsIndication.RxData = 
# 1156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                  1
# 1156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                      ;
                    break;
                }
                default:
                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                    PrepareRxDoneAbort( );
                    break;
            }



            MacCtx.MacFlags.Bits.McpsInd = 1;

            break;
        case FRAME_TYPE_PROPRIETARY:
            memcpy1( MacCtx.RxPayload, &payload[pktHeaderLen], size - pktHeaderLen );

            MacCtx.McpsIndication.McpsIndication = MCPS_PROPRIETARY;
            MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_OK;
            MacCtx.McpsIndication.Buffer = MacCtx.RxPayload;
            MacCtx.McpsIndication.BufferSize = size - pktHeaderLen;

            MacCtx.MacFlags.Bits.McpsInd = 1;
            break;
        default:
            MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
            PrepareRxDoneAbort( );
            break;
    }


    if( MacCtx.NodeAckRequested == 
# 1187 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  1 
# 1187 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       )
    {
        if( MacCtx.McpsConfirm.AckReceived == 
# 1189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             1 
# 1189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                  )
        {
            OnAckTimeoutTimerEvent( 
# 1191 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                   ((void *)0) 
# 1191 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                        );
        }
    }
    else
    {
        if( Nvm.MacGroup2.DeviceClass == CLASS_C )
        {
            OnAckTimeoutTimerEvent( 
# 1198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                   ((void *)0) 
# 1198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                        );
        }
    }
    MacCtx.MacFlags.Bits.MacDone = 1;

    UpdateRxSlotIdleState( );
}

static void ProcessRadioTxTimeout( void )
{
    if( Nvm.MacGroup2.DeviceClass != CLASS_C )
    {
        Radio.Sleep( );
    }
    UpdateRxSlotIdleState( );

    MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_TX_TIMEOUT;
    LoRaMacConfirmQueueSetStatusCmn( LORAMAC_EVENT_INFO_STATUS_TX_TIMEOUT );
    if( MacCtx.NodeAckRequested == 
# 1216 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  1 
# 1216 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       )
    {
        MacCtx.AckTimeoutRetry = 
# 1218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                1
# 1218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                    ;
    }
    MacCtx.MacFlags.Bits.MacDone = 1;
}

static void HandleRadioRxErrorTimeout( LoRaMacEventInfoStatus_t rx1EventInfoStatus, LoRaMacEventInfoStatus_t rx2EventInfoStatus )
{
    
# 1225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
   _Bool 
# 1225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
        classBRx = 
# 1225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                   0
# 1225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                        ;

    if( Nvm.MacGroup2.DeviceClass != CLASS_C )
    {
        Radio.Sleep( );
    }

    if( LoRaMacClassBIsBeaconExpected( ) == 
# 1232 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           1 
# 1232 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
    {
        LoRaMacClassBSetBeaconState( BEACON_STATE_TIMEOUT );
        LoRaMacClassBBeaconTimerEvent( 
# 1235 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                      ((void *)0) 
# 1235 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                           );
        classBRx = 
# 1236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                  1
# 1236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                      ;
    }
    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {
        if( LoRaMacClassBIsPingExpected( ) == 
# 1240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             1 
# 1240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                  )
        {
            LoRaMacClassBSetPingSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
            LoRaMacClassBPingSlotTimerEvent( 
# 1243 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 1243 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                 );
            classBRx = 
# 1244 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                      1
# 1244 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                          ;
        }
        if( LoRaMacClassBIsMulticastExpected( ) == 
# 1246 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                  1 
# 1246 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                       )
        {
            LoRaMacClassBSetMulticastSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
            LoRaMacClassBMulticastSlotTimerEvent( 
# 1249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                 ((void *)0) 
# 1249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                      );
            classBRx = 
# 1250 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                      1
# 1250 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                          ;
        }
    }

    if( classBRx == 
# 1254 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                   0 
# 1254 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                         )
    {
        if( MacCtx.RxSlot == RX_SLOT_WIN_1 )
        {
            if( MacCtx.NodeAckRequested == 
# 1258 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                          1 
# 1258 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                               )
            {
                MacCtx.McpsConfirm.Status = rx1EventInfoStatus;
            }
            LoRaMacConfirmQueueSetStatusCmn( rx1EventInfoStatus );

            if( TimerGetElapsedTime( Nvm.MacGroup1.LastTxDoneTime ) >= MacCtx.RxWindow2Delay )
            {
                TimerStop( &MacCtx.RxWindowTimer2 );
                MacCtx.MacFlags.Bits.MacDone = 1;
            }
        }
        else
        {
            if( MacCtx.NodeAckRequested == 
# 1272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                          1 
# 1272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                               )
            {
                MacCtx.McpsConfirm.Status = rx2EventInfoStatus;
            }
            LoRaMacConfirmQueueSetStatusCmn( rx2EventInfoStatus );

            if( Nvm.MacGroup2.DeviceClass != CLASS_C )
            {
                MacCtx.MacFlags.Bits.MacDone = 1;
            }
        }
    }

    UpdateRxSlotIdleState( );
}

static void ProcessRadioRxError( void )
{
    HandleRadioRxErrorTimeout( LORAMAC_EVENT_INFO_STATUS_RX1_ERROR, LORAMAC_EVENT_INFO_STATUS_RX2_ERROR );
}

static void ProcessRadioRxTimeout( void )
{
    HandleRadioRxErrorTimeout( LORAMAC_EVENT_INFO_STATUS_RX1_TIMEOUT, LORAMAC_EVENT_INFO_STATUS_RX2_TIMEOUT );
}

static void LoRaMacHandleIrqEvents( void )
{
    LoRaMacRadioEvents_t events;

    uint32_t mask; BoardCriticalSectionBegin( &mask );
    events = LoRaMacRadioEvents;
    LoRaMacRadioEvents.Value = 0;
    BoardCriticalSectionEnd( &mask );

    if( events.Value != 0 )
    {
        if( events.Events.TxDone == 1 )
        {
            ProcessRadioTxDone( );
        }
        if( events.Events.RxDone == 1 )
        {
            ProcessRadioRxDone( );
        }
        if( events.Events.TxTimeout == 1 )
        {
            ProcessRadioTxTimeout( );
        }
        if( events.Events.RxError == 1 )
        {
            ProcessRadioRxError( );
        }
        if( events.Events.RxTimeout == 1 )
        {
            ProcessRadioRxTimeout( );
        }
    }
}


# 1332 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
_Bool 
# 1332 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
    LoRaMacIsBusy( void )
{
    if( ( MacCtx.MacState == LORAMAC_IDLE ) &&
        ( MacCtx.AllowRequests == LORAMAC_REQUEST_HANDLING_ON ) )
    {
        return 
# 1337 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
              0
# 1337 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                   ;
    }
    return 
# 1339 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
          1
# 1339 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
              ;
}


static void LoRaMacEnableRequests( LoRaMacRequestHandling_t requestState )
{
    MacCtx.AllowRequests = requestState;
}

static void LoRaMacHandleRequestEvents( void )
{

    LoRaMacFlags_t reqEvents = MacCtx.MacFlags;

    if( MacCtx.MacState == LORAMAC_IDLE )
    {

        if( MacCtx.MacFlags.Bits.McpsReq == 1 )
        {
            MacCtx.MacFlags.Bits.McpsReq = 0;
        }

        if( MacCtx.MacFlags.Bits.MlmeReq == 1 )
        {
            MacCtx.MacFlags.Bits.MlmeReq = 0;
        }


        LoRaMacEnableRequests( LORAMAC_REQUEST_HANDLING_ON );


        if( reqEvents.Bits.McpsReq == 1 )
        {
            MacCtx.MacPrimitives->MacMcpsConfirm( &MacCtx.McpsConfirm );
        }

        if( reqEvents.Bits.MlmeReq == 1 )
        {
            LoRaMacConfirmQueueHandleCb( &MacCtx.MlmeConfirm );
            if( LoRaMacConfirmQueueGetCnt( ) > 0 )
            {
                MacCtx.MacFlags.Bits.MlmeReq = 1;
            }
        }


        LoRaMacClassBResumeBeaconing( );


        MacCtx.MacFlags.Bits.MacDone = 0;
    }
}

static void LoRaMacHandleScheduleUplinkEvent( void )
{

    if( MacCtx.MacState == LORAMAC_IDLE )
    {

        
# 1398 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
       _Bool 
# 1398 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
            isStickyMacCommandPending = 
# 1398 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                        0
# 1398 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             ;
        LoRaMacCommandsStickyCmdsPending( &isStickyMacCommandPending );
        if( isStickyMacCommandPending == 
# 1400 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                        1 
# 1400 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             )
        {
            SetMlmeScheduleUplinkIndication( );
        }
    }
}

static void LoRaMacHandleIndicationEvents( void )
{

    if( MacCtx.MacFlags.Bits.MlmeInd == 1 )
    {
        MacCtx.MacFlags.Bits.MlmeInd = 0;
        MacCtx.MacPrimitives->MacMlmeIndication( &MacCtx.MlmeIndication );
    }

    if( MacCtx.MacFlags.Bits.MlmeSchedUplinkInd == 1 )
    {
        MlmeIndication_t schduleUplinkIndication;
        schduleUplinkIndication.MlmeIndication = MLME_SCHEDULE_UPLINK;
        schduleUplinkIndication.Status = LORAMAC_EVENT_INFO_STATUS_OK;

        MacCtx.MacPrimitives->MacMlmeIndication( &schduleUplinkIndication );
        MacCtx.MacFlags.Bits.MlmeSchedUplinkInd = 0;
    }


    if( MacCtx.MacFlags.Bits.McpsInd == 1 )
    {
        MacCtx.MacFlags.Bits.McpsInd = 0;
        MacCtx.MacPrimitives->MacMcpsIndication( &MacCtx.McpsIndication );
    }
}

static void LoRaMacHandleMcpsRequest( void )
{

    if( MacCtx.MacFlags.Bits.McpsReq == 1 )
    {
        
# 1439 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
       _Bool 
# 1439 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
            stopRetransmission = 
# 1439 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                 0
# 1439 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                      ;
        
# 1440 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
       _Bool 
# 1440 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
            waitForRetransmission = 
# 1440 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                    0
# 1440 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                         ;

        if( ( MacCtx.McpsConfirm.McpsRequest == MCPS_UNCONFIRMED ) ||
            ( MacCtx.McpsConfirm.McpsRequest == MCPS_PROPRIETARY ) )
        {
            stopRetransmission = CheckRetransUnconfirmedUplink( );
        }
        else if( MacCtx.McpsConfirm.McpsRequest == MCPS_CONFIRMED )
        {
            if( MacCtx.AckTimeoutRetry == 
# 1449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         1 
# 1449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              )
            {
                stopRetransmission = CheckRetransConfirmedUplink( );

                if( Nvm.MacGroup2.Version.Fields.Minor == 0 )
                {
                    if( stopRetransmission == 
# 1455 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             0 
# 1455 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                   )
                    {
                        AckTimeoutRetriesProcess( );
                    }
                    else
                    {
                        AckTimeoutRetriesFinalize( );
                    }
                }
            }
            else
            {
                waitForRetransmission = 
# 1467 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       1
# 1467 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                           ;
            }
        }

        if( stopRetransmission == 
# 1471 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                 1 
# 1471 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                      )
        {
            TimerStop( &MacCtx.TxDelayedTimer );
            MacCtx.MacState &= ~LORAMAC_TX_DELAYED;
            StopRetransmission( );
        }
        else if( waitForRetransmission == 
# 1477 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         0 
# 1477 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                               )
        {
            MacCtx.MacFlags.Bits.MacDone = 0;

            MacCtx.AckTimeoutRetry = 
# 1481 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                    0
# 1481 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                         ;

            OnTxDelayedTimerEvent( 
# 1483 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  ((void *)0) 
# 1483 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       );
        }
    }
}

static void LoRaMacHandleMlmeRequest( void )
{

    if( MacCtx.MacFlags.Bits.MlmeReq == 1 )
    {
        if( LoRaMacConfirmQueueIsCmdActive( MLME_JOIN ) == 
# 1493 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                          1 
# 1493 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                               )
        {
            if( LoRaMacConfirmQueueGetStatus( MLME_JOIN ) == LORAMAC_EVENT_INFO_STATUS_OK )
            {
                MacCtx.ChannelsNbTransCounter = 0;
            }
            MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
        }
        else if( ( LoRaMacConfirmQueueIsCmdActive( MLME_TXCW ) == 
# 1501 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                 1 
# 1501 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                      ) ||
                 ( LoRaMacConfirmQueueIsCmdActive( MLME_TXCW_1 ) == 
# 1502 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                   1 
# 1502 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                        ) )
        {
            MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
        }
    }
}

static uint8_t LoRaMacCheckForBeaconAcquisition( void )
{
    if( ( LoRaMacConfirmQueueIsCmdActive( MLME_BEACON_ACQUISITION ) == 
# 1511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                      1 
# 1511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                           ) &&
        ( MacCtx.MacFlags.Bits.McpsReq == 0 ) )
    {
        if( MacCtx.MacFlags.Bits.MlmeReq == 1 )
        {
            MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
            return 0x01;
        }
    }
    return 0x00;
}

static void LoRaMacCheckForRxAbort( void )
{

    if( ( MacCtx.MacState & LORAMAC_RX_ABORT ) == LORAMAC_RX_ABORT )
    {
        MacCtx.MacState &= ~LORAMAC_RX_ABORT;
        MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
    }
}

static void LoRaMacHandleNvm( LoRaMacNvmData_t* nvmData )
{
    uint32_t crc = 0;
    uint16_t notifyFlags = 0x00;

    if( MacCtx.MacState != LORAMAC_IDLE )
    {
        return;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->Crypto, sizeof( nvmData->Crypto ) -
                                                sizeof( nvmData->Crypto.Crc32 ) );
    if( crc != nvmData->Crypto.Crc32 )
    {
        nvmData->Crypto.Crc32 = crc;
        notifyFlags |= 0x01;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->MacGroup1, sizeof( nvmData->MacGroup1 ) -
                                                   sizeof( nvmData->MacGroup1.Crc32 ) );
    if( crc != nvmData->MacGroup1.Crc32 )
    {
        nvmData->MacGroup1.Crc32 = crc;
        notifyFlags |= 0x02;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->MacGroup2, sizeof( nvmData->MacGroup2 ) -
                                                   sizeof( nvmData->MacGroup2.Crc32 ) );
    if( crc != nvmData->MacGroup2.Crc32 )
    {
        nvmData->MacGroup2.Crc32 = crc;
        notifyFlags |= 0x04;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->SecureElement, sizeof( nvmData->SecureElement ) -
                                                       sizeof( nvmData->SecureElement.Crc32 ) );
    if( crc != nvmData->SecureElement.Crc32 )
    {
        nvmData->SecureElement.Crc32 = crc;
        notifyFlags |= 0x08;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->RegionGroup1, sizeof( nvmData->RegionGroup1 ) -
                                                sizeof( nvmData->RegionGroup1.Crc32 ) );
    if( crc != nvmData->RegionGroup1.Crc32 )
    {
        nvmData->RegionGroup1.Crc32 = crc;
        notifyFlags |= 0x10;
    }

    crc = Crc32( ( uint8_t* ) &nvmData->RegionGroup2, sizeof( nvmData->RegionGroup2 ) -
                                                sizeof( nvmData->RegionGroup2.Crc32 ) );
    if( crc != nvmData->RegionGroup2.Crc32 )
    {
        nvmData->RegionGroup2.Crc32 = crc;
        notifyFlags |= 0x20;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->ClassB, sizeof( nvmData->ClassB ) -
                                                sizeof( nvmData->ClassB.Crc32 ) );
    if( crc != nvmData->ClassB.Crc32 )
    {
        nvmData->ClassB.Crc32 = crc;
        notifyFlags |= 0x40;
    }

    CallNvmDataChangeCallback( notifyFlags );
}


void LoRaMacProcess( void )
{
    uint8_t noTx = 
# 1611 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                  0
# 1611 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                       ;

    LoRaMacHandleIrqEvents( );
    LoRaMacClassBProcess( );


    if( MacCtx.MacFlags.Bits.MacDone == 1 )
    {
        LoRaMacEnableRequests( LORAMAC_REQUEST_HANDLING_OFF );
        LoRaMacCheckForRxAbort( );


        if( IsRequestPending( ) > 0 )
        {
            noTx |= LoRaMacCheckForBeaconAcquisition( );
        }

        if( noTx == 0x00 )
        {
            LoRaMacHandleMlmeRequest( );
            LoRaMacHandleMcpsRequest( );
        }
        LoRaMacHandleRequestEvents( );
        LoRaMacHandleScheduleUplinkEvent( );
        LoRaMacHandleNvm( &Nvm );
        LoRaMacEnableRequests( LORAMAC_REQUEST_HANDLING_ON );
    }
    LoRaMacHandleIndicationEvents( );
    if( MacCtx.RxSlot == RX_SLOT_WIN_CLASS_C )
    {
        OpenContinuousRxCWindow( );
    }
}

static void OnTxDelayedTimerEvent( void* context )
{
    TimerStop( &MacCtx.TxDelayedTimer );
    MacCtx.MacState &= ~LORAMAC_TX_DELAYED;


    switch( ScheduleTx( 
# 1651 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                       1 
# 1651 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                            ) )
    {
        case LORAMAC_STATUS_OK:
        case LORAMAC_STATUS_DUTYCYCLE_RESTRICTED:
        {
            break;
        }
        default:
        {

            MacCtx.McpsConfirm.Datarate = Nvm.MacGroup1.ChannelsDatarate;
            MacCtx.McpsConfirm.NbRetries = MacCtx.AckTimeoutRetriesCounter;
            MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_TX_DR_PAYLOAD_SIZE_ERROR;
            LoRaMacConfirmQueueSetStatusCmn( LORAMAC_EVENT_INFO_STATUS_TX_DR_PAYLOAD_SIZE_ERROR );
            StopRetransmission( );
            break;
        }
    }
}

static void OnRxWindow1TimerEvent( void* context )
{
    MacCtx.RxWindow1Config.Channel = MacCtx.Channel;
    MacCtx.RxWindow1Config.DrOffset = Nvm.MacGroup2.MacParams.Rx1DrOffset;
    MacCtx.RxWindow1Config.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
    MacCtx.RxWindow1Config.RxContinuous = 
# 1676 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         0
# 1676 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              ;
    MacCtx.RxWindow1Config.RxSlot = RX_SLOT_WIN_1;

    RxWindowSetup( &MacCtx.RxWindowTimer1, &MacCtx.RxWindow1Config );
    udrv_system_event_produce(&rui_lora_event);
    udrv_powersave_in_sleep = 
# 1681 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                             0
# 1681 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                  ;
}

static void OnRxWindow2TimerEvent( void* context )
{


    if( MacCtx.RxSlot == RX_SLOT_WIN_1 )
    {
        return;
    }
    MacCtx.RxWindow2Config.Channel = MacCtx.Channel;
    MacCtx.RxWindow2Config.Frequency = Nvm.MacGroup2.MacParams.Rx2Channel.Frequency;
    MacCtx.RxWindow2Config.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
    MacCtx.RxWindow2Config.RxContinuous = 
# 1695 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         0
# 1695 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              ;
    MacCtx.RxWindow2Config.RxSlot = RX_SLOT_WIN_2;

    RxWindowSetup( &MacCtx.RxWindowTimer2, &MacCtx.RxWindow2Config );
    udrv_system_event_produce(&rui_lora_event);
    udrv_powersave_in_sleep = 
# 1700 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                             0
# 1700 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                  ;
}

static void OnAckTimeoutTimerEvent( void* context )
{
    TimerStop( &MacCtx.AckTimeoutTimer );

    if( MacCtx.NodeAckRequested == 
# 1707 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  1 
# 1707 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       )
    {
        MacCtx.AckTimeoutRetry = 
# 1709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                1
# 1709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                    ;
    }
    if( Nvm.MacGroup2.DeviceClass == CLASS_C )
    {
        MacCtx.MacFlags.Bits.MacDone = 1;
    }
    if( ( MacCtx.MacCallbacks != 
# 1715 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 1715 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                     ) && ( MacCtx.MacCallbacks->MacProcessNotify != 
# 1715 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                     ((void *)0) 
# 1715 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                          ) )
    {
        MacCtx.MacCallbacks->MacProcessNotify( );
    }
    udrv_system_event_produce(&rui_lora_event);
    udrv_powersave_in_sleep = 
# 1720 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                             0
# 1720 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                  ;
}

static LoRaMacCryptoStatus_t GetFCntDown( AddressIdentifier_t addrID, FType_t fType, LoRaMacMessageData_t* macMsg, Version_t lrWanVersion,
                                          uint16_t maxFCntGap, FCntIdentifier_t* fCntID, uint32_t* currentDown )
{
    if( ( macMsg == 
# 1726 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                   ((void *)0) 
# 1726 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                        ) || ( fCntID == 
# 1726 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         ((void *)0) 
# 1726 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              ) ||
        ( currentDown == 
# 1727 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                        ((void *)0) 
# 1727 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ) )
    {
        return LORAMAC_CRYPTO_ERROR_NPE;
    }


    switch( addrID )
    {
        case UNICAST_DEV_ADDR:
            if( lrWanVersion.Fields.Minor == 1 )
            {
                if( ( fType == FRAME_TYPE_A ) || ( fType == FRAME_TYPE_D ) )
                {
                    *fCntID = A_FCNT_DOWN;
                }
                else
                {
                    *fCntID = N_FCNT_DOWN;
                }
            }
            else
            {
                *fCntID = FCNT_DOWN;
            }
            break;
        case MULTICAST_0_ADDR:
            *fCntID = MC_FCNT_DOWN_0;
            break;
        case MULTICAST_1_ADDR:
            *fCntID = MC_FCNT_DOWN_1;
            break;
        case MULTICAST_2_ADDR:
            *fCntID = MC_FCNT_DOWN_2;
            break;
        case MULTICAST_3_ADDR:
            *fCntID = MC_FCNT_DOWN_3;
            break;
        default:
            return LORAMAC_CRYPTO_FAIL_FCNT_ID;
    }

    return LoRaMacCryptoGetFCntDown( *fCntID, maxFCntGap, macMsg->FHDR.FCnt, currentDown );
}

static LoRaMacStatus_t SwitchClass( DeviceClass_t deviceClass )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_PARAMETER_INVALID;

    switch( Nvm.MacGroup2.DeviceClass )
    {
        case CLASS_A:
        {
            if( deviceClass == CLASS_A )
            {

                Nvm.MacGroup2.MacParams.RxCChannel = Nvm.MacGroup2.MacParams.Rx2Channel;
            }
            if( deviceClass == CLASS_B )
            {
                status = LoRaMacClassBSwitchClass( deviceClass );
                if( status == LORAMAC_STATUS_OK )
                {
                    Nvm.MacGroup2.DeviceClass = deviceClass;
                }
            }

            if( deviceClass == CLASS_C )
            {
                Nvm.MacGroup2.DeviceClass = deviceClass;

                MacCtx.RxWindowCConfig = MacCtx.RxWindow2Config;
                MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C;

                for( int8_t i = 0; i < 4; i++ )
                {
                    if( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.IsEnabled == 
# 1802 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                        1 
# 1802 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                             )

                    {
                        Nvm.MacGroup2.MacParams.RxCChannel.Frequency = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.ClassC.Frequency;
                        Nvm.MacGroup2.MacParams.RxCChannel.Datarate = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.ClassC.Datarate;

                        MacCtx.RxWindowCConfig.Channel = MacCtx.Channel;
                        MacCtx.RxWindowCConfig.Frequency = Nvm.MacGroup2.MacParams.RxCChannel.Frequency;
                        MacCtx.RxWindowCConfig.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
                        MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C_MULTICAST;
                        MacCtx.RxWindowCConfig.RxContinuous = 
# 1812 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                             1
# 1812 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                 ;
                        break;
                    }
                }


                MacCtx.NodeAckRequested = 
# 1818 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         0
# 1818 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              ;

                Radio.Sleep( );

                OpenContinuousRxCWindow( );

                status = LORAMAC_STATUS_OK;
            }
            break;
        }
        case CLASS_B:
        {
            status = LoRaMacClassBSwitchClass( deviceClass );
            if( status == LORAMAC_STATUS_OK )
            {
                Nvm.MacGroup2.DeviceClass = deviceClass;
            }
            break;
        }
        case CLASS_C:
        {
            if( deviceClass == CLASS_A )
            {
                Nvm.MacGroup2.DeviceClass = deviceClass;


                Radio.Sleep( );

                status = LORAMAC_STATUS_OK;
            }
            break;
        }
    }

    return status;
}

static uint8_t GetMaxAppPayloadWithoutFOptsLength( int8_t datarate )
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;


    getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
    getPhy.Datarate = datarate;
    getPhy.Attribute = PHY_MAX_PAYLOAD;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

    return phyParam.Value;
}

static 
# 1869 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 1869 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           ValidatePayloadLength( uint8_t lenN, int8_t datarate, uint8_t fOptsLen )
{
    uint16_t maxN = 0;
    uint16_t payloadSize = 0;

    maxN = GetMaxAppPayloadWithoutFOptsLength( datarate );


    payloadSize = ( lenN + fOptsLen );


    if( ( payloadSize <= maxN ) && ( payloadSize <= 255 ) )
    {
        return 
# 1882 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
              1
# 1882 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                  ;
    }
    return 
# 1884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
          0
# 1884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
               ;
}

uint16_t GetMaxAppPayloadWithFOptsLength( void )
{
    size_t macCmdsSize = 0;
    size_t maxPayloadSize = 0;

    LoRaMacCommandsGetSizeSerializedCmds( &macCmdsSize );

    maxPayloadSize = GetMaxAppPayloadWithoutFOptsLength(Nvm.MacGroup1.ChannelsDatarate);

    return (maxPayloadSize - macCmdsSize);
}

static void SetMlmeScheduleUplinkIndication( void )
{
    MacCtx.MacFlags.Bits.MlmeSchedUplinkInd = 1;
}

static void ProcessMacCommands( uint8_t *payload, uint8_t macIndex, uint8_t commandsSize, int8_t snr, LoRaMacRxSlot_t rxSlot )
{
    uint8_t status = 0;
    
# 1907 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
   _Bool 
# 1907 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
        adrBlockFound = 
# 1907 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                        0
# 1907 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ;
    uint8_t macCmdPayload[2] = { 0x00, 0x00 };

    while( macIndex < commandsSize )
    {

        if( ( LoRaMacCommandsGetCmdSize( payload[macIndex] ) + macIndex ) > commandsSize )
        {
            return;
        }


        switch( payload[macIndex++] )
        {
            case SRV_MAC_LINK_CHECK_ANS:
            {
                if( LoRaMacConfirmQueueIsCmdActive( MLME_LINK_CHECK ) == 
# 1923 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                        1 
# 1923 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                             )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_LINK_CHECK );
                    MacCtx.MlmeConfirm.DemodMargin = payload[macIndex++];
                    MacCtx.MlmeConfirm.NbGateways = payload[macIndex++];
                }
                break;
            }
            case SRV_MAC_LINK_ADR_REQ:
            {
                LinkAdrReqParams_t linkAdrReq;
                int8_t linkAdrDatarate = 0;
                int8_t linkAdrTxPower = 0;
                uint8_t linkAdrNbRep = 0;
                uint8_t linkAdrNbBytesParsed = 0;

                if( adrBlockFound == 
# 1939 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                    0 
# 1939 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                          )
                {
                    adrBlockFound = 
# 1941 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                   1
# 1941 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       ;


                    linkAdrReq.Payload = &payload[macIndex - 1];
                    linkAdrReq.PayloadSize = commandsSize - ( macIndex - 1 );
                    linkAdrReq.AdrEnabled = Nvm.MacGroup2.AdrCtrlOn;
                    linkAdrReq.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
                    linkAdrReq.CurrentDatarate = Nvm.MacGroup1.ChannelsDatarate;
                    linkAdrReq.CurrentTxPower = Nvm.MacGroup1.ChannelsTxPower;
                    linkAdrReq.CurrentNbRep = Nvm.MacGroup2.MacParams.ChannelsNbTrans;
                    linkAdrReq.Version = Nvm.MacGroup2.Version;


                    status = RegionLinkAdrReq( Nvm.MacGroup2.Region, &linkAdrReq, &linkAdrDatarate,
                                               &linkAdrTxPower, &linkAdrNbRep, &linkAdrNbBytesParsed );


                    if(Nvm.MacGroup2.AdrCtrlOn == 
# 1958 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                 0
# 1958 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                      )
                    {
                        status = 0x00;
                    }

                    if( ( status & 0x07 ) == 0x07 )
                    {
                        Nvm.MacGroup1.ChannelsDatarate = linkAdrDatarate;
                        Nvm.MacGroup1.ChannelsTxPower = linkAdrTxPower;
                        Nvm.MacGroup2.MacParams.ChannelsNbTrans = linkAdrNbRep;
                    }


                    for( uint8_t i = 0; i < ( linkAdrNbBytesParsed / 5 ); i++ )
                    {
                        LoRaMacCommandsAddCmd( MOTE_MAC_LINK_ADR_ANS, &status, 1 );
                    }

                    macIndex += linkAdrNbBytesParsed - 1;
                }
                break;
            }
            case SRV_MAC_DUTY_CYCLE_REQ:
            {
                Nvm.MacGroup2.MaxDCycle = payload[macIndex++] & 0x0F;
                Nvm.MacGroup2.AggregatedDCycle = 1 << Nvm.MacGroup2.MaxDCycle;
                LoRaMacCommandsAddCmd( MOTE_MAC_DUTY_CYCLE_ANS, macCmdPayload, 0 );
                break;
            }
            case SRV_MAC_RX_PARAM_SETUP_REQ:
            {
                RxParamSetupReqParams_t rxParamSetupReq;
                status = 0x07;

                rxParamSetupReq.DrOffset = ( payload[macIndex] >> 4 ) & 0x07;
                rxParamSetupReq.Datarate = payload[macIndex] & 0x0F;
                macIndex++;

                rxParamSetupReq.Frequency = ( uint32_t ) payload[macIndex++];
                rxParamSetupReq.Frequency |= ( uint32_t ) payload[macIndex++] << 8;
                rxParamSetupReq.Frequency |= ( uint32_t ) payload[macIndex++] << 16;
                rxParamSetupReq.Frequency *= 100;


                status = RegionRxParamSetupReq( Nvm.MacGroup2.Region, &rxParamSetupReq );

                if( ( status & 0x07 ) == 0x07 )
                {
                    Nvm.MacGroup2.MacParams.Rx2Channel.Datarate = rxParamSetupReq.Datarate;
                    Nvm.MacGroup2.MacParams.RxCChannel.Datarate = rxParamSetupReq.Datarate;
                    Nvm.MacGroup2.MacParams.Rx2Channel.Frequency = rxParamSetupReq.Frequency;
                    Nvm.MacGroup2.MacParams.RxCChannel.Frequency = rxParamSetupReq.Frequency;
                    Nvm.MacGroup2.MacParams.Rx1DrOffset = rxParamSetupReq.DrOffset;

                    MacCtx.RxWindowCConfig.Frequency = Nvm.MacGroup2.MacParams.RxCChannel.Frequency;
                }
                macCmdPayload[0] = status;
                LoRaMacCommandsAddCmd( MOTE_MAC_RX_PARAM_SETUP_ANS, macCmdPayload, 1 );

                SetMlmeScheduleUplinkIndication( );
                break;
            }
            case SRV_MAC_DEV_STATUS_REQ:
            {
                uint8_t batteryLevel = BAT_LEVEL_NO_MEASURE;
                if( ( MacCtx.MacCallbacks != 
# 2023 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 2023 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                 ) && ( MacCtx.MacCallbacks->GetBatteryLevel != 
# 2023 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                                ((void *)0) 
# 2023 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                                     ) )
                {
                    batteryLevel = MacCtx.MacCallbacks->GetBatteryLevel( );
                }
                macCmdPayload[0] = batteryLevel;
                macCmdPayload[1] = ( uint8_t )( snr & 0x3F );
                LoRaMacCommandsAddCmd( MOTE_MAC_DEV_STATUS_ANS, macCmdPayload, 2 );
                break;
            }
            case SRV_MAC_NEW_CHANNEL_REQ:
            {
                NewChannelReqParams_t newChannelReq;
                ChannelParams_t chParam;
                status = 0x03;

                newChannelReq.ChannelId = payload[macIndex++];
                newChannelReq.NewChannel = &chParam;

                chParam.Frequency = ( uint32_t ) payload[macIndex++];
                chParam.Frequency |= ( uint32_t ) payload[macIndex++] << 8;
                chParam.Frequency |= ( uint32_t ) payload[macIndex++] << 16;
                chParam.Frequency *= 100;
                chParam.Rx1Frequency = 0;
                chParam.DrRange.Value = payload[macIndex++];

                status = ( uint8_t )RegionNewChannelReq( Nvm.MacGroup2.Region, &newChannelReq );

                if( ( int8_t )status >= 0 )
                {
                    macCmdPayload[0] = status;
                    LoRaMacCommandsAddCmd( MOTE_MAC_NEW_CHANNEL_ANS, macCmdPayload, 1 );
                }
                break;
            }
            case SRV_MAC_RX_TIMING_SETUP_REQ:
            {
                uint8_t delay = payload[macIndex++] & 0x0F;

                if( delay == 0 )
                {
                    delay++;
                }
                Nvm.MacGroup2.MacParams.ReceiveDelay1 = delay * 1000;
                Nvm.MacGroup2.MacParams.ReceiveDelay2 = Nvm.MacGroup2.MacParams.ReceiveDelay1 + 1000;
                LoRaMacCommandsAddCmd( MOTE_MAC_RX_TIMING_SETUP_ANS, macCmdPayload, 0 );

                SetMlmeScheduleUplinkIndication( );
                break;
            }
            case SRV_MAC_TX_PARAM_SETUP_REQ:
            {
                TxParamSetupReqParams_t txParamSetupReq;
                GetPhyParams_t getPhy;
                PhyParam_t phyParam;
                uint8_t eirpDwellTime = payload[macIndex++];

                txParamSetupReq.UplinkDwellTime = 0;
                txParamSetupReq.DownlinkDwellTime = 0;

                if( ( eirpDwellTime & 0x20 ) == 0x20 )
                {
                    txParamSetupReq.DownlinkDwellTime = 1;
                }
                if( ( eirpDwellTime & 0x10 ) == 0x10 )
                {
                    txParamSetupReq.UplinkDwellTime = 1;
                }
                txParamSetupReq.MaxEirp = eirpDwellTime & 0x0F;


                if( RegionTxParamSetupReq( Nvm.MacGroup2.Region, &txParamSetupReq ) != -1 )
                {

                    Nvm.MacGroup2.MacParams.UplinkDwellTime = txParamSetupReq.UplinkDwellTime;
                    Nvm.MacGroup2.MacParams.DownlinkDwellTime = txParamSetupReq.DownlinkDwellTime;
                    Nvm.MacGroup2.MacParams.MaxEirp = LoRaMacMaxEirpTable[txParamSetupReq.MaxEirp];

                    getPhy.Attribute = PHY_MIN_TX_DR;
                    getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
                    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
                    Nvm.MacGroup1.ChannelsDatarate = ( ( ( Nvm.MacGroup1.ChannelsDatarate ) > ( ( int8_t )phyParam.Value ) ) ? ( Nvm.MacGroup1.ChannelsDatarate ) : ( ( int8_t )phyParam.Value ) );


                    LoRaMacCommandsAddCmd( MOTE_MAC_TX_PARAM_SETUP_ANS, macCmdPayload, 0 );
                }
                break;
            }
            case SRV_MAC_DL_CHANNEL_REQ:
            {
                DlChannelReqParams_t dlChannelReq;
                status = 0x03;

                dlChannelReq.ChannelId = payload[macIndex++];
                dlChannelReq.Rx1Frequency = ( uint32_t ) payload[macIndex++];
                dlChannelReq.Rx1Frequency |= ( uint32_t ) payload[macIndex++] << 8;
                dlChannelReq.Rx1Frequency |= ( uint32_t ) payload[macIndex++] << 16;
                dlChannelReq.Rx1Frequency *= 100;

                status = ( uint8_t )RegionDlChannelReq( Nvm.MacGroup2.Region, &dlChannelReq );

                if( ( int8_t )status >= 0 )
                {
                    macCmdPayload[0] = status;
                    LoRaMacCommandsAddCmd( MOTE_MAC_DL_CHANNEL_ANS, macCmdPayload, 1 );

                    SetMlmeScheduleUplinkIndication( );
                }
                break;
            }
            case SRV_MAC_DEVICE_TIME_ANS:
            {
                if( LoRaMacConfirmQueueIsCmdActive( MLME_DEVICE_TIME ) == 
# 2134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                         1 
# 2134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                              )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_DEVICE_TIME );
                    SysTime_t gpsEpochTime = { 0 };
                    SysTime_t sysTime = { 0 };
                    SysTime_t sysTimeCurrent = { 0 };

                    gpsEpochTime.Seconds = ( uint32_t )payload[macIndex++];
                    gpsEpochTime.Seconds |= ( uint32_t )payload[macIndex++] << 8;
                    gpsEpochTime.Seconds |= ( uint32_t )payload[macIndex++] << 16;
                    gpsEpochTime.Seconds |= ( uint32_t )payload[macIndex++] << 24;
                    gpsEpochTime.SubSeconds = payload[macIndex++];



                    gpsEpochTime.SubSeconds = ( int16_t )( ( ( int32_t )gpsEpochTime.SubSeconds * 1000 ) >> 8 );


                    sysTime = gpsEpochTime;

                    sysTime.Seconds += 315964800;


                    sysTimeCurrent = SysTimeGet( );
                    sysTime = SysTimeAdd( sysTimeCurrent, SysTimeSub( sysTime, MacCtx.LastTxSysTime ) );


                    SysTimeSet( sysTime );
                    LoRaMacClassBDeviceTimeAns( );
                    MacCtx.McpsIndication.DeviceTimeAnsReceived = 
# 2163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                 1
# 2163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                     ;
                }
                break;
            }
            case SRV_MAC_PING_SLOT_INFO_ANS:
            {
                if( LoRaMacConfirmQueueIsCmdActive( MLME_PING_SLOT_INFO ) == 
# 2169 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                            1 
# 2169 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                 )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_PING_SLOT_INFO );


                    if( ( MacCtx.RxSlot != RX_SLOT_WIN_CLASS_B_PING_SLOT ) && ( MacCtx.RxSlot != RX_SLOT_WIN_CLASS_B_MULTICAST_SLOT ) )
                    {
                        LoRaMacClassBPingSlotInfoAns( );
                    }
                }
                break;
            }
            case SRV_MAC_PING_SLOT_CHANNEL_REQ:
            {
                uint8_t status = 0x03;
                uint32_t frequency = 0;
                uint8_t datarate;

                frequency = ( uint32_t )payload[macIndex++];
                frequency |= ( uint32_t )payload[macIndex++] << 8;
                frequency |= ( uint32_t )payload[macIndex++] << 16;
                frequency *= 100;
                datarate = payload[macIndex++] & 0x0F;

                status = LoRaMacClassBPingSlotChannelReq( datarate, frequency );
                macCmdPayload[0] = status;
                LoRaMacCommandsAddCmd( MOTE_MAC_PING_SLOT_FREQ_ANS, macCmdPayload, 1 );
                break;
            }
            case SRV_MAC_BEACON_TIMING_ANS:
            {
                if( LoRaMacConfirmQueueIsCmdActive( MLME_BEACON_TIMING ) == 
# 2200 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 2200 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_BEACON_TIMING );
                    uint16_t beaconTimingDelay = 0;
                    uint8_t beaconTimingChannel = 0;

                    beaconTimingDelay = ( uint16_t )payload[macIndex++];
                    beaconTimingDelay |= ( uint16_t )payload[macIndex++] << 8;
                    beaconTimingChannel = payload[macIndex++];

                    LoRaMacClassBBeaconTimingAns( beaconTimingDelay, beaconTimingChannel, RxDoneParams.LastRxDone );
                }
                break;
            }
            case SRV_MAC_BEACON_FREQ_REQ:
                {
                    uint32_t frequency = 0;

                    frequency = ( uint32_t )payload[macIndex++];
                    frequency |= ( uint32_t )payload[macIndex++] << 8;
                    frequency |= ( uint32_t )payload[macIndex++] << 16;
                    frequency *= 100;

                    if( LoRaMacClassBBeaconFreqReq( frequency ) == 
# 2223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                  1 
# 2223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                       )
                    {
                        macCmdPayload[0] = 1;
                    }
                    else
                    {
                        macCmdPayload[0] = 0;
                    }
                    LoRaMacCommandsAddCmd( MOTE_MAC_BEACON_FREQ_ANS, macCmdPayload, 1 );
                }
                break;
            default:

                return;
        }
    }
}

LoRaMacStatus_t Send( LoRaMacHeader_t* macHdr, uint8_t fPort, void* fBuffer, uint16_t fBufferSize )
{
    LoRaMacFrameCtrl_t fCtrl;
    LoRaMacStatus_t status = LORAMAC_STATUS_PARAMETER_INVALID;
    int8_t datarate = Nvm.MacGroup1.ChannelsDatarate;
    int8_t txPower = Nvm.MacGroup1.ChannelsTxPower;
    uint32_t adrAckCounter = Nvm.MacGroup1.AdrAckCounter;
    CalcNextAdrParams_t adrNext;


    if( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_NONE )
    {
        return LORAMAC_STATUS_NO_NETWORK_JOINED;
    }
    if( Nvm.MacGroup2.MaxDCycle == 0 )
    {
        Nvm.MacGroup1.AggregatedTimeOff = 0;
    }

    fCtrl.Value = 0;
    fCtrl.Bits.FOptsLen = 0;
    fCtrl.Bits.Adr = Nvm.MacGroup2.AdrCtrlOn;


    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {
        fCtrl.Bits.FPending = 1;
    }
    else
    {
        fCtrl.Bits.FPending = 0;
    }


    if( Nvm.MacGroup1.SrvAckRequested == 
# 2275 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                        1 
# 2275 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             )
    {
        fCtrl.Bits.Ack = 1;
    }


    adrNext.Version = Nvm.MacGroup2.Version;
    adrNext.UpdateChanMask = 
# 2282 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                            1
# 2282 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                ;
    adrNext.AdrEnabled = fCtrl.Bits.Adr;
    adrNext.AdrAckCounter = Nvm.MacGroup1.AdrAckCounter;
    adrNext.AdrAckLimit = MacCtx.AdrAckLimit;
    adrNext.AdrAckDelay = MacCtx.AdrAckDelay;
    adrNext.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    adrNext.TxPower = Nvm.MacGroup1.ChannelsTxPower;
    adrNext.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
    adrNext.Region = Nvm.MacGroup2.Region;

    fCtrl.Bits.AdrAckReq = LoRaMacAdrCalcNext( &adrNext, &Nvm.MacGroup1.ChannelsDatarate,
                                               &Nvm.MacGroup1.ChannelsTxPower, &adrAckCounter );


    status = PrepareFrame( macHdr, &fCtrl, fPort, fBuffer, fBufferSize );


    if( ( status == LORAMAC_STATUS_OK ) || ( status == LORAMAC_STATUS_SKIPPED_APP_DATA ) )
    {

        status = ScheduleTx( 
# 2302 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                            0 
# 2302 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                  );
    }


    if( status != LORAMAC_STATUS_OK )
    {


        Nvm.MacGroup1.ChannelsDatarate = datarate;
        Nvm.MacGroup1.ChannelsTxPower = txPower;
    }
    else
    {

        Nvm.MacGroup1.SrvAckRequested = 
# 2316 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       0
# 2316 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            ;
        Nvm.MacGroup1.AdrAckCounter = adrAckCounter;

        if( LoRaMacCommandsRemoveNoneStickyCmds( ) != LORAMAC_COMMANDS_SUCCESS )
        {
            return LORAMAC_STATUS_MAC_COMMAD_ERROR;
        }
    }
    return status;
}

LoRaMacStatus_t SendReJoinReq( JoinReqIdentifier_t joinReqType )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_OK;
    LoRaMacHeader_t macHdr;
    macHdr.Value = 0;
    
# 2332 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
   _Bool 
# 2332 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
        allowDelayedTx = 
# 2332 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                         1
# 2332 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ;


    switch( joinReqType )
    {
        case JOIN_REQ:
        {
            SwitchClass( CLASS_A );

            MacCtx.TxMsg.Type = LORAMAC_MSG_TYPE_JOIN_REQUEST;
            MacCtx.TxMsg.Message.JoinReq.Buffer = MacCtx.PktBuffer;
            MacCtx.TxMsg.Message.JoinReq.BufSize = 255;

            macHdr.Bits.MType = FRAME_TYPE_JOIN_REQ;
            MacCtx.TxMsg.Message.JoinReq.MHDR.Value = macHdr.Value;

            memcpy1( MacCtx.TxMsg.Message.JoinReq.JoinEUI, SecureElementGetJoinEui( ), 8 );
            memcpy1( MacCtx.TxMsg.Message.JoinReq.DevEUI, SecureElementGetDevEui( ), 8 );

            allowDelayedTx = 
# 2351 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                            0
# 2351 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                 ;

            break;
        }
        default:
            status = LORAMAC_STATUS_SERVICE_UNKNOWN;
            break;
    }


    status = ScheduleTx( allowDelayedTx );
    return status;
}

static LoRaMacStatus_t CheckForClassBCollision( void )
{
    if( LoRaMacClassBIsBeaconExpected( ) == 
# 2367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           1 
# 2367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
    {
        return LORAMAC_STATUS_BUSY_BEACON_RESERVED_TIME;
    }

    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {
        if( LoRaMacClassBIsPingExpected( ) == 
# 2374 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             1 
# 2374 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                  )
        {
            return LORAMAC_STATUS_BUSY_PING_SLOT_WINDOW_TIME;
        }
        else if( LoRaMacClassBIsMulticastExpected( ) == 
# 2378 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                       1 
# 2378 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                            )
        {
            return LORAMAC_STATUS_BUSY_PING_SLOT_WINDOW_TIME;
        }
    }
    return LORAMAC_STATUS_OK;
}

static void ComputeRxWindowParameters( void )
{

    RegionComputeRxWindowParameters( Nvm.MacGroup2.Region,
                                     RegionApplyDrOffset( Nvm.MacGroup2.Region,
                                                          Nvm.MacGroup2.MacParams.DownlinkDwellTime,
                                                          Nvm.MacGroup1.ChannelsDatarate,
                                                          Nvm.MacGroup2.MacParams.Rx1DrOffset ),
                                     Nvm.MacGroup2.MacParams.MinRxSymbols,
                                     Nvm.MacGroup2.MacParams.SystemMaxRxError,
                                     &MacCtx.RxWindow1Config );

    RegionComputeRxWindowParameters( Nvm.MacGroup2.Region,
                                     Nvm.MacGroup2.MacParams.Rx2Channel.Datarate,
                                     Nvm.MacGroup2.MacParams.MinRxSymbols,
                                     Nvm.MacGroup2.MacParams.SystemMaxRxError,
                                     &MacCtx.RxWindow2Config );


    MacCtx.RxWindow1Delay = Nvm.MacGroup2.MacParams.ReceiveDelay1 + MacCtx.RxWindow1Config.WindowOffset;
    MacCtx.RxWindow2Delay = Nvm.MacGroup2.MacParams.ReceiveDelay2 + MacCtx.RxWindow2Config.WindowOffset;

    if( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_NONE )
    {
        MacCtx.RxWindow1Delay = Nvm.MacGroup2.MacParams.JoinAcceptDelay1 + MacCtx.RxWindow1Config.WindowOffset;
        MacCtx.RxWindow2Delay = Nvm.MacGroup2.MacParams.JoinAcceptDelay2 + MacCtx.RxWindow2Config.WindowOffset;
    }
}

static LoRaMacStatus_t VerifyTxFrame( void )
{
    size_t macCmdsSize = 0;

    if( Nvm.MacGroup2.NetworkActivation != ACTIVATION_TYPE_NONE )
    {
        if( LoRaMacCommandsGetSizeSerializedCmds( &macCmdsSize ) != LORAMAC_COMMANDS_SUCCESS )
        {
            return LORAMAC_STATUS_MAC_COMMAD_ERROR;
        }

        if( ValidatePayloadLength( MacCtx.AppDataSize, Nvm.MacGroup1.ChannelsDatarate, macCmdsSize ) == 
# 2426 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                                       0 
# 2426 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                                             )
        {
            return LORAMAC_STATUS_LENGTH_ERROR;
        }
    }
    return LORAMAC_STATUS_OK;
}

static LoRaMacStatus_t SerializeTxFrame( void )
{
    LoRaMacSerializerStatus_t serializeStatus;

    switch( MacCtx.TxMsg.Type )
    {
        case LORAMAC_MSG_TYPE_JOIN_REQUEST:
            serializeStatus = LoRaMacSerializerJoinRequest( &MacCtx.TxMsg.Message.JoinReq );
            if( LORAMAC_SERIALIZER_SUCCESS != serializeStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.JoinReq.BufSize;
            break;
        case LORAMAC_MSG_TYPE_DATA:
            serializeStatus = LoRaMacSerializerData( &MacCtx.TxMsg.Message.Data );
            if( LORAMAC_SERIALIZER_SUCCESS != serializeStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.Data.BufSize;
            break;
        case LORAMAC_MSG_TYPE_JOIN_ACCEPT:
        case LORAMAC_MSG_TYPE_UNDEF:
        default:
            return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    return LORAMAC_STATUS_OK;
}

static LoRaMacStatus_t ScheduleTx( 
# 2464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  _Bool 
# 2464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       allowDelayedTx )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_PARAMETER_INVALID;
    NextChanParams_t nextChan;


    status = CheckForClassBCollision( );
    if( status != LORAMAC_STATUS_OK )
    {
        return status;
    }


    CalculateBackOff( );


    status = SerializeTxFrame( );
    if( status != LORAMAC_STATUS_OK )
    {
        return status;
    }

    nextChan.AggrTimeOff = Nvm.MacGroup1.AggregatedTimeOff;
    nextChan.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    nextChan.DutyCycleEnabled = Nvm.MacGroup2.DutyCycleOn;
    nextChan.ElapsedTimeSinceStartUp = SysTimeSub( SysTimeGetMcuTime( ), Nvm.MacGroup2.InitializationTime );
    nextChan.LastAggrTx = Nvm.MacGroup1.LastTxDoneTime;
    nextChan.LastTxIsJoinRequest = 
# 2491 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  0
# 2491 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                       ;
    nextChan.Joined = 
# 2492 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                     1
# 2492 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                         ;
    nextChan.PktLen = MacCtx.PktBufferLen;


    if( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_NONE )
    {
        nextChan.LastTxIsJoinRequest = 
# 2498 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                      1
# 2498 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                          ;
        nextChan.Joined = 
# 2499 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                         0
# 2499 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                              ;
    }


    status = RegionNextChannel( Nvm.MacGroup2.Region, &nextChan, &MacCtx.Channel, &MacCtx.DutyCycleWaitTime, &Nvm.MacGroup1.AggregatedTimeOff );

    if( status != LORAMAC_STATUS_OK )
    {
        if( ( status == LORAMAC_STATUS_DUTYCYCLE_RESTRICTED ) &&
            ( allowDelayedTx == 
# 2508 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                               1 
# 2508 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                    ) )
        {


            if( MacCtx.DutyCycleWaitTime != 0 )
            {
                MacCtx.MacState |= LORAMAC_TX_DELAYED;
                udrv_serial_log_printf("Retransmit_DutyCycleWaitTime:%u\r\n",MacCtx.DutyCycleWaitTime);
                TimerSetValue( &MacCtx.TxDelayedTimer, MacCtx.DutyCycleWaitTime );
                TimerStart( &MacCtx.TxDelayedTimer );
            }
            return LORAMAC_STATUS_OK;
        }
        else
        {
            return status;
        }
    }


    ComputeRxWindowParameters( );


    status = VerifyTxFrame( );
    if( status != LORAMAC_STATUS_OK )
    {
        return status;
    }


    service_lora_arssi_tx_callback(MacCtx.Channel);
    return SendFrameOnChannel( MacCtx.Channel );
}

static LoRaMacStatus_t SecureFrame( uint8_t txDr, uint8_t txCh )
{
    LoRaMacCryptoStatus_t macCryptoStatus = LORAMAC_CRYPTO_ERROR;
    uint32_t fCntUp = 0;

    switch( MacCtx.TxMsg.Type )
    {
        case LORAMAC_MSG_TYPE_JOIN_REQUEST:
            macCryptoStatus = LoRaMacCryptoPrepareJoinRequest( &MacCtx.TxMsg.Message.JoinReq );
            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.JoinReq.BufSize;
            break;
        case LORAMAC_MSG_TYPE_DATA:

            if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoGetFCntUp( &fCntUp ) )
            {
                return LORAMAC_STATUS_FCNT_HANDLER_ERROR;
            }

            if( ( MacCtx.ChannelsNbTransCounter >= 1 ) || ( MacCtx.AckTimeoutRetriesCounter > 1 ) )
            {
                fCntUp -= 1;
            }

            macCryptoStatus = LoRaMacCryptoSecureMessage( fCntUp, txDr, txCh, &MacCtx.TxMsg.Message.Data );
            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.Data.BufSize;
            break;
        case LORAMAC_MSG_TYPE_JOIN_ACCEPT:
        case LORAMAC_MSG_TYPE_UNDEF:
        default:
            return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    return LORAMAC_STATUS_OK;
}

static void CalculateBackOff( void )
{


    if( Nvm.MacGroup1.AggregatedTimeOff == 0 )
    {


        Nvm.MacGroup1.AggregatedTimeOff = ( MacCtx.TxTimeOnAir * Nvm.MacGroup2.AggregatedDCycle - MacCtx.TxTimeOnAir );
    }
}

static void RemoveMacCommands( LoRaMacRxSlot_t rxSlot, LoRaMacFrameCtrl_t fCtrl, Mcps_t request )
{
    if( rxSlot == RX_SLOT_WIN_1 || rxSlot == RX_SLOT_WIN_2 )
    {


        if( request == MCPS_CONFIRMED )
        {
            if( fCtrl.Bits.Ack == 1 )
            {
                LoRaMacCommandsRemoveStickyAnsCmds( );
            }
        }
        else
        {
            LoRaMacCommandsRemoveStickyAnsCmds( );
        }
    }
}


static void ResetMacParameters( void )
{
    LoRaMacClassBCallback_t classBCallbacks;
    LoRaMacClassBParams_t classBParams;

    Nvm.MacGroup2.NetworkActivation = ACTIVATION_TYPE_NONE;


    Nvm.MacGroup1.AdrAckCounter = 0;

    MacCtx.ChannelsNbTransCounter = 0;
    MacCtx.AckTimeoutRetries = 1;
    MacCtx.AckTimeoutRetriesCounter = 1;
    MacCtx.AckTimeoutRetry = 
# 2630 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                            0
# 2630 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                 ;

    Nvm.MacGroup2.MaxDCycle = 0;
    Nvm.MacGroup2.AggregatedDCycle = 1;

    Nvm.MacGroup1.ChannelsTxPower = Nvm.MacGroup2.ChannelsTxPowerDefault;
    Nvm.MacGroup1.ChannelsDatarate = Nvm.MacGroup2.ChannelsDatarateDefault;
    Nvm.MacGroup2.MacParams.Rx1DrOffset = Nvm.MacGroup2.MacParamsDefaults.Rx1DrOffset;
    Nvm.MacGroup2.MacParams.Rx2Channel = Nvm.MacGroup2.MacParamsDefaults.Rx2Channel;
    Nvm.MacGroup2.MacParams.RxCChannel = Nvm.MacGroup2.MacParamsDefaults.RxCChannel;
    Nvm.MacGroup2.MacParams.UplinkDwellTime = Nvm.MacGroup2.MacParamsDefaults.UplinkDwellTime;
    Nvm.MacGroup2.MacParams.DownlinkDwellTime = Nvm.MacGroup2.MacParamsDefaults.DownlinkDwellTime;
    Nvm.MacGroup2.MacParams.MaxEirp = Nvm.MacGroup2.MacParamsDefaults.MaxEirp;
    Nvm.MacGroup2.MacParams.AntennaGain = Nvm.MacGroup2.MacParamsDefaults.AntennaGain;

    MacCtx.NodeAckRequested = 
# 2645 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                             0
# 2645 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                  ;
    Nvm.MacGroup1.SrvAckRequested = 
# 2646 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                   0
# 2646 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                        ;


    InitDefaultsParams_t params;
    params.Type = INIT_TYPE_RESET_TO_DEFAULT_CHANNELS;
    params.NvmGroup1 = &Nvm.RegionGroup1;
    params.NvmGroup2 = &Nvm.RegionGroup2;
    RegionInitDefaults( Nvm.MacGroup2.Region, &params );


    MacCtx.Channel = 0;


    MacCtx.RxWindow2Config.Channel = MacCtx.Channel;
    MacCtx.RxWindow2Config.Frequency = Nvm.MacGroup2.MacParams.Rx2Channel.Frequency;
    MacCtx.RxWindow2Config.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
    MacCtx.RxWindow2Config.RxContinuous = 
# 2662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         0
# 2662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              ;
    MacCtx.RxWindow2Config.RxSlot = RX_SLOT_WIN_2;


    MacCtx.RxWindowCConfig = MacCtx.RxWindow2Config;
    MacCtx.RxWindowCConfig.RxContinuous = 
# 2667 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         1
# 2667 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             ;
    MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C;



    classBCallbacks.GetTemperatureLevel = 
# 2672 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         ((void *)0)
# 2672 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             ;
    classBCallbacks.MacProcessNotify = 
# 2673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                      ((void *)0)
# 2673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                          ;

    if( MacCtx.MacCallbacks != 
# 2675 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                              ((void *)0) 
# 2675 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                   )
    {
        classBCallbacks.GetTemperatureLevel = MacCtx.MacCallbacks->GetTemperatureLevel;
        classBCallbacks.MacProcessNotify = MacCtx.MacCallbacks->MacProcessNotify;
    }


    classBParams.MlmeIndication = &MacCtx.MlmeIndication;
    classBParams.McpsIndication = &MacCtx.McpsIndication;
    classBParams.MlmeConfirm = &MacCtx.MlmeConfirm;
    classBParams.LoRaMacFlags = &MacCtx.MacFlags;
    classBParams.LoRaMacDevAddr = &Nvm.MacGroup2.DevAddr;
    classBParams.LoRaMacRegion = &Nvm.MacGroup2.Region;
    classBParams.LoRaMacParams = &Nvm.MacGroup2.MacParams;
    classBParams.MulticastChannels = &Nvm.MacGroup2.MulticastChannelList[0];

    LoRaMacClassBInit( &classBParams, &classBCallbacks, &Nvm.ClassB );
}







static void RxWindowSetup( TimerEvent_t* rxTimer, RxConfigParams_t* rxConfig )
{
    TimerStop( rxTimer );


    Radio.Standby( );

    if( RegionRxConfig( Nvm.MacGroup2.Region, rxConfig, ( int8_t* )&MacCtx.McpsIndication.RxDatarate ) == 
# 2707 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                                         1 
# 2707 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                                              )
    {
        Radio.Rx( Nvm.MacGroup2.MacParams.MaxRxWindow );
        MacCtx.RxSlot = rxConfig->RxSlot;
    }
}

static void OpenContinuousRxCWindow( void )
{

    RegionComputeRxWindowParameters( Nvm.MacGroup2.Region,
                                     Nvm.MacGroup2.MacParams.RxCChannel.Datarate,
                                     Nvm.MacGroup2.MacParams.MinRxSymbols,
                                     Nvm.MacGroup2.MacParams.SystemMaxRxError,
                                     &MacCtx.RxWindowCConfig );

    MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C;

    MacCtx.RxWindowCConfig.RxContinuous = 
# 2725 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         1
# 2725 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             ;



    if( RegionRxConfig( Nvm.MacGroup2.Region, &MacCtx.RxWindowCConfig, ( int8_t* )&MacCtx.McpsIndication.RxDatarate ) == 
# 2729 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                                                        1 
# 2729 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                                                             )
    {
        Radio.Rx( 0 );
        MacCtx.RxSlot = MacCtx.RxWindowCConfig.RxSlot;
    }
}

LoRaMacStatus_t PrepareFrame( LoRaMacHeader_t* macHdr, LoRaMacFrameCtrl_t* fCtrl, uint8_t fPort, void* fBuffer, uint16_t fBufferSize )
{
    MacCtx.PktBufferLen = 0;
    MacCtx.NodeAckRequested = 
# 2739 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                             0
# 2739 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                  ;
    uint32_t fCntUp = 0;
    size_t macCmdsSize = 0;
    uint8_t availableSize = 0;

    if( fBuffer == 
# 2744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                  ((void *)0) 
# 2744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                       )
    {
        fBufferSize = 0;
    }

    memcpy1( MacCtx.AppData, ( uint8_t* ) fBuffer, fBufferSize );
    MacCtx.AppDataSize = fBufferSize;
    MacCtx.PktBuffer[0] = macHdr->Value;

    switch( macHdr->Bits.MType )
    {
        case FRAME_TYPE_DATA_CONFIRMED_UP:
            MacCtx.NodeAckRequested = 
# 2756 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                     1
# 2756 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                         ;

        case FRAME_TYPE_DATA_UNCONFIRMED_UP:
            MacCtx.TxMsg.Type = LORAMAC_MSG_TYPE_DATA;
            MacCtx.TxMsg.Message.Data.Buffer = MacCtx.PktBuffer;
            MacCtx.TxMsg.Message.Data.BufSize = 255;
            MacCtx.TxMsg.Message.Data.MHDR.Value = macHdr->Value;
            MacCtx.TxMsg.Message.Data.FPort = fPort;
            MacCtx.TxMsg.Message.Data.FHDR.DevAddr = Nvm.MacGroup2.DevAddr;
            MacCtx.TxMsg.Message.Data.FHDR.FCtrl.Value = fCtrl->Value;
            MacCtx.TxMsg.Message.Data.FRMPayloadSize = MacCtx.AppDataSize;
            MacCtx.TxMsg.Message.Data.FRMPayload = MacCtx.AppData;

            if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoGetFCntUp( &fCntUp ) )
            {
                return LORAMAC_STATUS_FCNT_HANDLER_ERROR;
            }
            MacCtx.TxMsg.Message.Data.FHDR.FCnt = ( uint16_t )fCntUp;


            MacCtx.McpsConfirm.NbRetries = 0;
            MacCtx.McpsConfirm.AckReceived = 
# 2777 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                            0
# 2777 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                 ;
            MacCtx.McpsConfirm.UpLinkCounter = fCntUp;


            if( LoRaMacCommandsGetSizeSerializedCmds( &macCmdsSize ) != LORAMAC_COMMANDS_SUCCESS )
            {
                return LORAMAC_STATUS_MAC_COMMAD_ERROR;
            }

            if( macCmdsSize > 0 )
            {
                availableSize = GetMaxAppPayloadWithoutFOptsLength( Nvm.MacGroup1.ChannelsDatarate );


                if( ( MacCtx.AppDataSize > 0 ) && ( macCmdsSize <= 15 ) )
                {
                    if( LoRaMacCommandsSerializeCmds( 15, &macCmdsSize, MacCtx.TxMsg.Message.Data.FHDR.FOpts ) != LORAMAC_COMMANDS_SUCCESS )
                    {
                        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
                    }
                    fCtrl->Bits.FOptsLen = macCmdsSize;

                    MacCtx.TxMsg.Message.Data.FHDR.FCtrl.Value = fCtrl->Value;
                }

                else if( ( MacCtx.AppDataSize > 0 ) && ( macCmdsSize > 15 ) )
                {

                    if( LoRaMacCommandsSerializeCmds( availableSize, &macCmdsSize, MacCtx.MacCommandsBuffer ) != LORAMAC_COMMANDS_SUCCESS )
                    {
                        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
                    }
                    return LORAMAC_STATUS_SKIPPED_APP_DATA;
                }

                else
                {
                    if( LoRaMacCommandsSerializeCmds( availableSize, &macCmdsSize, MacCtx.MacCommandsBuffer ) != LORAMAC_COMMANDS_SUCCESS )
                    {
                        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
                    }

                    MacCtx.TxMsg.Message.Data.FPort = 0;

                    MacCtx.TxMsg.Message.Data.FRMPayload = MacCtx.MacCommandsBuffer;
                    MacCtx.TxMsg.Message.Data.FRMPayloadSize = macCmdsSize;
                }
            }

            break;
        case FRAME_TYPE_PROPRIETARY:
            if( ( fBuffer != 
# 2828 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                            ((void *)0) 
# 2828 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                 ) && ( MacCtx.AppDataSize > 0 ) )
            {
                memcpy1( MacCtx.PktBuffer + 1, ( uint8_t* ) fBuffer, MacCtx.AppDataSize );
                MacCtx.PktBufferLen = 1 + MacCtx.AppDataSize;
            }
            break;
        default:
            return LORAMAC_STATUS_SERVICE_UNKNOWN;
    }

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t SendFrameOnChannel( uint8_t channel )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_PARAMETER_INVALID;
    TxConfigParams_t txConfig;
    int8_t txPower = 0;

    txConfig.Channel = channel;
    txConfig.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    txConfig.TxPower = Nvm.MacGroup1.ChannelsTxPower;
    txConfig.MaxEirp = Nvm.MacGroup2.MacParams.MaxEirp;
    txConfig.AntennaGain = Nvm.MacGroup2.MacParams.AntennaGain;
    txConfig.PktLen = MacCtx.PktBufferLen;

    RegionTxConfig( Nvm.MacGroup2.Region, &txConfig, &txPower, &MacCtx.TxTimeOnAir );

    MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
    MacCtx.McpsConfirm.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    MacCtx.McpsConfirm.TxPower = txPower;
    MacCtx.McpsConfirm.Channel = channel;


    MacCtx.McpsConfirm.TxTimeOnAir = MacCtx.TxTimeOnAir;
    MacCtx.MlmeConfirm.TxTimeOnAir = MacCtx.TxTimeOnAir;

    if( LoRaMacClassBIsBeaconModeActive( ) == 
# 2865 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             1 
# 2865 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                  )
    {


        TimerTime_t collisionTime = LoRaMacClassBIsUplinkCollision( MacCtx.TxTimeOnAir );

        if( collisionTime > 0 )
        {
            return LORAMAC_STATUS_BUSY_UPLINK_COLLISION;
        }
    }

    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {

        LoRaMacClassBStopRxSlots( );
    }

    LoRaMacClassBHaltBeaconing( );


    status = SecureFrame( Nvm.MacGroup1.ChannelsDatarate, MacCtx.Channel );
    if( status != LORAMAC_STATUS_OK )
    {
        return status;
    }

    MacCtx.MacState |= LORAMAC_TX_RUNNING;
    if( MacCtx.NodeAckRequested == 
# 2893 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                  0 
# 2893 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                        )
    {
        MacCtx.ChannelsNbTransCounter++;
    }


    Radio.Send( MacCtx.PktBuffer, MacCtx.PktBufferLen );

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t SetTxContinuousWave( uint16_t timeout )
{
    ContinuousWaveParams_t continuousWave;

    continuousWave.Channel = MacCtx.Channel;
    continuousWave.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    continuousWave.TxPower = Nvm.MacGroup1.ChannelsTxPower;
    continuousWave.MaxEirp = Nvm.MacGroup2.MacParams.MaxEirp;
    continuousWave.AntennaGain = Nvm.MacGroup2.MacParams.AntennaGain;
    continuousWave.Timeout = timeout;

    RegionSetContinuousWave( Nvm.MacGroup2.Region, &continuousWave );

    MacCtx.MacState |= LORAMAC_TX_RUNNING;

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t SetTxContinuousWave1( uint16_t timeout, uint32_t frequency, int8_t power )
{
    Radio.SetTxContinuousWave( frequency, power, timeout );

    MacCtx.MacState |= LORAMAC_TX_RUNNING;

    return LORAMAC_STATUS_OK;
}

LoRaMacNvmData_t* GetNvmData( void )
{
    return &Nvm;
}

LoRaMacStatus_t RestoreNvmData( LoRaMacNvmData_t* nvm )
{
    uint32_t crc = 0;


    if( nvm == 
# 2941 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
              ((void *)0) 
# 2941 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                   )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    if( MacCtx.MacState != LORAMAC_STOPPED )
    {
        return LORAMAC_STATUS_BUSY;
    }


    crc = Crc32( ( uint8_t* ) &nvm->Crypto, sizeof( nvm->Crypto ) -
                                            sizeof( nvm->Crypto.Crc32 ) );
    if( crc == nvm->Crypto.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.Crypto, ( uint8_t* ) &nvm->Crypto,
                 sizeof( Nvm.Crypto ) );
    }


    crc = Crc32( ( uint8_t* ) &nvm->MacGroup1, sizeof( nvm->MacGroup1 ) -
                                               sizeof( nvm->MacGroup1.Crc32 ) );
    if( crc == nvm->MacGroup1.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.MacGroup1, ( uint8_t* ) &nvm->MacGroup1,
                 sizeof( Nvm.MacGroup1 ) );
    }


    crc = Crc32( ( uint8_t* ) &nvm->MacGroup2, sizeof( nvm->MacGroup2 ) -
                                               sizeof( nvm->MacGroup2.Crc32 ) );
    if( crc == nvm->MacGroup2.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.MacGroup2, ( uint8_t* ) &nvm->MacGroup2,
                 sizeof( Nvm.MacGroup2 ) );


        MacCtx.RxWindowCConfig.Channel = MacCtx.Channel;
        MacCtx.RxWindowCConfig.Frequency = Nvm.MacGroup2.MacParams.RxCChannel.Frequency;
        MacCtx.RxWindowCConfig.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
        MacCtx.RxWindowCConfig.RxContinuous = 
# 2980 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             1
# 2980 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                 ;
        MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C;
    }


    crc = Crc32( ( uint8_t* ) &nvm->SecureElement, sizeof( nvm->SecureElement ) -
                                                   sizeof( nvm->SecureElement.Crc32 ) );
    if( crc == nvm->SecureElement.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.SecureElement,( uint8_t* ) &nvm->SecureElement,
                 sizeof( Nvm.SecureElement ) );
    }


    crc = Crc32( ( uint8_t* ) &nvm->RegionGroup1, sizeof( nvm->RegionGroup1 ) -
                                            sizeof( nvm->RegionGroup1.Crc32 ) );
    if( crc == nvm->RegionGroup1.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.RegionGroup1,( uint8_t* ) &nvm->RegionGroup1,
                 sizeof( Nvm.RegionGroup1 ) );
    }

    crc = Crc32( ( uint8_t* ) &nvm->ClassB, sizeof( nvm->ClassB ) -
                                            sizeof( nvm->ClassB.Crc32 ) );
    if( crc == nvm->ClassB.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.ClassB,( uint8_t* ) &nvm->ClassB,
                 sizeof( Nvm.ClassB ) );
    }

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t DetermineFrameType( LoRaMacMessageData_t* macMsg, FType_t* fType )
{
    if( ( macMsg == 
# 3015 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                   ((void *)0) 
# 3015 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                        ) || ( fType == 
# 3015 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                        ((void *)0) 
# 3015 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             ) )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
# 3040 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
    if( ( macMsg->FHDR.FCtrl.Bits.FOptsLen > 0 ) && ( macMsg->FPort > 0 ) )
    {
        *fType = FRAME_TYPE_A;
    }
    else if( macMsg->FRMPayloadSize == 0 )
    {
        *fType = FRAME_TYPE_B;
    }
    else if( ( macMsg->FHDR.FCtrl.Bits.FOptsLen == 0 ) && ( macMsg->FPort == 0 ) )
    {
        *fType = FRAME_TYPE_C;
    }
    else if( ( macMsg->FHDR.FCtrl.Bits.FOptsLen == 0 ) && ( macMsg->FPort > 0 ) )
    {
        *fType = FRAME_TYPE_D;
    }
    else
    {

        return LORAMAC_STATUS_ERROR;
    }

    return LORAMAC_STATUS_OK;
}

static 
# 3065 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 3065 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           CheckRetransUnconfirmedUplink( void )
{

    if( MacCtx.ChannelsNbTransCounter >=
        Nvm.MacGroup2.MacParams.ChannelsNbTrans )
    {
        return 
# 3071 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
              1
# 3071 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                  ;
    }
    else if( MacCtx.MacFlags.Bits.McpsInd == 1 )
    {

        if( Nvm.MacGroup2.DeviceClass == CLASS_A )
        {
            return 
# 3078 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                  1
# 3078 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                      ;
        }
        else
        {
            if( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_1 )
            {
                return 
# 3084 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                      1
# 3084 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                          ;
            }
        }
    }
    return 
# 3088 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
          0
# 3088 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
               ;
}

static 
# 3091 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 3091 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           CheckRetransConfirmedUplink( void )
{

    if( MacCtx.AckTimeoutRetriesCounter >=
        MacCtx.AckTimeoutRetries )
    {
        return 
# 3097 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
              1
# 3097 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                  ;
    }
    else if( MacCtx.MacFlags.Bits.McpsInd == 1 )
    {
        if( MacCtx.McpsConfirm.AckReceived == 
# 3101 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             1 
# 3101 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                  )
        {
            return 
# 3103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                  1
# 3103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                      ;
        }
    }
    return 
# 3106 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
          0
# 3106 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
               ;
}

static 
# 3109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
      _Bool 
# 3109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
           StopRetransmission( void )
{
    if( ( MacCtx.MacFlags.Bits.McpsInd == 0 ) ||
        ( ( MacCtx.McpsIndication.RxSlot != RX_SLOT_WIN_1 ) &&
          ( MacCtx.McpsIndication.RxSlot != RX_SLOT_WIN_2 ) ) )
    {

        if( Nvm.MacGroup2.AdrCtrlOn == 
# 3116 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                      1 
# 3116 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                           )
        {
            Nvm.MacGroup1.AdrAckCounter++;
        }
    }

    MacCtx.ChannelsNbTransCounter = 0;
    MacCtx.NodeAckRequested = 
# 3123 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                             0
# 3123 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                  ;
    MacCtx.AckTimeoutRetry = 
# 3124 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                            0
# 3124 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                 ;
    MacCtx.MacState &= ~LORAMAC_TX_RUNNING;

    return 
# 3127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
          1
# 3127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
              ;
}

static void CallNvmDataChangeCallback( uint16_t notifyFlags )
{
    if( ( MacCtx.MacCallbacks != 
# 3132 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 3132 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                     ) &&
        ( MacCtx.MacCallbacks->NvmDataChange != 
# 3133 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                ((void *)0) 
# 3133 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                     ) )
    {
        MacCtx.MacCallbacks->NvmDataChange ( notifyFlags );
    }
}

static void AckTimeoutRetriesProcess( void )
{
    if( MacCtx.AckTimeoutRetriesCounter < MacCtx.AckTimeoutRetries )
    {
        MacCtx.AckTimeoutRetriesCounter++;
        if( ( MacCtx.AckTimeoutRetriesCounter % 2 ) == 1 )
        {
            GetPhyParams_t getPhy;
            PhyParam_t phyParam;

            getPhy.Attribute = PHY_NEXT_LOWER_TX_DR;
            getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
            getPhy.Datarate = Nvm.MacGroup1.ChannelsDatarate;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
            Nvm.MacGroup1.ChannelsDatarate = phyParam.Value;
        }
    }
}

static void AckTimeoutRetriesFinalize( void )
{
    if( MacCtx.McpsConfirm.AckReceived == 
# 3160 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         0 
# 3160 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                               )
    {
        InitDefaultsParams_t params;
        params.Type = INIT_TYPE_ACTIVATE_DEFAULT_CHANNELS;
        params.NvmGroup1 = &Nvm.RegionGroup1;
        params.NvmGroup2 = &Nvm.RegionGroup2;
        RegionInitDefaults( Nvm.MacGroup2.Region, &params );

        MacCtx.NodeAckRequested = 
# 3168 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                 0
# 3168 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                      ;
        MacCtx.McpsConfirm.AckReceived = 
# 3169 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                        0
# 3169 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             ;
    }
    MacCtx.McpsConfirm.NbRetries = MacCtx.AckTimeoutRetriesCounter;
}

static uint8_t IsRequestPending( void )
{
    if( ( MacCtx.MacFlags.Bits.MlmeReq == 1 ) ||
        ( MacCtx.MacFlags.Bits.McpsReq == 1 ) )
    {
        return 1;
    }
    return 0;
}


LoRaMacStatus_t LoRaMacInitialization( LoRaMacPrimitives_t* primitives, LoRaMacCallback_t* callbacks, LoRaMacRegion_t region )
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;

    if( ( primitives == 
# 3190 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                       ((void *)0) 
# 3190 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                            ) ||
        ( callbacks == 
# 3191 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                      ((void *)0) 
# 3191 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                           ) )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    if( ( primitives->MacMcpsConfirm == 
# 3196 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3196 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            ) ||
        ( primitives->MacMcpsIndication == 
# 3197 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                          ((void *)0) 
# 3197 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                               ) ||
        ( primitives->MacMlmeConfirm == 
# 3198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            ) ||
        ( primitives->MacMlmeIndication == 
# 3199 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                          ((void *)0) 
# 3199 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                               ) )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    if( RegionIsActive( region ) == 
# 3204 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                   0 
# 3204 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                         )
    {
        return LORAMAC_STATUS_REGION_NOT_SUPPORTED;
    }


    LoRaMacConfirmQueueInit( primitives );


    memset1( ( uint8_t* ) &Nvm, 0x00, sizeof( LoRaMacNvmData_t ) );
    memset1( ( uint8_t* ) &MacCtx, 0x00, sizeof( LoRaMacCtx_t ) );


    MacCtx.AckTimeoutRetriesCounter = 1;
    MacCtx.AckTimeoutRetries = 1;
    Nvm.MacGroup2.Region = region;
    Nvm.MacGroup2.DeviceClass = CLASS_A;


    Nvm.MacGroup2.Version.Value = 0x01000300;


    getPhy.Attribute = PHY_DUTY_CYCLE;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.DutyCycleOn = ( 
# 3228 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                 _Bool 
# 3228 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                      ) phyParam.Value;

    getPhy.Attribute = PHY_DEF_TX_POWER;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.ChannelsTxPowerDefault = phyParam.Value;

    getPhy.Attribute = PHY_DEF_TX_DR;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.ChannelsDatarateDefault = phyParam.Value;

    getPhy.Attribute = PHY_MAX_RX_WINDOW;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.MaxRxWindow = phyParam.Value;

    getPhy.Attribute = PHY_RECEIVE_DELAY1;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.ReceiveDelay1 = phyParam.Value;

    getPhy.Attribute = PHY_RECEIVE_DELAY2;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.ReceiveDelay2 = phyParam.Value;

    getPhy.Attribute = PHY_JOIN_ACCEPT_DELAY1;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.JoinAcceptDelay1 = phyParam.Value;

    getPhy.Attribute = PHY_JOIN_ACCEPT_DELAY2;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.JoinAcceptDelay2 = phyParam.Value;

    getPhy.Attribute = PHY_DEF_DR1_OFFSET;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.Rx1DrOffset = phyParam.Value;

    getPhy.Attribute = PHY_DEF_RX2_FREQUENCY;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.Rx2Channel.Frequency = phyParam.Value;
    Nvm.MacGroup2.MacParamsDefaults.RxCChannel.Frequency = phyParam.Value;

    getPhy.Attribute = PHY_DEF_RX2_DR;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.Rx2Channel.Datarate = phyParam.Value;
    Nvm.MacGroup2.MacParamsDefaults.RxCChannel.Datarate = phyParam.Value;

    getPhy.Attribute = PHY_DEF_UPLINK_DWELL_TIME;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.UplinkDwellTime = phyParam.Value;

    getPhy.Attribute = PHY_DEF_DOWNLINK_DWELL_TIME;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.DownlinkDwellTime = phyParam.Value;

    getPhy.Attribute = PHY_DEF_MAX_EIRP;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.MaxEirp = phyParam.fValue;

    getPhy.Attribute = PHY_DEF_ANTENNA_GAIN;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.AntennaGain = phyParam.fValue;

    getPhy.Attribute = PHY_DEF_ADR_ACK_LIMIT;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    MacCtx.AdrAckLimit = phyParam.Value;

    getPhy.Attribute = PHY_DEF_ADR_ACK_DELAY;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    MacCtx.AdrAckDelay = phyParam.Value;


    Nvm.MacGroup2.MacParamsDefaults.ChannelsNbTrans = 1;
    Nvm.MacGroup2.MacParamsDefaults.SystemMaxRxError = 10;
    Nvm.MacGroup2.MacParamsDefaults.MinRxSymbols = 6;

    Nvm.MacGroup2.MacParams.SystemMaxRxError = Nvm.MacGroup2.MacParamsDefaults.SystemMaxRxError;
    Nvm.MacGroup2.MacParams.MinRxSymbols = Nvm.MacGroup2.MacParamsDefaults.MinRxSymbols;
    Nvm.MacGroup2.MacParams.MaxRxWindow = Nvm.MacGroup2.MacParamsDefaults.MaxRxWindow;
    Nvm.MacGroup2.MacParams.ReceiveDelay1 = Nvm.MacGroup2.MacParamsDefaults.ReceiveDelay1;
    Nvm.MacGroup2.MacParams.ReceiveDelay2 = Nvm.MacGroup2.MacParamsDefaults.ReceiveDelay2;
    Nvm.MacGroup2.MacParams.JoinAcceptDelay1 = Nvm.MacGroup2.MacParamsDefaults.JoinAcceptDelay1;
    Nvm.MacGroup2.MacParams.JoinAcceptDelay2 = Nvm.MacGroup2.MacParamsDefaults.JoinAcceptDelay2;
    Nvm.MacGroup2.MacParams.ChannelsNbTrans = Nvm.MacGroup2.MacParamsDefaults.ChannelsNbTrans;

    InitDefaultsParams_t params;
    params.Type = INIT_TYPE_DEFAULTS;
    params.NvmGroup1 = &Nvm.RegionGroup1;
    params.NvmGroup2 = &Nvm.RegionGroup2;
    RegionInitDefaults( Nvm.MacGroup2.Region, &params );

    ResetMacParameters( );

    Nvm.MacGroup2.PublicNetwork = 
# 3318 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                 1
# 3318 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                     ;

    MacCtx.MacPrimitives = primitives;
    MacCtx.MacCallbacks = callbacks;
    MacCtx.MacFlags.Value = 0;
    MacCtx.MacState = LORAMAC_STOPPED;


    Nvm.MacGroup1.LastTxDoneTime = 0;
    Nvm.MacGroup1.AggregatedTimeOff = 0;


    TimerInit( &MacCtx.TxDelayedTimer, OnTxDelayedTimerEvent );
    TimerInit( &MacCtx.RxWindowTimer1, OnRxWindow1TimerEvent );
    TimerInit( &MacCtx.RxWindowTimer2, OnRxWindow2TimerEvent );
    TimerInit( &MacCtx.AckTimeoutTimer, OnAckTimeoutTimerEvent );


    Nvm.MacGroup2.InitializationTime = SysTimeGetMcuTime( );


    MacCtx.RadioEvents.TxDone = OnRadioTxDone;
    MacCtx.RadioEvents.RxDone = OnRadioRxDone;
    MacCtx.RadioEvents.RxError = OnRadioRxError;
    MacCtx.RadioEvents.TxTimeout = OnRadioTxTimeout;
    MacCtx.RadioEvents.RxTimeout = OnRadioRxTimeout;
    Radio.Init( &MacCtx.RadioEvents );


    if( SecureElementInit( &Nvm.SecureElement ) != SECURE_ELEMENT_SUCCESS )
    {
        return LORAMAC_STATUS_CRYPTO_ERROR;
    }


    if( LoRaMacCryptoInit( &Nvm.Crypto ) != LORAMAC_CRYPTO_SUCCESS )
    {
        return LORAMAC_STATUS_CRYPTO_ERROR;
    }


    if( LoRaMacCommandsInit( ) != LORAMAC_COMMANDS_SUCCESS )
    {
        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
    }


    if( LoRaMacCryptoSetMulticastReference( Nvm.MacGroup2.MulticastChannelList ) != LORAMAC_CRYPTO_SUCCESS )
    {
        return LORAMAC_STATUS_CRYPTO_ERROR;
    }


    srand1( Radio.Random( ) );

    Radio.SetPublicNetwork( Nvm.MacGroup2.PublicNetwork );
    Radio.Sleep( );

    LoRaMacEnableRequests( LORAMAC_REQUEST_HANDLING_ON );

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacStart( void )
{
    MacCtx.MacState = LORAMAC_IDLE;
    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacStop( void )
{
    if( LoRaMacIsBusy( ) == 
# 3389 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                           0 
# 3389 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                 )
    {
        MacCtx.MacState = LORAMAC_STOPPED;
        return LORAMAC_STATUS_OK;
    }
    else if( MacCtx.MacState == LORAMAC_STOPPED )
    {
        return LORAMAC_STATUS_OK;
    }
    return LORAMAC_STATUS_BUSY;
}

LoRaMacStatus_t LoRaMacQueryTxPossible( uint8_t size, LoRaMacTxInfo_t* txInfo )
{
    CalcNextAdrParams_t adrNext;
    uint32_t adrAckCounter = Nvm.MacGroup1.AdrAckCounter;
    int8_t datarate = Nvm.MacGroup2.ChannelsDatarateDefault;
    int8_t txPower = Nvm.MacGroup2.ChannelsTxPowerDefault;
    size_t macCmdsSize = 0;

    if( txInfo == 
# 3409 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                 ((void *)0) 
# 3409 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                      )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }


    adrNext.Version = Nvm.MacGroup2.Version;
    adrNext.UpdateChanMask = 
# 3416 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                            0
# 3416 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                 ;
    adrNext.AdrEnabled = Nvm.MacGroup2.AdrCtrlOn;
    adrNext.AdrAckCounter = Nvm.MacGroup1.AdrAckCounter;
    adrNext.AdrAckLimit = MacCtx.AdrAckLimit;
    adrNext.AdrAckDelay = MacCtx.AdrAckDelay;
    adrNext.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    adrNext.TxPower = Nvm.MacGroup1.ChannelsTxPower;
    adrNext.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
    adrNext.Region = Nvm.MacGroup2.Region;



    LoRaMacAdrCalcNext( &adrNext, &datarate, &txPower, &adrAckCounter );

    txInfo->CurrentPossiblePayloadSize = GetMaxAppPayloadWithoutFOptsLength( datarate );

    if( LoRaMacCommandsGetSizeSerializedCmds( &macCmdsSize ) != LORAMAC_COMMANDS_SUCCESS )
    {
        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
    }


    if( ( 15 >= macCmdsSize ) && ( txInfo->CurrentPossiblePayloadSize >= macCmdsSize ) )
    {
        txInfo->MaxPossibleApplicationDataSize = txInfo->CurrentPossiblePayloadSize - macCmdsSize;


        if( txInfo->CurrentPossiblePayloadSize >= ( macCmdsSize + size ) )
        {
            return LORAMAC_STATUS_OK;
        }
        else
        {
           return LORAMAC_STATUS_LENGTH_ERROR;
        }
    }
    else
    {
        txInfo->MaxPossibleApplicationDataSize = 0;
        return LORAMAC_STATUS_LENGTH_ERROR;
    }
}

LoRaMacStatus_t LoRaMacMibGetRequestConfirm( MibRequestConfirm_t* mibGet )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_OK;
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;

    if( mibGet == 
# 3465 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                 ((void *)0) 
# 3465 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                      )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    switch( mibGet->Type )
    {
        case MIB_DEVICE_CLASS:
        {
            mibGet->Param.Class = Nvm.MacGroup2.DeviceClass;
            break;
        }
        case MIB_NETWORK_ACTIVATION:
        {
            mibGet->Param.NetworkActivation = Nvm.MacGroup2.NetworkActivation;
            break;
        }
        case MIB_DEV_EUI:
        {
            mibGet->Param.DevEui = SecureElementGetDevEui( );
            break;
        }
        case MIB_JOIN_EUI:
        {
            mibGet->Param.JoinEui = SecureElementGetJoinEui( );
            break;
        }
        case MIB_SE_PIN:
        {
            mibGet->Param.JoinEui = SecureElementGetPin( );
            break;
        }
        case MIB_ADR:
        {
            mibGet->Param.AdrEnable = Nvm.MacGroup2.AdrCtrlOn;
            break;
        }
        case MIB_NET_ID:
        {
            mibGet->Param.NetID = Nvm.MacGroup2.NetID;
            break;
        }
        case MIB_DEV_ADDR:
        {
            mibGet->Param.DevAddr = Nvm.MacGroup2.DevAddr;
            break;
        }
        case MIB_PUBLIC_NETWORK:
        {
            mibGet->Param.EnablePublicNetwork = Nvm.MacGroup2.PublicNetwork;
            break;
        }
        case MIB_CHANNELS:
        {
            getPhy.Attribute = PHY_CHANNELS;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

            mibGet->Param.ChannelList = phyParam.Channels;
            break;
        }
        case MIB_RX2_CHANNEL:
        {
            mibGet->Param.Rx2Channel = Nvm.MacGroup2.MacParams.Rx2Channel;
            break;
        }
        case MIB_RX2_DEFAULT_CHANNEL:
        {
            mibGet->Param.Rx2Channel = Nvm.MacGroup2.MacParamsDefaults.Rx2Channel;
            break;
        }
        case MIB_RXC_CHANNEL:
        {
            mibGet->Param.RxCChannel = Nvm.MacGroup2.MacParams.RxCChannel;
            break;
        }
        case MIB_RXC_DEFAULT_CHANNEL:
        {
            mibGet->Param.RxCChannel = Nvm.MacGroup2.MacParamsDefaults.RxCChannel;
            break;
        }
        case MIB_CHANNELS_DEFAULT_MASK:
        {
            getPhy.Attribute = PHY_CHANNELS_DEFAULT_MASK;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

            mibGet->Param.ChannelsDefaultMask = phyParam.ChannelsMask;
            break;
        }
        case MIB_CHANNELS_MASK:
        {
            getPhy.Attribute = PHY_CHANNELS_MASK;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

            mibGet->Param.ChannelsMask = phyParam.ChannelsMask;
            break;
        }
        case MIB_CHANNELS_NB_TRANS:
        {
            mibGet->Param.ChannelsNbTrans = Nvm.MacGroup2.MacParams.ChannelsNbTrans;
            break;
        }
        case MIB_MAX_RX_WINDOW_DURATION:
        {
            mibGet->Param.MaxRxWindow = Nvm.MacGroup2.MacParams.MaxRxWindow;
            break;
        }
        case MIB_RECEIVE_DELAY_1:
        {
            mibGet->Param.ReceiveDelay1 = Nvm.MacGroup2.MacParams.ReceiveDelay1;
            break;
        }
        case MIB_RECEIVE_DELAY_2:
        {
            mibGet->Param.ReceiveDelay2 = Nvm.MacGroup2.MacParams.ReceiveDelay2;
            break;
        }
        case MIB_JOIN_ACCEPT_DELAY_1:
        {
            mibGet->Param.JoinAcceptDelay1 = Nvm.MacGroup2.MacParams.JoinAcceptDelay1;
            break;
        }
        case MIB_JOIN_ACCEPT_DELAY_2:
        {
            mibGet->Param.JoinAcceptDelay2 = Nvm.MacGroup2.MacParams.JoinAcceptDelay2;
            break;
        }
        case MIB_CHANNELS_DEFAULT_DATARATE:
        {
            mibGet->Param.ChannelsDefaultDatarate = Nvm.MacGroup2.ChannelsDatarateDefault;
            break;
        }
        case MIB_CHANNELS_DATARATE:
        {
            mibGet->Param.ChannelsDatarate = Nvm.MacGroup1.ChannelsDatarate;
            break;
        }
        case MIB_CHANNELS_DEFAULT_TX_POWER:
        {
            mibGet->Param.ChannelsDefaultTxPower = Nvm.MacGroup2.ChannelsTxPowerDefault;
            break;
        }
        case MIB_CHANNELS_TX_POWER:
        {
            mibGet->Param.ChannelsTxPower = Nvm.MacGroup1.ChannelsTxPower;
            break;
        }
        case MIB_SYSTEM_MAX_RX_ERROR:
        {
            mibGet->Param.SystemMaxRxError = Nvm.MacGroup2.MacParams.SystemMaxRxError;
            break;
        }
        case MIB_MIN_RX_SYMBOLS:
        {
            mibGet->Param.MinRxSymbols = Nvm.MacGroup2.MacParams.MinRxSymbols;
            break;
        }
        case MIB_ANTENNA_GAIN:
        {
            mibGet->Param.AntennaGain = Nvm.MacGroup2.MacParams.AntennaGain;
            break;
        }
        case MIB_NVM_CTXS:
        {
            mibGet->Param.Contexts = GetNvmData( );
            break;
        }
        case MIB_DEFAULT_ANTENNA_GAIN:
        {
            mibGet->Param.DefaultAntennaGain = Nvm.MacGroup2.MacParamsDefaults.AntennaGain;
            break;
        }
        case MIB_LORAWAN_VERSION:
        {
            mibGet->Param.LrWanVersion.LoRaWan = Nvm.MacGroup2.Version;
            mibGet->Param.LrWanVersion.LoRaWanRegion = RegionGetVersion( );
            break;
        }
 case MIB_APP_S_KEY:
        {
            
# 3644 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
           _Bool 
# 3644 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                found = 
# 3644 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                        0
# 3644 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ;
            for (int i = 0 ; i < 23 ; i++) {
                if (Nvm.SecureElement.KeyList[i].KeyID == APP_S_KEY) {
                    mibGet->Param.AppSKey = Nvm.SecureElement.KeyList[i].KeyValue;
                    found = 
# 3648 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                           1
# 3648 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                               ;
                    break;
                }
            }
            if (found == 
# 3652 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                        0
# 3652 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ) {
                status = LORAMAC_STATUS_SERVICE_UNKNOWN;
            }
     break;
        }
 case MIB_NWK_S_ENC_KEY:
        {
            
# 3659 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
           _Bool 
# 3659 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                found = 
# 3659 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                        0
# 3659 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ;
            for (int i = 0 ; i < 23 ; i++) {
                if (Nvm.SecureElement.KeyList[i].KeyID == NWK_S_ENC_KEY) {
                    mibGet->Param.NwkSEncKey = Nvm.SecureElement.KeyList[i].KeyValue;
                    found = 
# 3663 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                           1
# 3663 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                               ;
                    break;
                }
            }
            if (found == 
# 3667 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                        0
# 3667 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ) {
                status = LORAMAC_STATUS_SERVICE_UNKNOWN;
            }
     break;
        }
        default:
        {
            status = LoRaMacClassBMibGetRequestConfirm( mibGet );
            break;
        }
    }
    return status;
}

LoRaMacStatus_t LoRaMacMibSetRequestConfirm( MibRequestConfirm_t* mibSet )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_OK;
    ChanMaskSetParams_t chanMaskSet;
    VerifyParams_t verify;

    if( mibSet == 
# 3687 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                 ((void *)0) 
# 3687 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                      )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        return LORAMAC_STATUS_BUSY;
    }

    switch( mibSet->Type )
    {
        case MIB_DEVICE_CLASS:
        {
            status = SwitchClass( mibSet->Param.Class );
            break;
        }
        case MIB_NETWORK_ACTIVATION:
        {
            if( mibSet->Param.NetworkActivation != ACTIVATION_TYPE_OTAA )
            {
                Nvm.MacGroup2.NetworkActivation = mibSet->Param.NetworkActivation;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_DEV_EUI:
        {
            if( SecureElementSetDevEui( mibSet->Param.DevEui ) != SECURE_ELEMENT_SUCCESS )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_JOIN_EUI:
        {
            if( SecureElementSetJoinEui( mibSet->Param.JoinEui ) != SECURE_ELEMENT_SUCCESS )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_SE_PIN:
        {
            if( SecureElementSetPin( mibSet->Param.SePin ) != SECURE_ELEMENT_SUCCESS )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_ADR:
        {
            Nvm.MacGroup2.AdrCtrlOn = mibSet->Param.AdrEnable;
            break;
        }
        case MIB_NET_ID:
        {
            Nvm.MacGroup2.NetID = mibSet->Param.NetID;
            break;
        }
        case MIB_DEV_ADDR:
        {
            Nvm.MacGroup2.DevAddr = mibSet->Param.DevAddr;
            break;
        }
        case MIB_APP_KEY:
        {
            if( mibSet->Param.AppKey != 
# 3756 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3756 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( APP_KEY, mibSet->Param.AppKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_NWK_KEY:
        {
            if( mibSet->Param.NwkKey != 
# 3771 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3771 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( NWK_KEY, mibSet->Param.NwkKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_J_S_INT_KEY:
        {
            if( mibSet->Param.JSIntKey != 
# 3786 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         ((void *)0) 
# 3786 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( J_S_INT_KEY, mibSet->Param.JSIntKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_J_S_ENC_KEY:
        {
            if( mibSet->Param.JSEncKey != 
# 3801 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                         ((void *)0) 
# 3801 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                              )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( J_S_ENC_KEY, mibSet->Param.JSEncKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_F_NWK_S_INT_KEY:
        {
            if( mibSet->Param.FNwkSIntKey != 
# 3816 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 3816 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                 )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( F_NWK_S_INT_KEY, mibSet->Param.FNwkSIntKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_S_NWK_S_INT_KEY:
        {
            if( mibSet->Param.SNwkSIntKey != 
# 3831 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 3831 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                 )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( S_NWK_S_INT_KEY, mibSet->Param.SNwkSIntKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_NWK_S_ENC_KEY:
        {
            if( mibSet->Param.NwkSEncKey != 
# 3846 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 3846 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( NWK_S_ENC_KEY, mibSet->Param.NwkSEncKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_APP_S_KEY:
        {
            if( mibSet->Param.AppSKey != 
# 3861 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                        ((void *)0) 
# 3861 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( APP_S_KEY, mibSet->Param.AppSKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KE_KEY:
        {
            if( mibSet->Param.McKEKey != 
# 3876 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                        ((void *)0) 
# 3876 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                             )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KE_KEY, mibSet->Param.McKEKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KEY_0:
        {
            if( mibSet->Param.McKey0 != 
# 3891 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3891 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KEY_0, mibSet->Param.McKey0 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_APP_S_KEY_0:
        {
            if( mibSet->Param.McAppSKey0 != 
# 3906 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 3906 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_APP_S_KEY_0, mibSet->Param.McAppSKey0 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_NWK_S_KEY_0:
        {
            if( mibSet->Param.McNwkSKey0 != 
# 3921 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 3921 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_NWK_S_KEY_0, mibSet->Param.McNwkSKey0 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KEY_1:
        {
            if( mibSet->Param.McKey1 != 
# 3936 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3936 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KEY_1, mibSet->Param.McKey1 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_APP_S_KEY_1:
        {
            if( mibSet->Param.McAppSKey1 != 
# 3951 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 3951 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_APP_S_KEY_1, mibSet->Param.McAppSKey1 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_NWK_S_KEY_1:
        {
            if( mibSet->Param.McNwkSKey1 != 
# 3966 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 3966 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_NWK_S_KEY_1, mibSet->Param.McNwkSKey1 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KEY_2:
        {
            if( mibSet->Param.McKey2 != 
# 3981 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3981 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KEY_2, mibSet->Param.McKey2 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_APP_S_KEY_2:
        {
            if( mibSet->Param.McAppSKey2 != 
# 3996 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 3996 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_APP_S_KEY_2, mibSet->Param.McAppSKey2 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_NWK_S_KEY_2:
        {
            if( mibSet->Param.McNwkSKey2 != 
# 4011 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4011 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_NWK_S_KEY_2, mibSet->Param.McNwkSKey2 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KEY_3:
        {
            if( mibSet->Param.McKey3 != 
# 4026 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 4026 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KEY_3, mibSet->Param.McKey3 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_APP_S_KEY_3:
        {
            if( mibSet->Param.McAppSKey3 != 
# 4041 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4041 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_APP_S_KEY_3, mibSet->Param.McAppSKey3 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_NWK_S_KEY_3:
        {
            if( mibSet->Param.McNwkSKey3 != 
# 4056 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4056 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_NWK_S_KEY_3, mibSet->Param.McNwkSKey3 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_PUBLIC_NETWORK:
        {
            Nvm.MacGroup2.PublicNetwork = mibSet->Param.EnablePublicNetwork;
            Radio.SetPublicNetwork( Nvm.MacGroup2.PublicNetwork );
            break;
        }
        case MIB_RX2_CHANNEL:
        {
            verify.DatarateParams.Datarate = mibSet->Param.Rx2Channel.Datarate;
            verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
# 4088 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) != 
# 4088 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4088 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            else
            {
                verify.Frequency = mibSet->Param.Rx2Channel.Frequency;
                if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_FREQUENCY ) != 
# 4095 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                   1 
# 4095 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                        )
                {
                    status = LORAMAC_STATUS_PARAMETER_INVALID;
                }
                else
                {
                    Nvm.MacGroup2.MacParams.Rx2Channel = mibSet->Param.Rx2Channel;
                }
            }
            break;
        }
        case MIB_RX2_DEFAULT_CHANNEL:
        {
            verify.DatarateParams.Datarate = mibSet->Param.Rx2Channel.Datarate;
            verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) == 
# 4111 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4111 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup2.MacParamsDefaults.Rx2Channel = mibSet->Param.Rx2DefaultChannel;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_RXC_CHANNEL:
        {
            verify.DatarateParams.Datarate = mibSet->Param.RxCChannel.Datarate;
            verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) == 
# 4126 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4126 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup2.MacParams.RxCChannel = mibSet->Param.RxCChannel;

                if( ( Nvm.MacGroup2.DeviceClass == CLASS_C ) && ( Nvm.MacGroup2.NetworkActivation != ACTIVATION_TYPE_NONE ) )
                {




                    Radio.Sleep( );

                    OpenContinuousRxCWindow( );
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_RXC_DEFAULT_CHANNEL:
        {
            verify.DatarateParams.Datarate = mibSet->Param.RxCChannel.Datarate;
            verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) == 
# 4152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup2.MacParamsDefaults.RxCChannel = mibSet->Param.RxCDefaultChannel;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_DEFAULT_MASK:
        {
            chanMaskSet.ChannelsMaskIn = mibSet->Param.ChannelsDefaultMask;
            chanMaskSet.ChannelsMaskType = CHANNELS_DEFAULT_MASK;

            if( RegionChanMaskSet( Nvm.MacGroup2.Region, &chanMaskSet ) == 
# 4167 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                          0 
# 4167 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_MASK:
        {
            chanMaskSet.ChannelsMaskIn = mibSet->Param.ChannelsMask;
            chanMaskSet.ChannelsMaskType = CHANNELS_MASK;

            if( RegionChanMaskSet( Nvm.MacGroup2.Region, &chanMaskSet ) == 
# 4178 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                          0 
# 4178 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_NB_TRANS:
        {
            if( ( mibSet->Param.ChannelsNbTrans >= 1 ) &&
                ( mibSet->Param.ChannelsNbTrans <= 15 ) )
            {
                Nvm.MacGroup2.MacParams.ChannelsNbTrans = mibSet->Param.ChannelsNbTrans;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MAX_RX_WINDOW_DURATION:
        {
            Nvm.MacGroup2.MacParams.MaxRxWindow = mibSet->Param.MaxRxWindow;
            break;
        }
        case MIB_RECEIVE_DELAY_1:
        {
            Nvm.MacGroup2.MacParams.ReceiveDelay1 = mibSet->Param.ReceiveDelay1;
            break;
        }
        case MIB_RECEIVE_DELAY_2:
        {
            Nvm.MacGroup2.MacParams.ReceiveDelay2 = mibSet->Param.ReceiveDelay2;
            break;
        }
        case MIB_JOIN_ACCEPT_DELAY_1:
        {
            Nvm.MacGroup2.MacParams.JoinAcceptDelay1 = mibSet->Param.JoinAcceptDelay1;
            break;
        }
        case MIB_JOIN_ACCEPT_DELAY_2:
        {
            Nvm.MacGroup2.MacParams.JoinAcceptDelay2 = mibSet->Param.JoinAcceptDelay2;
            break;
        }
        case MIB_CHANNELS_DEFAULT_DATARATE:
        {
            verify.DatarateParams.Datarate = mibSet->Param.ChannelsDefaultDatarate;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_DEF_TX_DR ) == 
# 4226 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                               1 
# 4226 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                    )
            {
                Nvm.MacGroup2.ChannelsDatarateDefault = verify.DatarateParams.Datarate;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_DATARATE:
        {
            verify.DatarateParams.Datarate = mibSet->Param.ChannelsDatarate;
            verify.DatarateParams.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_TX_DR ) == 
# 4241 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4241 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup1.ChannelsDatarate = verify.DatarateParams.Datarate;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_DEFAULT_TX_POWER:
        {
            verify.TxPower = mibSet->Param.ChannelsDefaultTxPower;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_DEF_TX_POWER ) == 
# 4255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                  1 
# 4255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                       )
            {
                Nvm.MacGroup2.ChannelsTxPowerDefault = verify.TxPower;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_TX_POWER:
        {
            verify.TxPower = mibSet->Param.ChannelsTxPower;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_TX_POWER ) == 
# 4269 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                              1 
# 4269 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                   )
            {
                Nvm.MacGroup1.ChannelsTxPower = verify.TxPower;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_SYSTEM_MAX_RX_ERROR:
        {
            Nvm.MacGroup2.MacParams.SystemMaxRxError = Nvm.MacGroup2.MacParamsDefaults.SystemMaxRxError = mibSet->Param.SystemMaxRxError;
            break;
        }
        case MIB_MIN_RX_SYMBOLS:
        {
            Nvm.MacGroup2.MacParams.MinRxSymbols = Nvm.MacGroup2.MacParamsDefaults.MinRxSymbols = mibSet->Param.MinRxSymbols;
            break;
        }
        case MIB_ANTENNA_GAIN:
        {
            Nvm.MacGroup2.MacParams.AntennaGain = mibSet->Param.AntennaGain;
            break;
        }
        case MIB_DEFAULT_ANTENNA_GAIN:
        {
            Nvm.MacGroup2.MacParamsDefaults.AntennaGain = mibSet->Param.DefaultAntennaGain;
            break;
        }
        case MIB_NVM_CTXS:
        {
            if( mibSet->Param.Contexts != 0 )
            {
                status = RestoreNvmData( mibSet->Param.Contexts );
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_ABP_LORAWAN_VERSION:
        {
            if( mibSet->Param.AbpLrWanVersion.Fields.Minor <= 1 )
            {
                Nvm.MacGroup2.Version = mibSet->Param.AbpLrWanVersion;

                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetLrWanVersion( mibSet->Param.AbpLrWanVersion ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        default:
        {
            status = LoRaMacMibClassBSetRequestConfirm( mibSet );
            break;
        }
    }
    return status;
}

LoRaMacStatus_t LoRaMacChannelAdd( uint8_t id, ChannelParams_t params )
{
    ChannelAddParams_t channelAdd;


    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        if( ( MacCtx.MacState & LORAMAC_TX_CONFIG ) != LORAMAC_TX_CONFIG )
        {
            return LORAMAC_STATUS_BUSY;
        }
    }

    channelAdd.NewChannel = &params;
    channelAdd.ChannelId = id;
    return RegionChannelAdd( Nvm.MacGroup2.Region, &channelAdd );
}

LoRaMacStatus_t LoRaMacChannelRemove( uint8_t id )
{
    ChannelRemoveParams_t channelRemove;

    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        if( ( MacCtx.MacState & LORAMAC_TX_CONFIG ) != LORAMAC_TX_CONFIG )
        {
            return LORAMAC_STATUS_BUSY;
        }
    }

    channelRemove.ChannelId = id;

    if( RegionChannelsRemove( Nvm.MacGroup2.Region, &channelRemove ) == 
# 4369 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                       0 
# 4369 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                             )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacMcChannelSetup( McChannelParams_t *channel )
{
    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        return LORAMAC_STATUS_BUSY;
    }

    if( channel->GroupID >= 4 )
    {
        return LORAMAC_STATUS_MC_GROUP_UNDEFINED;
    }

    Nvm.MacGroup2.MulticastChannelList[channel->GroupID].ChannelParams = *channel;

    if( channel->IsRemotelySetup == 
# 4390 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                   1 
# 4390 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                        )
    {
        const KeyIdentifier_t mcKeys[4] = { MC_KEY_0, MC_KEY_1, MC_KEY_2, MC_KEY_3 };
        if( LoRaMacCryptoSetKey( mcKeys[channel->GroupID], channel->McKeys.McKeyE ) != LORAMAC_CRYPTO_SUCCESS )
        {
            return LORAMAC_STATUS_CRYPTO_ERROR;
        }

        if( LoRaMacCryptoDeriveMcSessionKeyPair( channel->GroupID, channel->Address ) != LORAMAC_CRYPTO_SUCCESS )
        {
            return LORAMAC_STATUS_CRYPTO_ERROR;
        }
    }
    else
    {
        const KeyIdentifier_t mcAppSKeys[4] = { MC_APP_S_KEY_0, MC_APP_S_KEY_1, MC_APP_S_KEY_2, MC_APP_S_KEY_3 };
        const KeyIdentifier_t mcNwkSKeys[4] = { MC_NWK_S_KEY_0, MC_NWK_S_KEY_1, MC_NWK_S_KEY_2, MC_NWK_S_KEY_3 };
        if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( mcAppSKeys[channel->GroupID], channel->McKeys.Session.McAppSKey ) )
        {
            return LORAMAC_STATUS_CRYPTO_ERROR;
        }
        if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( mcNwkSKeys[channel->GroupID], channel->McKeys.Session.McNwkSKey ) )
        {
            return LORAMAC_STATUS_CRYPTO_ERROR;
        }
    }

    if( channel->Class == CLASS_B )
    {

        LoRaMacClassBSetMulticastPeriodicity( &Nvm.MacGroup2.MulticastChannelList[channel->GroupID] );
    }


    *Nvm.MacGroup2.MulticastChannelList[channel->GroupID].DownLinkCounter = 0xFFFFFFFF;
    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacMcChannelDelete( AddressIdentifier_t groupID )
{
    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        return LORAMAC_STATUS_BUSY;
    }

    if( ( groupID >= 4 ) ||
        ( Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams.IsEnabled == 
# 4436 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                0 
# 4436 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                      ) )
    {
        return LORAMAC_STATUS_MC_GROUP_UNDEFINED;
    }

    McChannelParams_t channel;


    memset1( ( uint8_t* )&channel, 0, sizeof( McChannelParams_t ) );

    Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams = channel;
    return LORAMAC_STATUS_OK;
}

uint8_t LoRaMacMcChannelGetGroupId( uint32_t mcAddress )
{
    for( uint8_t i = 0; i < 4; i++ )
    {
        if( mcAddress == Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.Address )
        {
            return i;
        }
    }
    return 0xFF;
}

LoRaMacStatus_t LoRaMacMcChannelSetupRxParams( AddressIdentifier_t groupID, McRxParams_t *rxParams, uint8_t *status )
{
   *status = 0x1C + ( groupID & 0x03 );

    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        return LORAMAC_STATUS_BUSY;
    }

    DeviceClass_t devClass = Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams.Class;
    if( ( devClass == CLASS_A ) || ( devClass > CLASS_C ) )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    if( ( groupID >= 4 ) ||
        ( Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams.IsEnabled == 
# 4478 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                0 
# 4478 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                      ) )
    {
        return LORAMAC_STATUS_MC_GROUP_UNDEFINED;
    }
    *status &= 0x0F;

    VerifyParams_t verify;

    if( devClass == CLASS_B )
    {
        verify.DatarateParams.Datarate = rxParams->ClassB.Datarate;
    }
    else
    {
        verify.DatarateParams.Datarate = rxParams->ClassC.Datarate;
    }
    verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

    if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) == 
# 4496 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                   1 
# 4496 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                        )
    {
        *status &= 0xFB;
    }


    if( devClass == CLASS_B )
    {
        verify.Frequency = rxParams->ClassB.Frequency;
    }
    else
    {
        verify.Frequency = rxParams->ClassC.Frequency;
    }
    if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_FREQUENCY ) == 
# 4510 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                       1 
# 4510 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                            )
    {
        *status &= 0xF7;
    }

    if( *status == ( groupID & 0x03 ) )
    {

        Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams.RxParams = *rxParams;
    }

    MibRequestConfirm_t mibReq;
    mibReq.Type = MIB_DEVICE_CLASS;
    LoRaMacMibGetRequestConfirm(&mibReq);
    if(mibReq.Param.Class == CLASS_C)
    {
        mibReq.Type = MIB_NETWORK_ACTIVATION;
        LoRaMacMibGetRequestConfirm(&mibReq);
        if(mibReq.Param.NetworkActivation!=ACTIVATION_TYPE_NONE)
        {
            for( int8_t i = 0; i < 4; i++ )
            {
                if( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.IsEnabled == 
# 4532 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                                    1 
# 4532 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                         )

                {
                    Nvm.MacGroup2.MacParams.RxCChannel.Frequency = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.ClassC.Frequency;
                    Nvm.MacGroup2.MacParams.RxCChannel.Datarate = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.ClassC.Datarate;

                    MacCtx.RxWindowCConfig.Channel = MacCtx.Channel;
                    MacCtx.RxWindowCConfig.Frequency = Nvm.MacGroup2.MacParams.RxCChannel.Frequency;
                    MacCtx.RxWindowCConfig.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
                    MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C_MULTICAST;
                    MacCtx.RxWindowCConfig.RxContinuous = 
# 4542 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                         1
# 4542 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                             ;


                    MacCtx.NodeAckRequested = 
# 4545 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                             0
# 4545 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                  ;

                    Radio.Sleep( );

                    OpenContinuousRxCWindow( );
                    break;
                }

            }
        }
    }
    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacMlmeRequest( MlmeReq_t* mlmeRequest )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_SERVICE_UNKNOWN;
    MlmeConfirmQueue_t queueElement;
    uint8_t macCmdPayload[2] = { 0x00, 0x00 };

    if( mlmeRequest == 
# 4565 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                      ((void *)0) 
# 4565 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                           )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    if( LoRaMacIsBusy( ) == 
# 4569 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                           1 
# 4569 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                )
    {
        return LORAMAC_STATUS_BUSY;
    }
    if( LoRaMacConfirmQueueIsFull( ) == 
# 4573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                       1 
# 4573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            )
    {
        return LORAMAC_STATUS_BUSY;
    }

    if( LoRaMacConfirmQueueGetCnt( ) == 0 )
    {
        memset1( ( uint8_t* ) &MacCtx.MlmeConfirm, 0, sizeof( MacCtx.MlmeConfirm ) );
    }
    MacCtx.MlmeConfirm.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;

    MacCtx.MacFlags.Bits.MlmeReq = 1;
    queueElement.Request = mlmeRequest->Type;
    queueElement.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
    queueElement.RestrictCommonReadyToHandle = 
# 4587 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                              0
# 4587 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                   ;

    switch( mlmeRequest->Type )
    {
        case MLME_JOIN:
        {
            if( ( MacCtx.MacState & LORAMAC_TX_DELAYED ) == LORAMAC_TX_DELAYED )
            {
                return LORAMAC_STATUS_BUSY;
            }

            ResetMacParameters( );

            Nvm.MacGroup1.ChannelsDatarate = RegionAlternateDr( Nvm.MacGroup2.Region, mlmeRequest->Req.Join.Datarate, ALTERNATE_DR );

            queueElement.Status = LORAMAC_EVENT_INFO_STATUS_JOIN_FAIL;

            status = SendReJoinReq( JOIN_REQ );

            if( status != LORAMAC_STATUS_OK )
            {

                Nvm.MacGroup1.ChannelsDatarate = RegionAlternateDr( Nvm.MacGroup2.Region, mlmeRequest->Req.Join.Datarate, ALTERNATE_DR_RESTORE );
            }
            break;
        }
        case MLME_LINK_CHECK:
        {

            status = LORAMAC_STATUS_OK;
            if( LoRaMacCommandsAddCmd( MOTE_MAC_LINK_CHECK_REQ, macCmdPayload, 0 ) != LORAMAC_COMMANDS_SUCCESS )
            {
                status = LORAMAC_STATUS_MAC_COMMAD_ERROR;
            }
            break;
        }
        case MLME_TXCW:
        {
            status = SetTxContinuousWave( mlmeRequest->Req.TxCw.Timeout );
            break;
        }
        case MLME_TXCW_1:
        {

            status = SetTxContinuousWave1( mlmeRequest->Req.TxCw.Timeout, mlmeRequest->Req.TxCw.Frequency, mlmeRequest->Req.TxCw.Power );
            break;
        }
        case MLME_DEVICE_TIME:
        {

            status = LORAMAC_STATUS_OK;
            if( LoRaMacCommandsAddCmd( MOTE_MAC_DEVICE_TIME_REQ, macCmdPayload, 0 ) != LORAMAC_COMMANDS_SUCCESS )
            {
                status = LORAMAC_STATUS_MAC_COMMAD_ERROR;
            }
            break;
        }
        case MLME_PING_SLOT_INFO:
        {
            if( Nvm.MacGroup2.DeviceClass == CLASS_A )
            {
                uint8_t value = mlmeRequest->Req.PingSlotInfo.PingSlot.Value;


                LoRaMacClassBSetPingSlotInfo( mlmeRequest->Req.PingSlotInfo.PingSlot.Fields.Periodicity );
                macCmdPayload[0] = value;
                status = LORAMAC_STATUS_OK;
                if( LoRaMacCommandsAddCmd( MOTE_MAC_PING_SLOT_INFO_REQ, macCmdPayload, 1 ) != LORAMAC_COMMANDS_SUCCESS )
                {
                    status = LORAMAC_STATUS_MAC_COMMAD_ERROR;
                }
            }
            break;
        }
        case MLME_BEACON_TIMING:
        {

            status = LORAMAC_STATUS_OK;
            if( LoRaMacCommandsAddCmd( MOTE_MAC_BEACON_TIMING_REQ, macCmdPayload, 0 ) != LORAMAC_COMMANDS_SUCCESS )
            {
                status = LORAMAC_STATUS_MAC_COMMAD_ERROR;
            }
            break;
        }
        case MLME_BEACON_ACQUISITION:
        {

            queueElement.RestrictCommonReadyToHandle = 
# 4674 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                      1
# 4674 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                          ;

            if( LoRaMacClassBIsAcquisitionInProgress( ) == 
# 4676 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                          0 
# 4676 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                )
            {

                LoRaMacClassBSetBeaconState( BEACON_STATE_ACQUISITION );
                LoRaMacClassBBeaconTimerEvent( 
# 4680 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                              ((void *)0) 
# 4680 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                   );

                status = LORAMAC_STATUS_OK;
            }
            else
            {
                status = LORAMAC_STATUS_BUSY;
            }
            break;
        }
        default:
            break;
    }


    mlmeRequest->ReqReturn.DutyCycleWaitTime = MacCtx.DutyCycleWaitTime;

    if( status != LORAMAC_STATUS_OK )
    {
        if( LoRaMacConfirmQueueGetCnt( ) == 0 )
        {
            MacCtx.NodeAckRequested = 
# 4701 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                     0
# 4701 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                          ;
            MacCtx.MacFlags.Bits.MlmeReq = 0;
        }
    }
    else
    {
        LoRaMacConfirmQueueAdd( &queueElement );
    }
    return status;
}

LoRaMacStatus_t LoRaMacMcpsRequest( McpsReq_t* mcpsRequest )
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;
    LoRaMacStatus_t status = LORAMAC_STATUS_SERVICE_UNKNOWN;
    LoRaMacHeader_t macHdr;
    VerifyParams_t verify;
    uint8_t fPort = 0;
    void* fBuffer;
    uint16_t fBufferSize;
    int8_t datarate = 0;
    
# 4723 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
   _Bool 
# 4723 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
        readyToSend = 
# 4723 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                      0
# 4723 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                           ;

    if( mcpsRequest == 
# 4725 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                      ((void *)0) 
# 4725 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                           )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    if( LoRaMacIsBusy( ) == 
# 4729 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                           1 
# 4729 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                )
    {
        return LORAMAC_STATUS_BUSY;
    }

    macHdr.Value = 0;
    memset1( ( uint8_t* ) &MacCtx.McpsConfirm, 0, sizeof( MacCtx.McpsConfirm ) );
    MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;


    MacCtx.AckTimeoutRetriesCounter = 1;

    switch( mcpsRequest->Type )
    {
        case MCPS_UNCONFIRMED:
        {
            readyToSend = 
# 4745 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                         1
# 4745 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ;
            MacCtx.AckTimeoutRetries = 1;

            macHdr.Bits.MType = FRAME_TYPE_DATA_UNCONFIRMED_UP;
            fPort = mcpsRequest->Req.Unconfirmed.fPort;
            fBuffer = mcpsRequest->Req.Unconfirmed.fBuffer;
            fBufferSize = mcpsRequest->Req.Unconfirmed.fBufferSize;
            datarate = mcpsRequest->Req.Unconfirmed.Datarate;
            break;
        }
        case MCPS_CONFIRMED:
        {
            readyToSend = 
# 4757 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                         1
# 4757 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ;
            MacCtx.AckTimeoutRetries = ( ( ( mcpsRequest->Req.Confirmed.NbTrials ) < ( 8 ) ) ? ( mcpsRequest->Req.Confirmed.NbTrials ) : ( 8 ) );

            macHdr.Bits.MType = FRAME_TYPE_DATA_CONFIRMED_UP;
            fPort = mcpsRequest->Req.Confirmed.fPort;
            fBuffer = mcpsRequest->Req.Confirmed.fBuffer;
            fBufferSize = mcpsRequest->Req.Confirmed.fBufferSize;
            datarate = mcpsRequest->Req.Confirmed.Datarate;
            break;
        }
        case MCPS_PROPRIETARY:
        {
            readyToSend = 
# 4769 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                         1
# 4769 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                             ;
            MacCtx.AckTimeoutRetries = 1;

            macHdr.Bits.MType = FRAME_TYPE_PROPRIETARY;
            fBuffer = mcpsRequest->Req.Proprietary.fBuffer;
            fBufferSize = mcpsRequest->Req.Proprietary.fBufferSize;
            datarate = mcpsRequest->Req.Proprietary.Datarate;
            break;
        }
        default:
            break;
    }


    getPhy.Attribute = PHY_MIN_TX_DR;
    getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );


    datarate = ( ( ( datarate ) > ( ( int8_t )phyParam.Value ) ) ? ( datarate ) : ( ( int8_t )phyParam.Value ) );

    if( readyToSend == 
# 4790 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                      1 
# 4790 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                           )
    {
        if( Nvm.MacGroup2.AdrCtrlOn == 
# 4792 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                      0 
# 4792 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                            )
        {
            verify.DatarateParams.Datarate = datarate;
            verify.DatarateParams.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_TX_DR ) == 
# 4797 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4797 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup1.ChannelsDatarate = verify.DatarateParams.Datarate;
            }
            else
            {
                return LORAMAC_STATUS_PARAMETER_INVALID;
            }
        }

        status = Send( &macHdr, fPort, fBuffer, fBufferSize );
        if( status == LORAMAC_STATUS_OK )
        {
            MacCtx.McpsConfirm.McpsRequest = mcpsRequest->Type;
            MacCtx.MacFlags.Bits.McpsReq = 1;
        }
        else
        {
            MacCtx.NodeAckRequested = 
# 4815 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                     0
# 4815 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                          ;
        }
    }


    mcpsRequest->ReqReturn.DutyCycleWaitTime = MacCtx.DutyCycleWaitTime;

    return status;
}

void LoRaMacTestSetDutyCycleOn( 
# 4825 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                               _Bool 
# 4825 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                    enable )
{
    VerifyParams_t verify;

    verify.DutyCycle = enable;

    if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_DUTY_CYCLE ) == 
# 4831 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c" 3 4
                                                                        1 
# 4831 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.c"
                                                                             )
    {
        Nvm.MacGroup2.DutyCycleOn = enable;
    }
}

LoRaMacStatus_t LoRaMacDeInitialization( void )
{

    if ( LoRaMacStop( ) == LORAMAC_STATUS_OK )
    {

        TimerStop( &MacCtx.TxDelayedTimer );
        TimerStop( &MacCtx.RxWindowTimer1 );
        TimerStop( &MacCtx.RxWindowTimer2 );
        TimerStop( &MacCtx.AckTimeoutTimer );


        LoRaMacClassBHaltBeaconing( );


        ResetMacParameters( );


        Radio.Sleep( );


        return LORAMAC_STATUS_OK;
    }
    else
    {
        return LORAMAC_STATUS_BUSY;
    }
}
