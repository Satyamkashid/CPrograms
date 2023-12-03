//  Problem Statement : Accept Marks from user and calculate the percentage

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to calculate the percentage
//  Step 2 : Algorithm 
/*
    Start
        Accept Marks and Outof Marks from user and store it into iMarks and iOutofMarks
        Divide that Marks By Outof Marks and Multiply by 100
        store the value in fAns
        Display fAns

    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : CalculatePercentage
//  Description : It is used to Calculate the Percentage
//  Input : int int
//  Output : float
//  Author Name : Satyam Sanjay Kashid
//  Date : 03/10/2023
// 
////////////////////////////////////////////////////////////////

float CalculatePercentage(int iMarks, int iOutofMarks)
{
    float fAns;

    fAns = ((float) iMarks / (float) iOutofMarks) * 100;

    return fAns;
}

///////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto int iMarks,iOutofMarks;
    auto float fPer;

    printf("Enter the Marks : ");
    scanf("%d",&iMarks);

    printf("\nEnter the Outof Marks : ");
    scanf("%d",&iOutofMarks);

    fPer = CalculatePercentage(iMarks,iOutofMarks);

    printf("\nTotal Percentage is %f :",fPer);
    return 0;

}