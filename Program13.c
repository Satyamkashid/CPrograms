//  Problem Statement : Accept percentage from user and display its class

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to print its class

//  Step 2 : Algorithm 
/*
    Start
        Accept percentge from user and store it into Marks
        if percentage is less than 35 print fail
        .
        .
        .display its class
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplayClass
//  Description : It take marks from user and display its class
//  Input : float
//  Output : string
//  Author Name : Satyam Sanjay Kashid
//  Date : 03/10/2023
// 
////////////////////////////////////////////////////////////////

void DisplayClass(float fMarks)
{
    if((fMarks < 0.0) || (fMarks > 100.00))
    {
        printf("Invalid Marks");
    }
    if((fMarks >= 0.0) && (fMarks < 35.00))
    {
        printf("You are Fail...");
    }
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your Class is Pass");
    }
    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is Second Class");
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is First Class");
    }
    else if((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your class is First Class with Distinction");
    }

}

//////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;

    printf("Enter the Percentage : ");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}