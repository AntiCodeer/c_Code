#include<stdio.h>

int isPalindrome(int num)
{
    int c = num, i, rev=0;
    do
    {
        i = c % 10;
        rev = (rev * 10) + i;
        c = c / 10;
    }while(c!=0);

    if(num == rev)
        return 1;
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("\nEnter Your No :- ");
    scanf("%d", &n);

    if (n < 10)
    {
        printf("\nAnt Single Digit No Is A Palindrome No Within Base 10 System....");
    }
    else if(isPalindrome(n))
    {
        printf("\n%d Is A Palindrome No.",n);
    }
    else
    {
        printf("\n%d Is Not A Palindrome No.",n);
    }
    printf("\n");
    return 0;
}