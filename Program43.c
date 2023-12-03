#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iSize)
{
    int iCnt=0;
    printf("Entered Elements are \n");

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

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {   
        printf("Enter the values\n");
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);

    free(ptr);
    return 0;

}