//  Problem Statement : Accept Number two number from user and display smallest number

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to display smallest number 

//  Step 2 : Algorithm 
/*
    Start
        Accept two Number from user and store it into No1 and No2
        if No1 is smaller than No2
        display No1
        else 
        Display No2
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : Smallest
//  Description : It will return smallest number betwwen two value
//  Input : int int
//  Output : int
//  Author Name : Satyam Sanjay Kashid
//  Date : 03/10/2023
// 
////////////////////////////////////////////////////////////////

int Smallest(int iValue1 , int iValue2)
{
    if(iValue1 < iValue2)
    {
        return iValue1;
    }
    else
        return iValue2;
}

//////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto int iNo1 , iNo2;
    auto int iAns;

    printf("Enter the First Number : ");
    scanf("%d",&iNo1);

    printf("Enter tthe Second Number : ");
    scanf("%d",&iNo2);

    iAns = Smallest(iNo1,iNo2);
    printf("Smallest Number is %d : ",iAns);
    
    return 0;

}