//  Problem Statement : Accept Number from user and find maximum number

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to Check the Number is maximum

//  Step 2 : Algorithm 
/*
    Start
        Accept three Number from user and store it into No1 and No2 and No3
        if No1 is greater than No2 and No3
        return No1
        if No2 is greater than No1 and No3
        return No2
        else return No3
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : Maximum
//  Description : Return Max number
//  Input : int int int
//  Output : int
//  Author Name : Satyam Sanjay Kashid
//  Date : 03/10/2023
// 
////////////////////////////////////////////////////////////////

int Maximum(int Value1 , int Value2 , int Value3)
{
    if((Value1 >= Value2) && (Value1 >= Value3))
    {
        return Value1;
    }
    else if((Value2 >= Value1) && (Value2 >= Value3))
    {
        return Value2;
    }
    else 
        return Value3;
}

//////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto int No1 , No2 , No3;
    auto int Ans;

    printf("Enter the First Number : ");
    scanf("%d",&No1);

    printf("Enter the Second Number : ");
    scanf("%d",&No2);

    printf("Enter the Third Number : ");
    scanf("%d",&No3);

    Ans = Maximum(No1,No2,No3);
    printf("Maximum Number is %d : ",Ans);

    return 0;
}