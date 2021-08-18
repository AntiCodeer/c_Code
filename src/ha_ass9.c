/*Rock Paper Scissors Game In C Language*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int genRandNo(int n)
{
    srand(time(NULL));
    return rand()%n;
}

int main(int argc, char const *argv[])
{
    int ch,ch1,ch2,w1=0,w2=0;
    char name[20];
    printf("\n\n------This is a Rock Paper Scissors Game-----\n");
    printf("\nPress 1 To Start The Game.\n");
    printf("\nPress 0 To Exit The Game.\n");
    printf("\nEnter Your Choice :-");
    scanf("%d", &ch);
    if (ch != 1)
    {
        printf("\nExiting....");
    }
    else
    {
        printf("\nGame Started.....");
        getchar();
        printf("\nEnter Your Name :- ");
        scanf("%[^\n]s", name);
        printf("\nHello %s, Welcome In This Game.....\nResult Will Declared After You Opted For Exit From The Game....\n\n",name);
        do
        {
            printf("\n");
            printf("Choose 0 For Rock\n");
            printf("Choose 1 For Paper\n");
            printf("Choose 2 For Scissors\n");
            printf("Choose 3 For Exit From The Game....\n");
            getchar();
            printf("\n%s's Turn :- ",name);
            scanf("%d", &ch1);
            ch2 = genRandNo(3);
            if(ch2 == 0)
            {
                printf("Computer Opted For Rock\n");
            }
            if(ch2 == 1)
            {
                printf("Computer Opted For Paper\n");
            }
            if(ch2 == 2)
            {
                printf("Computer Opted For Scissors\n");
            }
            if(ch1 == ch2)
            {
                printf("\nIt's A Draw......");
            }
            if (ch1 == 0 && ch2 == 2 || ch1 == 1 && ch2 == 0 || ch1 == 2 && ch2 == 1)
            {
                printf("\n%s Wins This Round.....",name);
                w1 = w1 + 1;
            }
            if(ch1 == 0 && ch2 == 1 || ch1 == 1 && ch2 == 2 || ch1 == 2 && ch2 == 0)
            {
                printf("\nComputer Wins This Round");
                w2 = w2 + 1;
            }       
            if(ch1 == 3)
            {
                printf("\nYou Opted For Exit....");
                printf("\n\n-----RESULTS------");
                printf("\n%s Wins :- %d Time's\nComputer Wins :- %d Time's\n",name,w1,w2);
            }
            
        } while (ch1 != 3);        

    }
    printf("\n");
    return 0;
}

