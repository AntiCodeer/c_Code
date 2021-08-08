/*This is a simple parser program*/
#include <stdio.h>
#include <string.h>

void parse(char *Str)
{
    int ins = 0;
    int ind = 0;

    for (int i = 0; i < strlen(Str); ++i)
    {
        if (Str[i] == '<')
        {
            ins = 1;
            continue;
        }
        if (Str[i] == '>')
        {
            ins = 0;
            continue;
        }
        if (Str[0] == ' ')
        {
            Str[0] = Str[i];
            continue;
        }

        if (ins == 0)
        {
            Str[ind] = Str[i];
            ++ind;
        }
    }
    Str[ind] = '\0';
    while (Str[strlen(Str) - 1] == ' ')
    {
        Str[strlen(Str) - 1] = '\0';
    }
    return;
}
int main()
{
    char String[] = "AHelloA";
    char String1[] = "<h1>          This is Heading             </h1>";
    printf("\nThis is The Normal String :- /%s/", String1);
    parse(String1);
    printf("\n\nThe Parsed String is :- ~~%s~~\n", String1);
    printf("\n");
    return 0;
}
