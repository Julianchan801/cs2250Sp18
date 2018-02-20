/*
 * =====================================================================================
 *
 *       Filename:  array2D.c
 *
 *    Description:  Learn about 2D arrays
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:14:25 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{

    int cityA;                  // Starting city
    int cityB;                  // Destination city
    int DrivingDistances[3][3]; // Driving distances
    int answer = 1;



    // Initialize distances array
    DrivingDistances[0][0] = 0;
    DrivingDistances[0][1] = 960;  // Boston-Chicago
    DrivingDistances[0][2] = 2960; // Boston-Los Angeles
    DrivingDistances[1][0] = 960;  // Chicago-Boston
    DrivingDistances[1][1] = 0;
    DrivingDistances[1][2] = 2011; // Chicago-Los Angeles
    DrivingDistances[2][0] = 2960; // Los Angeles-Boston
    DrivingDistances[2][1] = 2011; // Los Angeles-Chicago
    DrivingDistances[2][2] = 0;

    while(answer){
        printf("0: Boston  1: Chicago  2: Los Angeles\n");

        printf("Enter city pair (Ex: 1 2) -- ");
        scanf("%d %d", &cityA, &cityB);

        printf("Distance: %d miles\n", DrivingDistances[cityA][cityB]);

        //Ask user if they want another distance
        printf("Do you need another distance:\n");
        printf("\t 1) Yes\n\t 0) No\n");
        scanf("%d", &answer);

    }

    return 0;
}
// Function Definitions


