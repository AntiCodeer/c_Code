/*This is a Pattern Printing Program*/
#include<stdio.h>
void normalstarpattern(int );
void reversestarpattern(int);
void normalpyramid(int );
void reversepyramid(int );

int main()
{
	int n,app;

	printf("\nThis is The Star Printing Program.....\n");
	printf("\nEnter The No of Lines You Want :- ");
	scanf("%d", &n);
	do
	{
		printf("\nChoose What Approach Do You Want");
		printf("\n1. Normal Trianguller Star Pattern Approach");
		printf("\n2. Reverse Trianguller Star Pattern Approach");
		printf("\n3. Both 1 & 2");
		printf("\n4. Normal Pyramid");
		printf("\n5. Reverse Pyramid");
		printf("\n6. Both 4 & 5");
		printf("\n7. Exit");
		printf("\nEnter Your Choice:- ");
		scanf("%d", &app);

		switch(app)
		{
			case 1:
			{
				printf("\nYou Opt For Normal Trianguller Star Pattern Approach\n");
				normalstarpattern(n);
				break;
			}

			case 2:
			{
				printf("\nYou Opt For Reverse Trianguller Star Pattern Approach\n");
				reversestarpattern(n);
				break;
			}

			case 3:
			{
				printf("\nYou Opt For Both Normal & Reverse Trianguller Star Pattern Approach\n");
				normalstarpattern(n);
				printf("\n");
				reversestarpattern(n);
				break;
			}

			case 4:
			{
				printf("You Opt For Normal Pyramid Pattern\n");
				normalpyramid(n);
				printf("\n");
				break;
			}

			case 5:
			{
				printf("You Opt For Reverse Pyramid Pattern\n");
				reversepyramid(n);
				printf("\n");
				break;
			}

			case 6:
			{
				printf("\nYou Opt For Both Normal & Reverse Pyramid Pattern Approach\n");
				normalpyramid(n);
				printf("\n");
				reversepyramid(n);
				break;
			}

			case 7:
			{
				printf("You Opt For Exit\nExiting.......\n");
				break;
			}

			default:
			{
				printf("\nWrong Choice .....\nPlease Try Again!!\n");
			}
		}
	}while(app!=7);
	printf("\n");
	return 0;
}

void normalstarpattern(int n)
{
	for(int i=1; i<=n; ++i)
	{
		for (int j=1; j<=i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}
	return;
}

void reversestarpattern(int n)
{
	for(int i=1; i<=n; ++i)
	{
		for (int j = i; j <= n; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}
	return;
}

void normalpyramid(int n)
{
	int m;
	m=n;
	for(int i=1; i<=n; ++i)
	{
		for (int j=1; j<=m; ++j)
		{
			printf(" ");
		}
		for(int k=1; k<=i; ++k)
		{
			printf("* ");
		}
		--m;
		printf("\n");
	}
	return;
}

void reversepyramid(int n)
{
	int m;
	m=n;
	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			printf(" ");
		}
		for (int k=1; k<=m; ++k)
		{
			printf("* ");
		}
		--m;
		printf("\n");
	}
	return;
}
