/*This is just a small implementation of prime no with digits*/
#include <stdio.h>		//declaration of headers

int isprime(int n)		//check for prime no
{
	int i;
	for (i = 2; i <= n/2; ++i)
	{
		if (n % i == 0)
		{
			break;
		}
	}
	if (i > n/2)
	{
		return 1;		//return true
	}
	return 0;		//return false
}

int primedigits(int n)		//check the sum of digits
{
	int rem,sum=0;
	while (n != 0)
	{
		rem = n % 10;
		sum  = sum + rem;
		n = n / 10;
	}
	return sum;		//returning the sum
}

int main(int argc, char const *argv[])		//main function
{
	int a,b;
	printf("\nEnter the Range in A and B :- ");
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; ++i)
	{
		if (isprime(i))
		{
			if (isprime(primedigits(i)))
			{
				printf("\n%d is a Prime No with Prime digits.",i);
			}
		}
	}
	return 0;
}