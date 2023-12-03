#include <stdio.h>

void Display(int iNo)
{
    int Digit = 0;

    printf("Value of iNo is %d\n",iNo);     // 721

    Digit = iNo % 10;
    printf("Digit is %d\n", Digit);
    iNo = iNo / 10;     

    printf("Value of iNo is %d\n",iNo);     // 72

    Digit = iNo % 10;
    printf("Digit is %d\n", Digit);
    iNo = iNo / 10;     

    printf("Value of iNo is %d\n",iNo);     // 7

    Digit = iNo % 10;
    printf("Digit is %d\n", Digit);
    iNo = iNo / 10;     // 0
}

int main()
{
    int iValue = 721;

    // printf("Enter the number : ");
    // scanf("%d",&iValue);

    Display(iValue);

    return 0;
}