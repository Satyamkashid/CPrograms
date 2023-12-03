// Problem Statement : Display 4 3 2 1 0

#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
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