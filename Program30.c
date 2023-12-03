//  Problem Statement : Accept Number from user and find the sum of factor of that number

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to find factors using for loop and if condition

//  Step 2 : Algorithm 
/*
    Start
        
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplayFactorsSum
//  Description : It will give you the factor of that number
//  Input : int
//  Output : int
//  Author Name : Satyam Sanjay Kashid
//  Date : 10/10/2023
// 
////////////////////////////////////////////////////////////////

int DisplayFactorsSum(int iValue)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt=1;iCnt<=(iValue / 2);iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
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

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    iAns = DisplayFactorsSum(iNo);

    printf("Sum of the Factors are %d",iAns);

    return 0;

}
