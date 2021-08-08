/*This is another menu driven program for Fibonacci Series*/
#include <stdio.h>
#define MAX 50
int fib_rec(int );
void fib_itt(int );

int main(int argc, char const *argv[])
{
	int n;
	printf("\nThis is A Fibonacci Series Program......");
	printf("\nEnter The No Of Term You Want :- ");
	scanf("%d", &n);
	fib_itt(n);
	fib_rec(n);
	for(int i=0; i<=n; ++i)
	{
		printf("\nRecursiveive Approach Fib[%d]:- %d",i,fib_rec(i));
	}
	int c = fib_rec(n);
	printf("\n");
	return 0;
}

void fib_itt(int n)
{
	int i,fib[MAX];
	fib[0] = 0;
	fib[1] = 1;
	printf("Itterative Approach Fib[0]:- 0\n");
	printf("Itterative Approach Fib[1]:- 1\n");

	for(i=2; i<=n; ++i)
	{
		fib[i] = fib[i-1] + fib[i-2];
		printf("Itterative Approach Fib[%d]:- %d\n",i,fib[i]);
	}
	return;
}

int fib_rec(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib_rec(n-1) + fib_rec(n-2);
}
