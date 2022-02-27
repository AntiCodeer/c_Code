#include <stdio.h>    //header file for standard input output
#include <string.h>    //header file for string function
#define MAX 20      //defining MAX value

// main function
int main(int argc, char const *argv[])
{
    char str[MAX],seq[MAX];                  //declaration of variables
    int n,sum = 0;
    printf("\nEnter the String input : ");
    scanf("%[^\n]c", str);      //taking the string
    
    printf("\nEnter the counter : ");
    scanf("%d", &n);        //taking counter 

    printf("\nEnter chracters : ");
    getchar();
    scanf("%[^\n]c", seq);      //taking the string

    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < strlen(seq); j++)
        {
            if (str[i] == seq[j])
            {
                sum = sum + seq[j];
            }
        }
    }
    printf("Sum = %d\n",sum);
    return 0;
}
