#include <stdio.h>      //taking header file for standard input output
int isPrime(int );      //function declaration for checking is the no is prime or not
int sumOfDigits(int );      //function declaration for checking the sum of digits

//main function
int main(int argc, char const *argv[])
{
    int sum = 0,rem,n;      //declaration of variables
    printf("\nEnter your No : ");
    scanf("%d", &n);        //taking integer 
    // calculating digits
    while (n != 0)
    {
        rem = n % 10;
        if (isPrime(rem))
        {
            sum = sum + rem;
        }
        n = n / 10;
    }
    printf("\nSum = %d", sum);
    printf("\n");
    return 0;
}

int isPrime(int n)
{
    int i;      //declaration
    for (i = 2; i <= n/2; ++i)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    if (i > n/2)
    {
        return 1;       //returning true
    }
    return 0;           //returning false     
}