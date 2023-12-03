//  Problem Statement : Accept Number from user and display its examtime

//  Step 1 : Understand the Problem Statement
//  Conclusion : We are going to display exam time

//  Step 2 : Algorithm 
/*
    Start
        Accept Number from user and store it into No
        using switch display its exam time
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

void DisplayExamTime(int iStandard)
{
    switch(iStandard)
    {
        case 1 : 
            printf("Yours exam is at 8 Am\n");
            break;
        case 2 :
            printf("Your exam is at 9 Am\n");
            break;
        case 3 :
            printf("Your exam is at 10 Am\n");
            break;
        case 4 :
            printf("Your exam is at 11 Am\n");
            break;
        case 5 :
            printf("Your exam is at 12 Noon\n");
            break;
        default :
            printf("Wrong Input....\n");
            break;
    }
}

///////////////////////////////////////////////////////////////////
// 
//   Entry Point Function
// 
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue;

    printf("Enter Your Standerd : ");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;

}