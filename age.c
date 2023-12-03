// To check the the person is child or teenager or adult
/*#include<stdio.h>
int main()
{
    int age;
    printf("enter the age\n");
    scanf("%d",&age);
    if(age>18)
    {
        printf("You are adult");
    }
    else if(age>=12&&age<=17)
    {
        printf("you are teenager");
    }
    else if(age>1&&age<=11)
    {
        printf("you are child");
    }
    return 0;
    
}*/



#include<stdio.h>
// to check the age is greater than 18 using ternary operator

int main()
{
    int age;
    printf("enter the age \n");
    scanf("%d",&age);
    age>=18?printf("you are adult"):printf("you are not adult");
}