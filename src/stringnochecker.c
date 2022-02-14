#include <stdio.h>
// #include <string.h>
#define MAX 20
int main(int argc, char const *argv[])
{
	printf("\nEnter the length of the array : ");
	int n;
	scanf("%d", &n);
	printf("\nEnter the String :- ");
	char a[MAX];
	getchar();
	scanf("%[^\n]c", a);
	// for (int i = 0; i < strlen(a); ++i)
	// {
	// 	if (a[i]>='a' && a[i]<='z')
	// 	{
	// 		printf("\nThis is a Pure String");
	// 	}
	// 	else
	// 	{
	// 		printf("\nThis has some amount of no");
	// 	}
	// }
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>='a' && a[i]<='z')
		{
			printf("\nThis is a Pure String");
			continue;
		}
		else
		{
			printf("\nThis has some amount of no");
		}
	}
	printf("\n");
	return 0;
}