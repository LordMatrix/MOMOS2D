/* 
 * File:   types.h
 * Author: Marcos Vazquez
 *
 * Created on October 25, 2016, 10:51 AM
 */

#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

 /// Signed Char
typedef ::int8_t int8; 
/// Short
typedef ::int16_t int16;
/// Int
typedef ::int32_t int32;
/// Long Long
typedef ::int64_t int64;
	

/// Unsigned Char
typedef ::uint8_t uint8;
/// Unsigned Short
typedef ::uint16_t uint16;
/// Unsigned Int
typedef ::uint32_t uint32;
/// Unsigned Long, Long
typedef ::uint64_t uint64;

enum Type {
		T_NONE = 0x0,
		
		T_FLOAT_1,
		T_FLOAT_2,
		T_FLOAT_3,
		T_FLOAT_4,

		T_INT_1,
		T_INT_2,
		T_INT_3,
		T_INT_4,

		T_UINT_1,
		T_UINT_2,
		T_UINT_3,
		T_UINT_4,

		T_MAT_4x4,
		T_MAT_3x3,
		T_MAT_2x2,

		T_FLOAT_VEC,
		T_INT_VEC
};

enum Attrib {
		A_NONE = 0x0,
		
		A_POSITION,
		A_NORMAL,
		A_UV,
};


typedef enum {
	NONE,
	RENDER,
	TRANSFORM,
	TEXT
} ComponentType;

#endif /* TYPES_H */

