#include <stdio.h>  //used because of printing scaning and file input output
#include <string.h> //used because of many string comparing functions
#include <stdlib.h> //used because of dynamic memory allocation

char *bill(const char *str, const char *new, const char *old)
{
    char *result;
    int i, count = 0;
    int oldLen = strlen(old);
    int newLen = strlen(new);

    //Now Lets Count The No of times Old Occurs
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], old) == &str[i])
        {
            count = count + 1; //incrament count variable count++
            i = i + oldLen - 1; //increament i also and -1 because the loop also added +1 so that it's in accurate position
        }
    }

    //Now Lets create space for the new word
    result = (char *)malloc(i + count * (newLen - oldLen) + 1);
    i = 0;

    while (*str)
    {
        if (strstr(str, old) == str)
        {
            strcpy(&result[i], new);
            i += newLen;
            str += oldLen;
        }
        else
        {
            result[i] = *str;
            i += 1;
            str += 1;
        }
    }
    result[i] = '\0';
    return result;
}
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    FILE *ptr1 = NULL;
    ptr = fopen("temp.txt", "r");
    ptr1 = fopen("bill.txt", "w");

    char str[300],name[30],item[20],outlet[30];
    printf("\nEnter The Name :- ");
    scanf("%[^\n]s",name);
    getchar();
    printf("\nEnter The Item :- ");
    scanf("%[^\n]s",item);
    getchar();
    printf("\nEnter The Outelet :- ");
    scanf("%[^\n]s",outlet);
    fgets(str, 300, ptr);
    printf("\nTemplate Was :- %s", str);
    printf("\n\n");

    //calling the function here
    char *newStr ;
    newStr = bill(str, name, "{{name}}");
    newStr = bill(newStr, item, "{{item}}");
    newStr = bill(newStr, outlet, "{{outlet}}");
    printf("\nGenerated Bill Is -> %s", newStr);
    fprintf(ptr1, "%s", newStr);
    fclose(ptr);
    fclose(ptr1);
    printf("\n");
    return 0;
}
