// Accept N number from user and return even number count
#include<stdio.h>
#include<stdlib.h>

int EvenCount(int arr[],int iSize)
{
    int iCnt=0;
    int iEvenCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
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

    iRet = EvenCount(ptr,iCount);
    printf("Even Elements are %d",iRet);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}