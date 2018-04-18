#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Playlist.h"

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc) 
{
    return;
}

void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode) 
{
    PlaylistNode* tmpNext = NULL;
    tmpNext = thisNode->nextNodePtr; // Remember next
    thisNode->nextNodePtr = newNode; // this -- new -- ?
    newNode->nextNodePtr = tmpNext;
    return;
}

void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode) 
{
    return;
}

PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode) 
{
    return thisNode->nextNodePtr;
}

void PrintPlaylistNode(PlaylistNode* thisNode) 
{
    printf("Unique ID: %s\n", thisNode->uniqueID);
    printf("Song Name: %s\n", thisNode->songName);
    printf("Artist Name: %s\n", thisNode->artistName);
    printf("Song Length (in seconds): %d\n", thisNode->songLength);
    return;
}
