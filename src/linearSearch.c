#include <stdio.h>

void l_search(int a[],int n,int key)
{
	int c=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == key)
		{
			c++;
			printf("\n%d Element found in %d Position.",key,i+1);
		}
	}
	if (c==0)
	{
		printf("%d Element not found in the array.",key);
	}
	else
	{
		printf("\n%d Element founded %d times.",key,c);
	}
	return;
}
int main(int argc, char const *argv[])
{
	int n,a[n],i,key;
	printf("\nInput :- \n");
	printf("Enter the no of Elements :- ");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		printf("\nEnter a[%d] = ",i+1);
		scanf("%d",a+i);
	}
	printf("\nEnter the Key :- ");
	scanf("%d", &key);
	printf("\nOutput :- ");
	l_search(a,n,key);
	printf("\n");
	return 0;
}