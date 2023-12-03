// Accept N number from user and display Odd Number
#include<stdio.h>
#include<stdlib.h>

int OddDisplay(int arr[],int iSize)
{
    int iCnt=0;
    printf("Odd Elements are :\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt] % 2 != 0)
        {
            printf("%d\t",arr[iCnt]);
        }
    }
    printf("\n");
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

    OddDisplay(ptr,iCount);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}