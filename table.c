// To find the the table of a number
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number to find the table");
    scanf("%d",&n);
    for (i = 1; i <= 10; i++)
    {
        
        printf("%d\n",n*i);
    }
    return 0;
    

}*/


// table in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    printf("%d\n",n*i);
}