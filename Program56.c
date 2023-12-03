// Accept N number from user and return frequency
#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[],int iSize,int ivalue)
{
    int iCnt=0;
    int ifrequency = 0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
            if(arr[iCnt] == ivalue)
            {
                ifrequency++;
            }
    }
    return ifrequency;
}

int main()
{
    int iCount = 0;
    int ivalue = 0;
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

    printf("Enter the Number You want to count\n");
    scanf("%d",&ivalue);

    iRet = Frequency(ptr,iCount,ivalue);
    printf("Frequency is %d",iRet);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}