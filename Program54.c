// Accept N number from user and return Smallest Number
#include<stdio.h>
#include<stdlib.h>

int Smallest(int arr[],int iSize)
{
    int iCnt=0;
    int imin=arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
            if(arr[iCnt] < imin)
            {
                imin = arr[iCnt];
            }
    }
    return imin;
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

    iRet = Smallest(ptr,iCount);
    printf("Minimum Element is %d",iRet);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}