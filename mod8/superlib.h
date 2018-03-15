/*
 * =====================================================================================
 *
 *       Filename:  superlib.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:43:49 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef __SuperLIB_H__
#define __SuperLIB_H__
// Constants
static const int INPUT_STR_SIZE = 50;  // Input string size

// Function Prototypes
void StrSpaceToHyphen(char modString[]);
//Task1: Function takes a string and returns the number of digits
int StrCountDigits(char modString[]);

#endif // SUPERLIB_H__

