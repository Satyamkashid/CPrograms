//  Problem Statement : Accept Number from user and calculate Cube

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to use the formula : No * No * No

//  Step 2 : Algorithm 
/*
    Start
        Accept Number from user and store it into No
        Create variable as Ans and store cube of that number
        Display the value of Cube to the user
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : CalculateCube 
//  Description : It is used to Calculate Cube
//  Input : int
//  Output : int
//  Author Name : Satyam Sanjay Kashid
//  Date : 02/10/2023
// 
////////////////////////////////////////////////////////////////

long int CalculateCube(int iValue)
{
    auto long int iAns = 0;

    iAns = iValue * iValue * iValue;
    return iAns;
}

///////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto int iNo = 0.0;
    auto long int iCube = 0.0;

    printf("Enter the Number to Calculate the Cube :");
    scanf("%d",&iNo);

    iCube = CalculateCube(iNo);

    printf("Cube of a Number is %ld:",iCube);
    return 0;
}