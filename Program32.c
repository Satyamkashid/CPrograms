#include <stdio.h>
#include <stdbool.h>

bool ChkPrime(int iNo)
{
    int iCnt = 0;
    bool bflag = true;

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            bflag = false;
            break;
        }
    }
    return bflag;
}

int main()
{
    auto int iNo;
    bool bAns = false;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    bAns = ChkPrime(iNo);

    if (bAns == true)
    {
        printf("%d is Prime", iNo);
    }
    else
    {
        printf("%d is not Prime", iNo);
    }
    return 0;
}