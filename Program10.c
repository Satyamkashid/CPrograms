//  Problem Statement : Accept Number from user and check it is Even or Odd

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to Check the Number is Even or Odd

//  Step 2 : Algorithm 
/*
    Start
        Accept Number from user and store it into No
        Divide that number by 2
        if reminder is 0 then display Even
        Otherwise Display Odd
    Stop
*/

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : ChkEven
//  Description : It is used to check the Number is Even or Odd
//  Input : int
//  Output : Even or Odd
//  Author Name : Satyam Sanjay Kashid
//  Date : 02/10/2023
// 
////////////////////////////////////////////////////////////////

bool ChkEven(int iValue)
{
    if(iValue % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto int iNo = 0.0;
    auto bool bRet = false;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    bRet = ChkEven(iNo);
    if(bRet == true)
    {
        printf("%d is an Even Number\n",iNo);
    }
    else
    {
        printf("%d is an Odd Number\n",iNo);
    }

    return 0;
}