#ifndef PLATFORM_INFO_H
#define PLATFORM_INFO_H

#ifdef TARGET_N64
#define IS_64_BIT 0
#define IS_BIG_ENDIAN 1
#else
#include <stdint.h>
#define IS_64_BIT (UINTPTR_MAX == 0xFFFFFFFFFFFFFFFFU)
#define IS_BIG_ENDIAN (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
#endif

// basis.h
typedef	unsigned char		uchar;
typedef unsigned short		ushort;
typedef unsigned int		uint;
typedef unsigned long		ulong;
typedef long long			wlong;
typedef unsigned long long	uwlong;
#define DOUBLE_SIZE_ON_64_BIT(size) ((size) * (sizeof(void *) / 4))

#endif // PLATFORM_INFO_H
