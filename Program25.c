//  Problem Statement : Accept Number from User and print riverse numeric value

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to use the for loop

//  Step 2 : Algorithm 
/*
    Start
        Accept Number from user and store it into No
        Use for loop 
        Display iCnt 
    Stop
*/

#include<stdio.h>


/////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplayNo
//  Description : It is used to print Numaric value upto number
//  Input : int
//  Output : int
//  Author Name : Satyam Sanjay Kashid
//  Date : 09/10/2023
// 
////////////////////////////////////////////////////////////////

int DisplayNo(int iNo)
{
    int iCnt = 0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

//////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////
int main()
{   
    auto int iNo=0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    DisplayNo(iNo);
    return 0;
}