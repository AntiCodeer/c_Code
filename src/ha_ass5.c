#include<stdio.h>
#define MAX 20
void rev(int *,int );

int main()
{
    int n,a[MAX];

    printf("\nEnter The No Of Elements :- ");
    scanf("%d", &n);

    printf("\nEnter The Array Elements :- \n");
    for(int i = 0; i< n; ++i)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe Given Array Elements Are :- ");
    for(int i = 0; i< n; ++i)
    {
        printf("%d\t", a[i]);
    }

    rev(a,n);
    printf("\n");

    return 0;
}

void rev(int *a,int n)
{
    printf("\n\nThe Reversed Items Are :- \t");
    for (int i = n-1; i >= 0; --i)
    {
        printf("%d\t", a[i]);
    }
}