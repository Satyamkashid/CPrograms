#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(iNo % 5 == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Value : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("%d is divisle by 5",iValue);
    }
    else
    {
        printf("%d is not divisle by 5",iValue);

    }

    return 0;

}