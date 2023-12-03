// Problem Statement : Display Six Time Star

#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{   
    int iNo = 6;

    Display(iNo);

    return 0;
}