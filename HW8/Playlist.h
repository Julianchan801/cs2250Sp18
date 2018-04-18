#ifndef PLAYLIST_H
#define PLAYLIST_H

typedef struct PlaylistNode_struct 
{
    char uniqueID[50];
    char songName[50];
    char artistName[50];
    int songLength;
    struct PlaylistNode_struct* nextNodePtr;
} PlaylistNode;

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc);
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);
void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode);
PlaylistNode* GetNextPlaylistNode();
void PrintPlaylistNode();

#endif
