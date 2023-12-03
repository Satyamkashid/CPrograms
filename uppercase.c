//program to check the character is uppercase or lowecase
/*#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet in capital or in small");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
        printf("character is a upper case");
    }
    else {
        printf("character is in lowercase");
    }
}*/

// using ternary operator
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet in capital or in small");
    scanf("%c",&ch);
    ch>=65&&ch<=90?printf("Uppercase"):printf("lowercase");

}
