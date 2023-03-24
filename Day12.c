#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>


/* a) WAP to obtain the reversed and to determine whether the original and reversed number are equal or not. */ 
/*
int main(){
	int Number_1,Number,New_Number,Num_1,Num_2,Num_3,Num_4,Num_5;
	printf("Enter the Number : ");
	scanf("%d",&Number);
	int num=Number;
	Num_1 = Number%10;
	Number = Number/10;

	Num_2 = Number%10;
	Number = Number/10;

	Num_3 = Number%10;
	Number = Number/10;
	
	Num_4 = Number%10;
	Number = Number/10;
	
	Num_5 = Number;
	
	New_Number=Num_1*10000+Num_2*1000+Num_3*100+Num_4*10+Num_5;
	printf("Total Number :%d: (%d,%d,%d,%d,%d) ",New_Number, Num_1, Num_2, Num_3, Num_4, Num_5);
	
	if (New_Number==num)
	{
	printf("\nThe Numbers %d and %d are equal", num, New_Number);
	}
	else
	{
	printf("\nThe Number is not equal");
	}
}
*/


/* b) WAP to determine the youngest of the three */
/*
int main(){
	int Ram ,Shyam, Ajay;
	printf("Enter the Ram Age : ");
	scanf("%d",&Ram);
	
	printf("Enter the Shyam Age : ");
	scanf("%d",&Shyam);
	
	printf("Enter the Ajay Age : ");
	scanf("%d",&Ajay);
	
	if(Ram>Shyam)
	{
	printf("\nRam is a Youngest boy");
	printf("\nShyam is a elder boy");
	printf("\nAjay is a elder boy");
	}
	else if(Shyam>Ajay)
	{
	printf("\nShyam is a youngest boy");
	printf("\nRam is a elder boy");
	printf("\nAjay is a elder boy");
	}
	else
	{
	printf("\nAjay is a youngest boy");
	printf("\nRam is a elder boy");
	printf("\nShyam is a elder boy");
	}
}
*/

/* c) WAP to check whether a triangle is valid or not,when the three angles of the triangle are entered though the keyboard. */
/*
int main(){
	int Sum,Angle1,Angle2,Angle3;

	printf("Enter the Angle1 : ");
	scanf("%d",&Angle1);

	printf("Enter the Angle2 : ");
	scanf("%d",&Angle2);
	
	printf("Enter the Angle3 : ");
	scanf("%d",&Angle3);
	
	Sum = Angle1 + Angle2 + Angle3;

	if(Sum==180 && Angle1>0 && Angle2>0 && Angle3>0)
	{
		printf("Triangle is Vaild");
	}
	else
	{
		printf("Triangle is not Vaild");
	}
}
*/

/* d) WAP to find the absolute value of a number entered through the keyboard.*/
/*
int main(){
	int Num,Number;
	printf("Enter the Number : ");	
	scanf("%d",&Number);
	Num=Number;
	if(Num<Number){
	Num=(-1)*Num;
	}
	//Num=abs(Num);
	printf("The absolute value of %d is %d ",Number,Num);
	return 0;
}
*/

/* e) WAP to find whether the area of the rectangle is greater than its perimeter.*/
/*
int main(){
	int length=5,breadth=4;
	int area=length*breadth, Perimeter=2*(length+breadth);
	printf("Perimeter of rectangle %d\n",Perimeter);
	printf("Area of rectangle %d\n",area);
	if(area>Perimeter)
	{
	printf("Area is Greater than perimeter ");
	}
	else
	{
	printf("Perimeter is smaller than Area");
	}
}
*/


/* f) WAP to check if all the three points fall on one straight line. */
/*
int main(){
	int x1,x2,x3,y1,y2,y3;
	float A;

	printf("the First : ");
	scanf("%d %d",&x1,&y1);

	printf("the Second: ");
	scanf("%d %d",&x2,&y2);

	printf("the Third: ");
	scanf("%d %d",&x3,&y3);

	//printf("%d,%d",x1+x2+x3+y1+y2+y3);
	A=(0.5)*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	if(A!=0){
	  printf("Points doesnot lie on a st. line");
	}
	else printf("Points lie on a st. line.");
		
	return 0;
}
*/

/* g) Given the coordinates (x, y) of center of a circle and its radius, WAP to that will determine whether a point lies inside the circle, on the circle or outside the circle.(Hint: Use sqrt() and pow() functions) */

int main(){
	int x,y,h,k,radius;
	
	printf("Enter the Value of X : ");
	scanf("%d",&x);
	
	printf("Enter the Value of Y : ");
	scanf("%d",&y);

	printf("Enter the Value of H : ");
	scanf("%d",&h);

	printf("Enter the Value of K : ");
	scanf("%d",&k);
	
	printf("Enter the Value of Radius : ");
	scanf("%d",&Radius);

	x