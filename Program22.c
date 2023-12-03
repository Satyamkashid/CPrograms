//  Problem Statement : print Jay Ganesh five times

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to use the for loop

//  Step 2 : Algorithm 
/*
    Start
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

void Display()
{
    int iCnt = 0;
    for(iCnt=0;iCnt<5;iCnt++)
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