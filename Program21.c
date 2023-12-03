//  Problem Statement : print Jay Ganesh five time

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
//  Description : It is used to print Jay Ganesh Number of times
//  Input : none
//  Output : String
//  Author Name : Satyam Sanjay Kashid
//  Date : 09/10/2023
// 
////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=5;iCnt++)
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
    Display();
    return 0;
}