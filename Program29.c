//  Problem Statement : Accept Number from user and find the factor of that number

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to find factors using for loop and if condition

//  Step 2 : Algorithm 
/*
    Start
        Accept Number from user and store it into No
        Use for loop 
        if No divide i == 0
        Display i
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplayFactors
//  Description : It will give you the factor of that number
//  Input : int
//  Output : int
//  Author Name : Satyam Sanjay Kashid
//  Date : 10/10/2023
// 
////////////////////////////////////////////////////////////////

int DisplayFactors(int iValue)
{
    int iCnt = 0;
    printf("Factors of %d are : \n",iValue);
    for(iCnt=1;iCnt<=(iValue / 2);iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

//////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto int iNo = 0;
    auto int iAns = 0;

    printf("Enter the Number to find the Factors : ");
    scanf("%d",&iNo);

    DisplayFactors(iNo);

}

// Time Complexity : O(n/2)