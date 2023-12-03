///  Problem Statement : Accept Number from user and display its examtime

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to display exam time

//  Step 2 : Algorithm 
/*
    Start
        Accept Number from user and store it into No
        using if else display its exam time
    Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplayExamTime
//  Description : It will Display exam time
//  Input : int
//  Output : string
//  Author Name : Satyam Sanjay Kashid
//  Date : 03/10/2023
// 
////////////////////////////////////////////////////////////////

void DisplayExamTime(int iDiv)
{
    if(iDiv==1)
    {
        printf("your exam at 8 AM \n");
    }
    else if(iDiv==2)
    {
       printf("your exam at 9 AM \n");
    }
    else if(iDiv==3)
    {
      printf("your exam at 10 AM \n");
    }
        else if(iDiv==4)
    {
        printf("your exam at 11 AM \n");
    }    else if(iDiv==5)
    {
        printf("your exam at 12 AM \n");
    }
}

//////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    auto int ivalue=0;

    printf("Enter your standard :\n");
    scanf("%d",&ivalue);

     DisplayExamTime(ivalue);
    return 0;
}