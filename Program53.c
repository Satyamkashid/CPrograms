// Accept N number from user and return Largest Number
#include<stdio.h>
#include<stdlib.h>

int Largest(int arr[],int iSize)
{
    int iCnt=0;
    int imax=arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
            if(arr[iCnt] > imax)
            {
                imax = arr[iCnt];
            }
    }
    return imax;
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

    iRet = Largest(ptr,iCount);
    printf("Maximum Element is %d",iRet);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}