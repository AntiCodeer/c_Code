/*This is a Fibonacci Series Printing Program*/
#include<stdio.h>
#define MAX 50
int fib_rec(int );
void fib_itt(int );

int main()
{
    int n,app;
    printf("\nThis is The Fibonnac Series Program.....");
    printf("\nEnter the No of Terms in Fibonacci Series :- ");
    scanf("%d", &n);
    do
    {
		printf("\nChoose What Approach Do You Want");
		printf("\n1. Recursive Approach");
		printf("\n2. Ittreative Approach");
		printf("\n3. Both");
		printf("\n4. Exit");
		printf("\nEnter Your Choice:- ");
		scanf("%d", &app);

		switch(app)
		{
		    case 1:
		    {
		    	printf("\nYou Opt For Recursive Approach.....");
				for(int i=0; i<=n; ++i)
				{
		    		printf("\nIn Recursive Approach Fib[%d] = %d",i,fib_rec(i));
				}
			    printf("\n");
			    break;
		    }

		    case 2:
		    {
		    	printf("\nYou Opt For Itterative Approach.....");
		    	fib_itt(n);
		    	break;
		    }

		    case 3:
		    {
		    	printf("\nYou Opt For Itterative & Recursive Approach\n");
		    	fib_itt(n);
		    	printf("\n");
		    	for(int i=0; i<=n; ++i)
				{
		    		printf("\nIn Recursive Approach Fib[%d] = %d",i,fib_rec(i));
				}
				break;
		    }

		    case 4:
		    {
		    	printf("\nYou Opt To Exit\nExiting......\n");
		    	break;
		    }

		    default : printf("\nWrong Choice....\nPlease Choose Again!!");
		}
    } while(app!=4);

    printf("\n");
    return 0;
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

void fib_itt(int n)
{
    int fib[MAX];
    fib[0] = 0;
    fib[1] = 1;
    printf("\nIn Itterative Approach Fib[0] = 0");
    printf("\nIn Itterative Approach Fib[1] = 1");
    for(int i=2; i<=n; ++i)
    {
		fib[i] = fib[i-1] + fib[i-2];
		printf("\nIn Itterative Approach Fib[%d] = %d",i,fib[i]);
    }
    printf("\n");
    return;
}
