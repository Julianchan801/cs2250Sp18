/*
 * =====================================================================================
 *
 *       Filename:  firstLinkedList.c
 *
 *    Description:  First linked list
 *
 *        Version:  1.0
 *        Created:  03/29/2018 09:25:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "IntLink.h"
// Constants

int main(void) {
    IntNode* headObj  = NULL; // Create intNode objects
    IntNode* nodeObj1 = NULL;
    IntNode* nodeObj2 = NULL;
    IntNode* nodeObj3 = NULL;
    IntNode* currObj  = NULL;

    // Front of nodes list
    headObj = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(headObj, -1, NULL);

    // Insert nodes
    nodeObj1 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj1, 555, NULL);
    IntNode_InsertAfter(headObj, nodeObj1);

    nodeObj2 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj2, 999, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj2);

    nodeObj3 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj3, 777, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj3);

    // Print linked list
    currObj = headObj;
    while (currObj != NULL) {
        IntNode_PrintNodeData(currObj);
        currObj = IntNode_GetNext(currObj);
    }

    return 0;
}


//USE control v to get rid of the comments

// Function Definitions

//ma
//G lastline
//


