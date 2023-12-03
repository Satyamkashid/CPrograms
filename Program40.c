#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(int iNo)
{   
    int icopy = iNo;  // Zerox kadhaychi
    int iDigit = 0;
    int iRev = 0;

    while (iNo !=0)
    {
        iDigit = iNo % 10;

        iNo = iNo / 10;

        iRev = iRev * 10 + iDigit;

    }
    return iRev == icopy;

}

int main()
{
    int iNo = 0;
    bool bret = false;
    
    printf("Enter the Number : ");
    scanf("%d",&iNo);

    bret = ChkPalindrome(iNo);

    if(bret== true)
    {
        printf("%d is Palindrome",iNo);
    }
    else
    {
        printf("%d is not Palindrome",iNo);
    }

    return 0;
}