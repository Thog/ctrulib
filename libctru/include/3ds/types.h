/**
 * @file types.h
 * @brief Various system types.
 */
#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

//! The maximum value of a u64.
#define U64_MAX	UINT64_MAX

//! Possible media types.
typedef enum
{
	mediatype_NAND,     ///< NAND
	mediatype_SDMC,     ///< SDMC
	mediatype_GAMECARD, ///< Game card
} mediatypes_enum;

typedef uint8_t u8;   ///<  8-bit unsigned integer
typedef uint16_t u16; ///< 16-bit unsigned integer
typedef uint32_t u32; ///< 32-bit unsigned integer
typedef uint64_t u64; ///< 64-bit unsigned integer

typedef int8_t s8;   ///<  8-bit signed integer
typedef int16_t s16; ///< 16-bit signed integer
typedef int32_t s32; ///< 32-bit signed integer
typedef int64_t s64; ///< 64-bit signed integer

typedef volatile u8 vu8;   ///<  8-bit volatile unsigned integer.
typedef volatile u16 vu16; ///< 16-bit volatile unsigned integer.
typedef volatile u32 vu32; ///< 32-bit volatile unsigned integer.
typedef volatile u64 vu64; ///< 64-bit volatile unsigned integer.

typedef volatile s8 vs8;   ///<  8-bit volatile signed integer.
typedef volatile s16 vs16; ///< 16-bit volatile signed integer.
typedef volatile s32 vs32; ///< 32-bit volatile signed integer.
typedef volatile s64 vs64; ///< 64-bit volatile signed integer.

typedef u32 Handle;                 ///< Resource handle.
typedef s32 Result;                 ///< Function result.
typedef void (*ThreadFunc)(void *); ///< Thread entrypoint function.

//! Creates a bitmask from a bit number.
#define BIT(n) (1U<<(n))

//! aligns a struct (and other types?) to m, making sure that the size of the struct is a multiple of m.
#define ALIGN(m)   __attribute__((aligned(m)))
//! packs a struct (and other types?) so it won't include padding bytes.
#define PACKED     __attribute__((packed))

//! flags a function as deprecated.
#ifndef LIBCTRU_NO_DEPRECATION
#define DEPRECATED __attribute__ ((deprecated))
#else
#define DEPRECATED
#endif
