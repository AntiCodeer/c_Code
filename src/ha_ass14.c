#include<stdio.h>
#include<math.h>
#define PI 3.14

float eDistance(int x1,int y1,int x2,int y2)
{
    float d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    return d; 
}

float areaOfCircle(int x1,int y1,int x2,int y2,float (*ptr)(int , int , int , int ))
{
    float a = ptr(x1,y1,x2,y2);
    float area = PI * a * a;
    return area; 
}

int main(int argc, char const *argv[])
{
    int x1,x2,y1,y2;        //declaration of variables
    printf("\nEnter X1 :- ");
    scanf("%d",&x1);
    printf("\nEnter Y1 :- ");
    scanf("%d",&y1);
    printf("\nEnter X2 :- ");
    scanf("%d",&x2);
    printf("\nEnter Y2 :- ");
    scanf("%d",&y2);

    float (*ptr) (int ,int , int ,int );        //our function pointer
    ptr = eDistance;
    printf("\nEuclidean Distance -> %f",ptr(x1,y1,x2,y2));  //showing euclidean distance
    
    float area = areaOfCircle(x1,y1,x2,y2,ptr);
    printf("\nArea Of The Circle Using Euclidean Distance Formula -> %f",area);
    printf("\n");
    return 0;
}
