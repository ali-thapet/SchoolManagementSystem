/** 
 * File: BIT_Math.h
 * Author: Eng- Mohamed Mokhtar
 * Group: Online16
 * Date: 2024,Feb
 * Description: This header file provides macros for bitwise operations and byte manipulation.
 * Version: 1.0
 */

#ifndef _HELPERS_BIT_MATH_H_
#define _HELPERS_BIT_MATH_H_

/*******************BIT_MANIPULATION***********************************/
#define SET_BIT(REG,BIT_INDEX)      (REG |= (1U << BIT_INDEX))	// Setting Bit to logical 1
#define CLR_BIT(REG,BIT_INDEX)      (REG &=~(1U << BIT_INDEX))	// Clearing Bit to logical 0
#define TOG_BIT(REG,BIT_INDEX)      (REG ^= (1U << BIT_INDEX))	// Inverting the state of Bit
#define GET_BIT(REG,BIT_INDEX)      (1U & (REG >> BIT_INDEX))	// Determining the value of Bit
/*--------------------------------------------------------------------*/
//#define GIVH_BIT(REG,BIT_INDEX,VALUE)	    (REG |= (VALUE << BIT_INDEX))
//#define GIVL_BIT(REG,BIT_INDEX,VALUE)	    (REG &=~(VALUE << BIT_INDEX))
#define SIGN_BIT(BIT_ACCESS,VALUE)		(BIT_ACCESS) = (VALUE)
#define HGH_BIT		1U
#define LOW_BIT		0U

/*******************BYTE_MANIPULATION**********************************/
#define SET_REG(REG)		(REG  = 0xFF)		// Setting a whole 1 byte register
#define CLR_REG(REG)		(REG  = 0x00)		// Clearing a whole 1 byte register
#define TOG_REG(REG)		(REG ^= 0xFF)		// Inverting a whole 1 byte register
#define	GET_REG(REG)		(REG)
#define GIV_REG(REG,VALUE)	(REG) =(VALUE)
/*--------------------------------------------------------------------*/
#define SET_LNP(REG)		(REG |= 0x0F)		// Setting Low nibble of 1 byte register
#define CLR_LNP(REG)		(REG &= 0xF0)		// Clearing Low nibble of 1 byte register
#define TOG_LNP(REG)		(REG ^= 0x0F)		// Inverting Low nibble of 1 byte register
#define SET_HNP(REG)		(REG |= 0xF0)		// Setting High nibble of 1 byte register
#define CLR_HNP(REG)		(REG &= 0x0F)		// Clearing High nibble of 1 byte register
#define TOG_HNP(REG)		(REG ^= 0xF0)		// Inverting High nibble of 1 byte register

#endif /* _HELPERS_BIT_MATH_H_ */
