/* Program no: 1 Simplification of Multiplication/Division/Modular Division/Addition/Subtraction/Assignment*/
/*
#include<stdio.h>
#include<math.h>
int main(){
	int i;
	i= 2*3/4+4/4+8-2+5/8 ;
	printf("%d",i);
}
*/

/* Program No: 2 Area of Triangle */
/*
#include<stdio.h>
#include<math.h>

int main(){
	int base,height;
	float area;
	printf("Enter the Base Value :",base);
	scanf("%d",&base);
	printf("Enter the Height Value :",height);
	scanf("%d",&height);
	area=1/2*base*height;
	printf("The Area of Triangle : %d",area);
}
*/

/* Program no :3 Area of triangle with 3 sides */
/*
#include<stdio.h>
#include<math.h>
int main(){
	float area,a,b,c,s;
	printf("Enter the Value Of A : ");
	scanf("%f",&a);
	printf("Enter the Value of B : ");
	scanf("%f",&b);
	printf("Enter the Value of C : ");
	scanf("%f",&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle with Three Sides :%f",area);
}
*/

/* Evaluate the following expressions and show their hierarchy.*/
/* Program No: 4*/
/*
#include<stdio.h>

int main(){
	int a=3,b=2,x=5,y=4;
	float ans;
	ans=5*b*b*x-3*a*y*y-8*b*b*x+10*a*y;
	printf("The Values of Answers %f",ans);
}
*/

/* Program No:5*/
/*
#include<stdio.h>

int main(){
	int a=4,c=3,y=1;
	float res=4*a*y/c-a*y/c;
	printf("The Value of res :%f",res);
}
*/

/* Program No:6*/
/*
#include<stdio.h>
#include<math.h>
int main(){
	float a=2.2,b=1.0,c=4.1,y=3.0;
	float s=c+(a*y*y)/b;
	printf("The Value of s :%f",s);
}
*/

/* Program No: 7*/
/*
#include<stdio.h>
#include<math.h>

int main(){
	float R,x=3.5;
	R=x*x+2*x+1/2*x*x+x+1;
	printf("The Value Of R :%f",R);
}
*/

/* Indicate the order in which the following expressions would be evaluated: */
/* Program No: 8*/
/*
#include<stdio.h>
#include<stdio.h>

int main(){
	float g=10/5/2/1,b=3/2+5*4/3;
	float x=2-3+5*2/8%3,z=5%3/8*3+4,y=-3%-8/2+7;
	printf("\nThe Value of G :%f",g);
	printf("\nThe Value of B :%f",b);
	int c,a=b=c=3+4;
	printf("\nThe Value of A :%d",a);
	printf("\nThe Value of X :%f",x);
	printf("\nThe Value of Z :%f",z);
	printf("\nThe Value of Y :%f",y);
}
*/

/* Attempt the following questions: */
/* No:9 WAP to calculate the sum of its digits*/

#include<stdio.h>
#include<math.h>

int main(){
	int number,num_1,num_2,num_3,num_4,num_5;
	printf("The Value of Number :");
	scanf("%d",&number);
	num_1 = number % 10;
	number = number / 10;
	
	num_2 = number % 10;
	number = number / 10;

	num_3 = number % 10;
	number = number / 10;

	num_4 = number % 10;
	number = number / 10;

	num_5 = number % 10;
	number = number / 10;
	printf("Sum: %d", num_1+num_2+num_3+num_4+num_5);
}
