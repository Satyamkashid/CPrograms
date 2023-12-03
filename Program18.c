//  Problem Statement : Accept Three Number from user and display its average

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to display average

//  Step 2 : Algorithm 
/*
    Start
        Accept Three Number from user and store it into No1 , No2 , No3
        Add No1 , No2 , No3
        Divide by three
        display average
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : Average
//  Description : It will return Average of three number
//  Input : int int int
//  Output : float
//  Author Name : Satyam Sanjay Kashid
//  Date : 03/10/2023
// 
////////////////////////////////////////////////////////////////

float Average(int iNo1, int iNo2, int iNo3)
{
    float Ans = (iNo1 + iNo2 + iNo3) / 3;
    return Ans;
}

//////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto int No1 , No2 , No3;
    auto float Avg;

    printf("Enter the First Number : ");
    scanf("%d",&No1);

    printf("Enter the Second Number : ");
    scanf("%d",&No2);

    printf("Enter the Third Number : ");
    scanf("%d",&No3);

    Avg = Average(No1,No2,No3);
    printf("Average is %f : ",Avg);

    return 0;
}