//  Problem Statement : print Jay Ganesh number of times

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to use the for loop

//  Step 2 : Algorithm 
/*
    Start
        Accept Number from user and store it into No
        Use for loop 
        Display 
    Stop
*/

#include<stdio.h>


/////////////////////////////////////////////////////////////////
// 
//  Function Name : Display
//  Description : It is used to print Jay Ganesh five times
//  Input : none
//  Output : String
//  Author Name : Satyam Sanjay Kashid
//  Date : 09/10/2023
// 
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Jay Ganesh......\n");
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

    printf("How Many Times You Want to print : ");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}