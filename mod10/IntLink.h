/*
 * =====================================================================================
 *
 *       Filename:  IntLink.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 10:01:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INTLINK__INC__
#define  INTLINK_INC__
    <+DETAILED+>

#include <stdio.h>
#include <stdlib.h>
#include "IntLink.h"
// Constants

// Function Prototypes
// Function Definitions



typedef struct IntNode_struct {
    int dataVal;
    struct IntNode_struct* nextNodePtr;
} IntNode;
// Function Prototypes
//Use shift j to join lines
//


//Insert Mode
//ma
//G
//`a

void IntNode_Create (IntNode* thisNode, int dataInit, IntNode* nextLoc);
void IntNode_InsertAfter (IntNode* thisNode, IntNode* newNode);
void IntNode_PrintNodeData(IntNode* thisNode);
IntNode* IntNode_GetNext(IntNode* thisNode);
#endif /* ----- #ifndef INTLINK__INC__ ----- */

