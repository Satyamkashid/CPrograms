#include <stdio.h>

void Display(int iNo)
{
    int Digit = 0;

    while (iNo > 0)
    {   
        printf("-------------------------------------------------------\n");
        Digit = iNo % 10;
        printf("Digit is : %d\n",Digit);
        iNo = iNo / 10;
        printf("Number is : %d",iNo);
    }
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}