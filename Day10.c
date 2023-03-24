#include<stdio.h>
#include<math.h>
/* 1.) WAP to print all its Trigonometric ratios. */

int main(){
	float radian, degree,pi=3.14;
	
	printf("Enter The angle in degree\n");
	scanf("%f",&degree);
	
	radian= degree*(pi/180.0);
	
	printf("sin(%0.2f) = %0.2f\n",degree,sin(radian));
	printf("cos(%0.2f) = %0.2f\n",degree,cos(radian));
	printf("tan(%0.2f) = %0.2f\n",degree,tan(radian));
	printf("cot(%0.2f) = %0.2f\n",degree,1/tan(radian));
	printf("sec(%0.2f) = %0.2f\n",degree,1/cos(radian));
	printf("cosec(%0.2f) = %0.2f\n",degree,1/sin(radian));
}


/* 2.) WAP to interchange the contents of C and D. */
/*
int main(){
	int Num_1,Num_2,temp;
	
	printf("Enter the Number first : ");
	scanf("%d",&Num_1);
	
	printf("Enter the Number second :");
	scanf("%d",&Num_2);
	
	temp  = Num_1;
	Num_1 = Num_2;
	Num_2 = temp;
	
	printf("First Number %d\n",Num_1);
	printf("Second Number %d\n",Num_2);
	
	return 0;
}
*/

/* 3.) WAP to compute the smallest number of notes that will combine to give Rs. N.*/
/*
int main(){
	int amount,temp;
	
	printf("Enter the Amount : ");
	scanf("%d",&amount);
	
	temp = amount/100;	
	amount = amount-(temp*100);
	
	printf(" %d x 100 = %d\n",temp,(temp*100));
	
	temp = amount/50;
	amount = amount-(temp*50);
	
	printf(" %d x 50 = %d\n",temp,(temp*50));
	
	temp = amount/10;
	amount = amount-(temp*10);
	
	printf(" %d x 10 = %d\n",temp,(temp*10));
	
	temp = amount/5;
	amount = amount-(temp*5);
	
	printf(" %d x 5 = %d\n",temp,(temp*5));
	
	temp = amount/2;
	amount = amount-(temp*2);
	
	printf(" %d x 2 = %d\n",temp,(temp*2));
	
	temp = amount/1;
	amount = amount-(temp*1);
	
	printf(" %d x 1 = %d\n",temp,(temp*1));
	
}
*/

/* 4.) WAP to calculate the total Expenses. */
/*
int main(){
	int quantity,Discount;
	float Total,rate;
	
	printf("Enter purchase of items : ");
	scanf("%d",&quantity);
	
	printf("Enter Rate of Items : ");
	scanf("%f",&rate);
	
	if(quantity>=1000)
		Discount=10;
	else
		Discount=0;
	Total=(quantity*rate)-(quantity*rate*Discount/100);
	printf("Total Expenses = Rs. %0.2f ",Total);
}
*/