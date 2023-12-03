#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int isize)
{
    int iCnt = 0;
    printf("Entered Elements are\n");
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("How Many Elements You Want\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(sizeof(int));

    for(iCnt = 0; iCnt<iCount; iCnt++)
    {
        printf("Enter the Element\n");
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);

    return 0;
}