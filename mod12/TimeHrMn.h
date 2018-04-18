/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMn.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 09:58:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julian Chan (), julianchan@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  TIMEHRMN__INC__
#define  TIMEHRMN_INC__

TimeHrMn::TimeHrMn()
{
    hours = 0;
    minutes = 0;
    return;
}

class TimeHrMn
{
    private:
        int hours;
        int minutes;

    public:
        //Default constructor
        TimeHrMn();
        
        //Second Constructor
        
        TimeHrMn(int h, int min);
        
        //Getter show fucntion

        void ShowTime();
        //Operator +
        TimeHrMn operator+(TimeHrMn rhs);
        
};

#endif /* ----- #ifndef TIMEHRMN__INC__ ----- */

