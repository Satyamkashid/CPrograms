#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iSize)
{
    int iCnt=0;
    printf("Entered Elements are :\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\t",arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("How Many Elents You Want to store : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(sizeof(int));

    printf("Dynamic Memory gets allocated successfully for %d elements\n",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {   
        printf("Enter the element no %d : \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);

    free(ptr);

    printf("\nDynamic Memory gets deallocated successfully");

    return 0;

}