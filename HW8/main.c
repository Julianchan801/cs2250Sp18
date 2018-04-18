#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Playlist.h"

void PrintMenu(char playlistTitle[]);

int main(void) 
{
    char playlistTitle[50] = "";

    // Prompt user for playlist title
    printf("Enter playlist's title:\n");
    fgets(playlistTitle, 50, stdin);
    printf("\n");

    // Eliminate end-of-line char
    playlistTitle[strlen(playlistTitle) - 1] = '\0';

    // Output play list menu options
    PrintMenu(playlistTitle);

    return 0;
}

void PrintMenu(char playlistTitle[]) 
{
    char menuOp = ' ';
    char temp[50] = "";
    char uniqueID[50] = "";
    char songName[50] = "";
    char artistName[50] = "";
    int songLength = 0;
    int numNodes = 0;
    int songPosition = 0;
    int newPosition = 0;
    int totalTime = 0;
    // IF you follow this template, you will use 
    // at least all these pointers
    //PlaylistNode* newSong = NULL;
    PlaylistNode* currNode = NULL;
    PlaylistNode* songNode = NULL;
    //PlaylistNode* prevNode = NULL;
    PlaylistNode* insertPosNode = NULL;
    PlaylistNode* headNode = NULL;
    PlaylistNode* tailNode = NULL;
    PlaylistNode* currPrintNode = NULL;


    // Output menu option, prompt users for valid selection
    while(menuOp != 'q') 
    {
        menuOp = ' ';
        printf("%s PLAYLIST MENU\n", playlistTitle);
        printf("a - Add song\n");
        printf("r - Remove song\n");
        printf("c - Change position of song\n");
        printf("s - Output songs by specific artist\n");
        printf("t - Output total time of playlist (in seconds)\n");
        printf("o - Output full playlist\n");
        printf("q - Quit\n\n");

        while (menuOp != 'a' && menuOp != 'r' && menuOp != 'c' &&
                menuOp != 's' && menuOp != 't' && menuOp != 'o' && menuOp != 'q') 
        {
            printf("Choose an option:\n");
            scanf(" %c", &menuOp);
        }

        // Call corresponding menu action
        switch (menuOp) 
        {
            case 'a':
                // Prompt user for song information
                printf("ADD SONG\n");
                printf("Enter song's unique ID:\n");
                scanf("%s", uniqueID);
                fgets(temp, 50, stdin); // clear stdin

                printf("Enter song's name:\n");
                fgets(songName, 50, stdin);
                songName[strlen(songName) - 1] = '\0'; // clear NULL

                printf("Enter artist's name:\n");
                fgets(artistName, 50, stdin);
                artistName[strlen(artistName) - 1] = '\0';

                printf("Enter song's length (in seconds):\n");
                scanf("%d", &songLength);
                printf("\n");

                // Create a new node for playlist
                // .....


                // If song is first in playlist, update head/tail
                // Otherwise insert to end of playlist and update tail
                // .....
                break;


            case 'r':
                // Output playlist messaging
                printf("REMOVE SONG\n");
                printf("Enter song's unique ID:\n");
                scanf("%s", uniqueID);

                // Count number of nodes in list
                songNode = headNode;

                // songNode is the song to be deleted
                // .....


                if (songNode == NULL) 
                {
                    // ERROR: uniqueID provided by user is invalid
                    // Do nothing
                }
                else 
                {
                    // Remove song at songPosition from list

                    // If songPosition is 1, list head is removed
                    if (songNode == headNode) 
                    {
                        headNode = GetNextPlaylistNode(songNode);
                    }
                    else 
                    {
                        // prevNode refers to node before the songNode
                        // .....

                        // prevNode updated so next is the node following songNode
                        // .....

                    } // end of else

                    printf("\"%s\" removed.\n\n", songNode->songName);
                } // end of else

                break;


            case 'c':
                // Prompt user to new song location
                printf("CHANGE POSITION OF SONG\n");
                printf("Enter song's current position:\n");
                scanf("%d", &songPosition);

                printf("Enter new position for song:\n");
                scanf("%d", &newPosition);

                // Count number of nodes in list
                // .....

                // songNode is the song to be moved
                // .....

                if (songNode == NULL) 
                {
                    // ERROR: songPosition provided by user is invalid
                    // Do nothing
                }
                else 
                {

                    // STEP 1: Remove song at songPosition from list. Keep reference to that song.

                    // If songPosition is 1, list head is removed
                    if (songNode == headNode) 
                    {
                        headNode = GetNextPlaylistNode(songNode);
                    }
                    else 
                    {
                        // prevNode refers to node before the songNode
                        // .....


                        // prevNode updated so next is the node following songNode
                        // .....
                    }

                    // STEP 2: Insert song at newPosition

                    // Insert songNode at head or if user position is before head
                    if (newPosition <= 1) 
                    {
                        SetNextPlaylistNode(songNode, headNode);
                        headNode = songNode;

                        printf("\"%s\" moved to position 1\n\n", songNode->songName);

                    }
                    else 
                    {
                        // insertPosNode refers to the node before the location songNode is inserted
                        // .....


                        // Insert songNode to new location
                        if (insertPosNode == NULL) 
                        {
                            InsertPlaylistNodeAfter(tailNode, songNode);
                            tailNode = songNode;
                            newPosition = numNodes + 1;
                        }
                        else
                        {
                            // .....
                        }

                        if (tailNode == insertPosNode) 
                        {
                            tailNode = songNode;
                        }

                        printf("\"%s\" moved to position %d\n\n",
                                songNode->songName, newPosition);
                    }
                }
                break;


            case 's':
                // Consume newline and prompt user for output criteria
                fgets(temp, 50, stdin);

                printf("OUTPUT SONGS BY SPECIFIC ARTIST\n");
                printf("Enter artist's name:\n");
                fgets(artistName, 50, stdin);
                artistName[strlen(artistName)-1] = '\0';

                // Search list for matching artists
                // ....
                // ....
                break;


            case 't':
                // Output playlist messaging
                printf("OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)\n");

                // Total song times for each song in the list
                currNode = headNode;
                totalTime = 0;

                while (currNode != NULL) 
                {
                    totalTime += currNode->songLength;
                    currNode = GetNextPlaylistNode(currNode);
                }

                printf("Total time: %d seconds\n\n", totalTime);
                break;


            case 'o':
                // Output playlist messaging
                printf("%s - OUTPUT FULL PLAYLIST\n", playlistTitle);

                // Iterate through each song in list
                numNodes = 1;
                currPrintNode = headNode;

                // If list is empty, output error message
                if (headNode == NULL) 
                {
                    printf("Playlist is empty\n\n");
                }
                // Otherwise call print function for each node in list
                else 
                {
                    while (currPrintNode != NULL) 
                    {
                        printf("%d.\n", numNodes);
                        PrintPlaylistNode(currPrintNode);
                        currPrintNode = GetNextPlaylistNode(currPrintNode);
                        printf("\n");
                        ++numNodes;
                    }
                }
                break;

        } // END of switch (menuOp) 
    } // END of while(menuOp != 'q') 
    return;
}// end of function menu


