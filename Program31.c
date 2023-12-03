//  Problem Statement : Accept Number from user and check whether the number is perfect or not

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to check the number is perfect or not

//  Step 2 : Algorithm
/*
    Start
        Accept Number from user and store it into No
        use loop
        if No % i == 0
        Sum = Sum+i
        if Sum == No
        return true
        else return false
    Stop
*/

#include <stdio.h>
#include <stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : ChkPerfect
//  Description : It will give you the factor of that number
//  Input : int
//  Output : int
//  Author Name : Satyam Sanjay Kashid
//  Date : 10/10/2023
//
////////////////////////////////////////////////////////////////

bool ChkPerfect(int iValue)
{
    int iCnt = 0;
    int iSum = 0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    for (iCnt = 1; iCnt <= (iValue / 2); iCnt++)
    {
        if (iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == iValue)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bAns = false;

    printf("Enter the Number : ");
    scanf("%d", &iNo);

    bAns = ChkPerfect(iNo);

    if (bAns == true)
    {
        printf("%d is a Perfect Number", iNo);
    }
    else
    {
        printf("%d is not Perfect Number", iNo);
    }

    return 0;
}
