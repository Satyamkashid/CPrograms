#include<stdio.h>   // for printf and scanf
#include<stdlib.h>  // for malloc and free

int main()
{
    int iCount = 0;
    int icnt = 0;
    int *ptr = NULL;


    printf("How Many Elements You Want \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    for(icnt = 0; icnt<iCount; icnt++)
    {
        printf("Enter the element : \n");
        scanf("%d",&ptr[icnt]);
    }

    printf("Entered Elements are \n");
    for(icnt=0; icnt<iCount; icnt++)
    {
        printf("%d\t",ptr[icnt]);
    }
    printf("\n");

    return 0;
}