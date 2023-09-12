#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>

void compute(int weight, int height); //function declaration

main()
{
	float weight=0,height=0;
	
	puts("Body Mass Index:");
	printf("Weight in kilograms: ");
	scanf("\n%f",&weight);
	printf("Height in meters: \n");
	scanf("\n%f", &height);

	system("cls");
	compute(weight,height); //function call
	
	/*EXPECTED OUTPUT
	Your BMI:___
	Remarks:____
	Must do:____ */
}

void compute(int weight, int height) //function definition
{
	float bmi=weight/ (height*height);
	
	printf("Your BMI: %.2f", bmi);
	if(bmi<=18.99)
	{
		puts("\nRemarks: UNDERWEIGHT");
		puts("Must do: You must gain weight\n");
	}
	if(bmi>=19&&bmi<=24.99)
	{
		puts("\nRemarks: NORMAL");
		puts("Must do: Keep it up\n");
	}
	if(bmi>=25&&bmi<=29.99)
	{
		puts("\nRemarks: OVERWEIGHT");
		puts("Must do: You must lose weight\n");
	}
	if(bmi>=30&&bmi<=34.99)
	{
		puts("\nRemarks: OBESE (CLASS 1)");
		puts("Must do: You must lose weight\n");
	}
	if(bmi>=35&&bmi<=39.99)
	{
		puts("\nRemarks: OBESE (CLASS 2)");
		puts("Must do: You must lose weight\n");
	}
	if(bmi>=40)
	{
		puts("\nRemarks: EXTREME OBESITY");
		puts("Must do: You must lose weight");
	}
}