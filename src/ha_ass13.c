#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    float a, b, result;

    if (argc < 4)
    {
        printf("\nThis is Command Line Calculater Plese Provide Some Valid Instruction....");
        printf("\n a + b -> Adding Two Values");
        printf("\n a - b -> Subtracting Two Values");
        printf("\n a x b -> Multiply Two Values");
        printf("\n a / b -> Divide Two Values");
        exit(0);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    char ch = argv[2][0];
    switch (ch)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case 'x':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("\nSyntax Error");
            break;
    }

    if (ch == '+' || ch == '-' || ch == 'x' || ch == '/')
    {
        printf("\nResult %0.2f %c %0.2f = %0.2f",a,ch,b,result);
    }
    else
    {
        printf("\nInvalid Choice");
    }

    printf("\n");
    return 0;
}
