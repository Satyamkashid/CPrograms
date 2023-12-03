#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' || cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else{
        printf("It is Not Vowel");
    }
}