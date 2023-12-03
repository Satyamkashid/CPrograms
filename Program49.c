// Accept N number from user and return Sum
#include<stdio.h>
#include<stdlib.h>

int Sum(int arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("How Many Elents You Want to store : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(sizeof(int));

    printf("Dynamic Memory gets allocated successfully for %d elements\n",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {   
        printf("Enter the element no %d : \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Sum(ptr,iCount);
    printf("Sum of the Elements are %d",iRet);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}