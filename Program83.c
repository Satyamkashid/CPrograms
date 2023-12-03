// Problem Statement : take rows = 6 and colums = 6 as input
// Display #
//         * #   
//         * * #  
//         * * * # 
//         * * * * # 
//         * * * * * #
#include<stdio.h>

void Display(int iRow,int iCol)
{   
    int i = 0;
    int j = 0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i == j )
            {
                printf("#\t");
            }
            else if(i > j)
            {
                printf("*\t");
            }
            // else
            // {
            //     printf("$\t");
            // }
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{   
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter the Rows\n");
    scanf("%d",&iNo1);

    printf("Enter the Columns\n");
    scanf("%d",&iNo2);
    
    Display(iNo1,iNo2);

    return 0;
}