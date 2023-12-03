//  Problem Statement : Accept two number and check the second number is factor of first

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to use the if condition

//  Step 2 : Algorithm 
/*
    Start
        Accept two Number from user and store it into No1 and No2
        divide No1/No2 
        if reminder is zero return true
        else return false
    Stop
*/

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : ChkFactors
//  Description : It will return True if it is factor of that number
//  Input : int
//  Output : bool
//  Author Name : Satyam Sanjay Kashid
//  Date : 09/10/2023
// 
////////////////////////////////////////////////////////////////

int ChkFactors(int iValue1, int iValue2)
{
    if(iValue1 % iValue2 == 0)
    {
        return true;
    }
    else{
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
    auto int iNo1 = 0 , iNo2 = 0;
    bool bAns = false;

    printf("Enter the first Number : ");
    scanf("%d",&iNo1);

    printf("Enter the Second Number : ");
    scanf("%d",&iNo2);

    bAns = ChkFactors(iNo1,iNo2);
    
    if(bAns == true)
    {
        printf("%d is factor of %d",iNo2,iNo1);
    }
    else
    {
        printf("%d is not factor of %d",iNo2,iNo1);

    }


}