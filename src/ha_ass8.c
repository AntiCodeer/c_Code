#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n=1,c;
    char *ch_Id;
    
    while (n < 4)
    {
        printf("\nEnter The No of Chracter in You'r CHAR_ID :- ");
        scanf("%d", &c);
        ch_Id = (char *)malloc((c+1) * sizeof(char));
        printf("\nEnter Emp_ID For Emp [%d] :- ",n);
        scanf("%s", ch_Id);
        printf("\nEmp_ID FOR EMP [%d]] :- %s",n, ch_Id);
        free(ch_Id);
        // ch_Id = (char *)realloc(ch_Id, n * sizeof(char));
        n = n + 1;
        // continue;
    }
    
    printf("\n");
    return 0;
}
