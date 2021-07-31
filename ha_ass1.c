#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("This is Just a Simple Hello World Program \n");
	printf("\nWhich is written in Sublime Text 4");
	printf("\nThis Code is fully Created By \n");
	printf("Abhishek Mukherje\n");
    int a;

	printf("\nEnter a No :-");
	scanf("%d", &a);

	for(int i = 1; i<=10; ++i) {
		printf("\n%d x %d = %d\n", a, i, a*i);
	}
	return 0;
}