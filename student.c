// write a program to check the student is passe or failed
/*#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks (0 to 100)");
    scanf("%d",&marks);
    if(marks>30&&marks<=100)
    {
        printf("Congrats you are pass");
    }else
    if(marks<=30)
    {
        printf("you are failed");
    }
}*/



#include<stdio.h>
//using ternary operator
int main()
{
    int marks;
    printf("ENTER THE MARKS (0 to 100)");
    scanf("%d",&marks);
    marks<=30?printf("you are failed"):printf("congrats you are passed");
}
