#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;    //declaration of local variables
    printf("\n\n-----Matrix Multiplication-----\n");
    printf("\nEnter The No Of Rows and Columns Of First Matrix :- ");
    scanf("%d%d", &r1,&c1);
    printf("Enter The No Of Rows and Columns Of Second Matrix :- ");
    scanf("%d%d", &r2,&c2);
    if(c1 == r2)
    {
        int a[r1][c1],b[r2][c2],c[r1][c2]; //declaration with specific size of the array's

        printf("\nEnter The Values For Your First Matrix :- \n");       //taking inpute in Matrix 1
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("First[%d][%d] :- ",i+1,j+1);
                scanf("%d", &a[i][j]);
            }
            
        }
        
        printf("\nEnter The Values For Your Second Matrix :- \n");       //taking inpute in Matrix 2
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("First[%d][%d] :- ",i+1,j+1);
                scanf("%d", &b[i][j]);
            }
            
        }

        printf("\nYour Matrix 1:- \n");         //displaying Matrix 1
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("    %d", a[i][j]);
            }
            printf("\n");            
        }

        printf("\nYour Matrix 2:- \n");         //displaying Matrix 1
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("    %d", b[i][j]);
            }
            printf("\n");            
        }

        //Multiplication For Two Matrices

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int k = 0; k < c1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }            
        }

        printf("\nMultiplication Result Of Matrix 1 and Matrix 2 ->\n");           //Display Result
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("    %d", c[i][j]);
            }
            printf("\n");             
        }        
    }
    else
    {
        printf("\nYou Can't Multiply Matrices Of This Order.....");
    }

    printf("\n");
    return 0;
}