// Display Even Factor

#include <stdio.h>

int EvenFactor(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iCnt % 2 == 0 && iNo % iCnt == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    EvenFactor(iValue);

    return 0;
}