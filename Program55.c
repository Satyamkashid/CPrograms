// Accept N number from user and return Smallest Number and Largest Number
#include<stdio.h>
#include<stdlib.h>

void MaxMin(int arr[],int iSize)
{
    int iCnt=0;
    int imax = arr[0];
    int imin=arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
            if(arr[iCnt] < imin)
            {
                imin = arr[iCnt];
            }
            if(arr[iCnt] > imax)
            {
                imax = arr[iCnt];
            }
    }
    printf("Maximum Number is %d \n",imax);
    printf("Minimum Number is %d \n",imin);
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

    MaxMin(ptr,iCount);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}