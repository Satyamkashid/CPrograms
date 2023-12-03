#include<stdio.h>

int PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        return -1;
    }
    for(iCnt=1;iCnt<=(iNo * 2);iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}