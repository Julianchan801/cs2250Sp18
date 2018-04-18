/*
 * =====================================================================================
 *
 *       Filename:  IntLink.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 10:01:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */



//Constructor
void IntNode_Create (IntNode* thisNode, int dataInit, IntNode* nextLoc) {
    thisNode->dataVal = dataInit;
    thisNode->nextNodePtr = nextLoc;
    return;
}

/* Insert newNode after node.
Before: thisNode -- next
After:  thisNode -- newNode -- next
*/
void IntNode_InsertAfter (IntNode* thisNode, IntNode* newNode) {
    IntNode* tmpNext = NULL;

    tmpNext = thisNode->nextNodePtr; // Remember next
    thisNode->nextNodePtr = newNode; // this -- new -- ?
    newNode->nextNodePtr = tmpNext;  // this -- new -- next
    return;
}

// Print dataVal
void IntNode_PrintNodeData(IntNode* thisNode) {
    printf("%d\n", thisNode->dataVal);
    return;
}

// Grab location pointed by nextNodePtr
IntNode* IntNode_GetNext(IntNode* thisNode) {
    return thisNode->nextNodePtr;
}

