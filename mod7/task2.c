/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:38:06 AM
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
const int MtoK = 1000;
const int MintoHour = 60;
const int SectoMin = 60;
// Function Prototypes
double Velocity(double myTime, double distance);
double HtM(double Hours);
double KmtM(double distance);
// Main Function
int main()
{
    double myTime = 0;
    double distance = 0;

    //Ask the user to enter the distance and time
    printf("Please enter a distance (km):\n");
    scanf("%lf", &distance);

    printf("Please enter a time (hr):\n");//Create a function called velocity
    scanf("%lf", &myTime);

    printf("Your velocity is: %lf\n\n", Velocity(myTime, distance));

    printf("Your time in minutes is: %lf\n", HtM(myTime));
    printf("Your velocity is %lf in Km/min\n", Velocity(HtM(myTime), distance));
   
    printf("Your distance in meters is: %lf\n", KmtM(distance));
    printf("Your velocity is %lf in Meters/minute\n", Velocity(HtM(myTime), KmtM(distance) ) );
    
    return 0;
}
// Function Definitions

// Return Distance / time
// Read time(hr) and distance(km)
double Velocity(double myTime, double distance)
{

    return (distance / myTime);

}

//Conversion from hours to minutes
double HtM(double Hours)
{

    return (Hours * (double)MintoHour);
}


double KmtM(double distance)
{
    return distance * ((double)(MtoK)) ;

}



