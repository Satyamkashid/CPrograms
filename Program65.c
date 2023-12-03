// Problem Statement : take 6 as a input
// Display a b c d e f 

#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0;
    char ch = 'a';
    for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
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