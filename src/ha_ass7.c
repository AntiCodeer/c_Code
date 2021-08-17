#include<stdio.h>

struct driver
{
    char name[20];
    int licenceNo;
    float route;
    float kms;
};

int main(int argc, char const *argv[])
{    
    struct driver d1,d2,d3;
    int i = 1,n = 1;
    do
    {
        if(i==1)
        {
            printf("\nEnter Driver[%d] Name :- ",i);
            scanf("%s", d1.name);
            printf("\nEnter Driver[%d] Licence No :- ",i);
            scanf("%d", &d1.licenceNo);
            printf("\nEnter Driver[%d] Route :- ",i);
            scanf("%f", &d1.route);
            printf("\nEnter Driver[%d] Kms :- ",i);
            scanf("%f", &d1.kms);
            i = i + 1;
        }

        else if(i==2)
        {
            printf("\nEnter Driver[%d] Name :- ",i);
            scanf("%s", d2.name);
            printf("\nEnter Driver[%d] Licence No :- ",i);
            scanf("%d", &d2.licenceNo);
            printf("\nEnter Driver[%d] Route :- ",i);
            scanf("%f", &d2.route);
            printf("\nEnter Driver[%d] Kms :- ",i);
            scanf("%f", &d2.kms);
            i = i + 1;
        }

        else if(i==3)
        {
            printf("\nEnter Driver[%d] Name :- ",i);
            scanf("%s", d3.name);
            printf("\nEnter Driver[%d] Licence No :- ",i);
            scanf("%d", &d3.licenceNo);
            printf("\nEnter Driver[%d] Route :- ",i);
            scanf("%f", &d3.route);
            printf("\nEnter Driver[%d] Kms :- ",i);
            scanf("%f", &d3.kms);
            i = i + 1;
        }

    }while(i < 4);

    printf("\n\n------Driver Details-----\n\n");
    do
    {
        if (n == 1)
        {
            printf("\nDriver[%d] Name is :- %s",n, d1.name);
            printf("\nDriver[%d] Licence No is :- %d",n, d1.licenceNo);
            printf("\nDriver[%d] Route :- %f",n,d1.route);
            printf("\nDriver[%d] Kms is :- %f",n,d1.kms);
            printf("\n");
            n = n + 1;
        }

        else if(n == 2)
        {
            printf("\nDriver[%d] Name is :- %s",n, d2.name);
            printf("\nDriver[%d] Licence No is :- %d",n, d2.licenceNo);
            printf("\nDriver[%d] Route :- %f",n,d2.route);
            printf("\nDriver[%d] Kms is :- %f",n,d2.kms);
            printf("\n");
            n = n + 1;
        }

        else if(n == 3)
        {
            printf("\nDriver[%d] Name is :- %s",n, d3.name);
            printf("\nDriver[%d] Licence No is :- %d",n, d3.licenceNo);
            printf("\nDriver[%d] Route :- %f",n,d3.route);
            printf("\nDriver[%d] Kms is :- %f",n,d3.kms);
            printf("\n");
            n = n + 1;
        }
    } while (n<4);

    printf("\n");
    return 0;
}
