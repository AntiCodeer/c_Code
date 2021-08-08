/*This is a Menu Driven Program For Unit Conversion*/
#include <stdio.h>
void kmtoMi();
void inchtofeet();
void cmtoinches();
void putokg();
void intome();

int main()
{
	int ch;
	do
	{

		printf("\n\n-----Conversion List-----");
		printf("\n1. Convert Km To Miles");
		printf("\n2. Convert inches To feet");
		printf("\n3. Convert cm To inches");
		printf("\n4. Convert pound To kg");
		printf("\n5. Convert inches To Meters");
		printf("\n6. Exit\n");
		printf("\nEnter Your Coice Here:- ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
			{
				printf("\nYou Choosed Km To Miles");
				kmtoMi();
				break;
			}
			case 2:
			{
				printf("\nYou Choosed inches To feet");
				inchtofeet();
				break;
			}
			case 3:
			{
				printf("\nYou Choosed cm To inches");
				cmtoinches();
				break;
			}
			case 4:
			{
				printf("\nYou Choosed pound To kg");
				putokg();
				break;
			}
			case 5:
			{
				printf("\nYou Choosed inches To Meters");
				intome();
				break;
			}

			case 6:
			{
				printf("Exiting.......\n");
				break;
			}
			default: printf("\nWrong Choice !!\n Please Choose Correct Option .....\n");;
		}

	}while(ch!=6);
	return 0;
}

void kmtoMi()
{
	float km,miles;
	printf("\nEnter Km Value :- ");
	scanf("%f", &km);
	miles = (km * 0.621371);
	printf("\nMiles = %f\n", miles);
	return;
}

void inchtofeet()
{
	float inch,feet;
	printf("\nEnter Inches Value:- ");
	scanf("%f",&inch);
	feet = (inch * 0.0833333);
	printf("\nFeet :-%f",feet);
	return;
}

void cmtoinches()
{
	float cm,inches;
	printf("\nEnter Value in cm:- ");
	scanf("%f", &cm);
	inches = (cm * 0.393701);
	printf("\nInches :- %f", inches);
	return;
}

void putokg()
{
	float pound, kg;
	printf("\nEnter Value In Pound:- ");
	scanf("%f", &pound);
	kg = (pound * 0.453592);
	printf("\nKg :- %f",kg);
	return;
}

void intome()
{
	float inches,meters;
	printf("\nEnter Value In Inches :- ");
	scanf("%f", &inches);
	meters = (inches * 0.0254);
	printf("\nMeter:- %f",meters);
	return;
}
