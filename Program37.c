#include<stdio.h>

int SumDigit(int iNo)
{
    int Digit = 0;
    int Sum = 0;

    while (iNo !=0)
    {
        Digit = iNo % 10;
        Sum = Sum+Digit;
        iNo = iNo / 10;
    }
    return Sum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Sum of the Digit is %d ",iRet);
    return 0;

}