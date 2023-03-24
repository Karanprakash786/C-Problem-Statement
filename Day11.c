#include<stdio.h>
#include<math.h>

/* 1.) WAP to find his Gross Salary. */
/*
int main(){
	float Basic_salary, Gross_Salary , DA, HRA;
	printf("Enter The Basic Salary : ");
	scanf("%f",&Basic_salary);
	if (Basic_salary<1500)
	{
		HRA=0.1*Basic_salary;
		DA=0.9*Basic_salary;
	}
	else
	{
		HRA=500;
		DA=9.8*Basic_salary;
	}
	Gross_Salary=Basic_salary+HRA+DA;
	printf("Total Gross Salary :%0.2f ",Gross_Salary);
	return 0;
}
*/

/* 2.) WAP to Determine whether the seller has made profit or incurred Loss */
/*
int main(){
	float cost_price,Seller,Profit,Loss;
	printf("Value of Cost: ");
	scanf("%f",&cost_price);
	printf("Value of Sale price : ");
	scanf("%f",&Seller);

	Profit=Seller-cost_price;
	Loss=cost_price-Seller;

	if (Profit>0)
	
	printf("The seller made a profit of Rs. %0.2f ",Profit);
	
	else if (Loss>0)
	
	printf("The Seller Incurred loss of Rs. %0.2f ",Loss);
		
	else if(Profit==0)
	
	printf("There is no Loss, no profit ");
}
*/

/* 3.) Check whether a number is even or odd */
/*
int main(){
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	if(num%2==0)
	{
	printf("This Number is Even ");
	}
	else
	{
	printf("This Number is odd ");
	}
	return 0;
}
*/