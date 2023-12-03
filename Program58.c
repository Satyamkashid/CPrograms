// Problem Statement : Display N Number of Star

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
    int iNo = 0;

    printf("Enter the Count\n");
    scanf("%d",&iNo);
    
    Display(iNo);

    return 0;
}