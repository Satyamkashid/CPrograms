#include<stdio.h>
void swapnum(int*num1,int*num2)
{
    int tempnum;
    tempnum=*num1;
    *num1=*num2;
    *num2=tempnum;
}
main()
{
    int x=10,y=20;
    printf("before swapping\n");
    printf("the value of x is %d\n",x);
    printf("the value of y is %d",y);
    swapnum(&x,&y);
    printf("\nafter swapping");
    printf("\nthe value of x is %d",x);
    printf("the value of y is %d",y);
}
