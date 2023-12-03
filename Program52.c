// Accept N number from user and return Average
#include<stdio.h>
#include<stdlib.h>

float Average(int arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;
    float Avg = 0.0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
            iSum = iSum + arr[iCnt];
            Avg = (float)iSum / (float)iSize;
    }
    return Avg;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    float fRet = 0;

    printf("How Many Elents You Want to store : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(sizeof(int));

    printf("Dynamic Memory gets allocated successfully for %d elements\n",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {   
        printf("Enter the element no %d : \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr,iCount);
    printf("Average of Elements are %f",fRet);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}