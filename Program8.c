//  Problem Statement : Accept Radius from user and calculate Area of Circle

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to use the formula : Pi*r*r

//  Step 2 : Algorithm 
/*
    Start
        Accept Radius from user and store it into RADIUS
        Create variable as PI and store value 3.14
        Display the value of Area to the user
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : Calculate Area 
//  Description : It is used to Calculate Area of Circle
//  Input : float
//  Output : float
//  Author Name : Satyam Sanjay Kashid
//  Date : 02/10/2023
// 
////////////////////////////////////////////////////////////////

#define PI  3.14
float CalculateArea(float fValue)
{
    auto float fAns = 0.0;

    fAns = PI * fValue * fValue;
    return fAns;
}

///////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto float fRADIUS = 0.0;
    auto float fAREA = 0.0;

    printf("Enter the Radius");
    scanf("%f",&fRADIUS);

    fAREA = CalculateArea(fRADIUS);

    printf("Area of circle is %f:",fAREA);
    return 0;
}