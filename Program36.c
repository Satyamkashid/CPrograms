#include<stdio.h>

int CountDigit(int iNo)
{
    int Digit = 0;
    int iCnt = 0;

    while (iNo !=0)
    {
        // Digit = iNo % 10;
        iNo = iNo / 10;
        iCnt ++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("%d",iRet);

    return 0;
}