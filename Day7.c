/* Program No: 1 */
#include<stdio.h>
#include<math.h>
/*
int main(){
	int x=(4*3)/(6*2);
	int y=5*2-2*3;
	int z=5*2/2*3;
	int c=5*(2/2)*3;
	int d=5+2/2*3;
	printf("Answer of x :%d",x);
	printf("\nAnswer of y :%d",y);
	printf("\nAnswer of z :%d",z);
	printf("\nAnswer of c :%d",c);
	printf("\nAnswer of d :%d",d);
}
*/
/* Program No: 2 Convert the following Algedraic Exp. into Equivalent C.*/
/*
int main(){
	int z,x,y;
	z=((x+3)*(x*x*x))/((y-4)*(y+5));
	printf("The Value of Z:%f",z);
}
*/

/* Program No: 3 WAP to reverse the number */
/*
int main(){
	int Num_5,Num_4,Num_3,Num_2,Num_1;
	int Number,New_Number;
	printf("\nThe Value of Number :");
	scanf("\n%d",&Number);
	
	Num_5=Number%10;
	Number=Number/10;
	
	Num_4=Number%10;
	Number=Number/10;
	
	Num_3=Number%10;
	Number=Number/10;
	
	Num_2=Number%10;
	Number=Number/10;
	
	Num_1=Number%10;
	Number=Number/10;
	
	New_Number=Num_5*10000+Num_4*1000+Num_3*100+Num_2*10+Num_1;
	printf("\nThe Value Of New Nember :%d",New_Number);
}
*/



/* Program No: 4 WAP to Find the Area of the Triangle. */

int main(){
	float Area_of_Triangle,s;
	int a,b,c;
	
	printf("\nThe Value of A :");
	scanf("%d",&a);
	
	printf("\nThe Value of B :");
	scanf("%d",&b);
	
	printf("\nThe Value of C :");
	scanf("%d",&c);
	
	s=(a+b+c)/2;
	printf("\nThe semiperimeter of the triangle :%f",s);
	Area_of_Triangle=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nThe Area of Triangle :%f",Area_of_Triangle);
}