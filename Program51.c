// Accept N number from user and return addition of Odd number
#include<stdio.h>
#include<stdlib.h>

int OddAddition(int arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt] % 2 != 0)
        {
            iSum = iSum + arr[iCnt];
        }
        
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

    iRet = OddAddition(ptr,iCount);
    printf("Sum of the Odd Elements are %d",iRet);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}