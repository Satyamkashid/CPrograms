#include<stdio.h>

int ReverseNo(int iNo)
{
    int iDigit = 0;
    int iRev = 0; 

    while (iNo !=0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = iRev * 10 + iDigit;
    }
    return iRev;
    
}

int main()
{
    int iNo = 0;
    int Ans = 0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    Ans = ReverseNo(iNo);
    printf("The Reverse Number is %d : ",Ans);

    return 0;
}