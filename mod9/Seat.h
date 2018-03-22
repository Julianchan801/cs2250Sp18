/*
 * =====================================================================================
 *
 *       Filename:  Seat.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:30:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEAT__INC__
#define  SEAT_INC__

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
const int NUM_SEATS = 5;
       char userKey = '-';
       int  seatNum = 0;

typedef struct Seat_struct {
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

/*** Functions for Seat ***/

void SeatMakeEmpty(Seat* seat);
bool SeatIsEmpty(Seat seat);
void SeatPrint(Seat seat);
/*** End functions for Seat ***/


/*** Functions for array of Seat ***/
void SeatsPrint(Seat seats[], int numSeats);

void SeatsMakeEmpty(Seat seats[], int numSeats);
/*** End functions for array of Seat ***/

#endif /* ----- #ifndef SEAT__INC__ ----- */

