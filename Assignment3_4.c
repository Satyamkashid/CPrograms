#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(islower(cValue))
    {
        printf("%c",toupper(cValue));
    }
    else if(isupper(cValue))
    {
        printf("%c",tolower(cValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}