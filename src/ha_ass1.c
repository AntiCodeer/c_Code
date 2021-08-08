/*This is a Multiplication Table Printing Program*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("This is Just a Multiplication Table Program \n");
    int a;

	printf("\nEnter a No :-");
	scanf("%d", &a);

	for(int i = 1; i<=10; ++i) {
		printf("\n%d x %d = %d\n", a, i, a*i);
	}
	return 0;
}
