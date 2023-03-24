/*Program No.1 WAP Calculate the area and perimeter of the rectangle, and the area and circumference of the circle.*/
#include<stdio.h>

int main(){
	int length,breadth,radius,perimeter_of_rectangle;
	float pi,circumference_the_circle;
	printf("Enter the Length Value : ");
	scanf("%d",&length);
	printf("Enter the Breadth Value : ");
	scanf("%d",&breadth);
	perimeter_of_rectangle=2*(length+breadth);
	printf("Enter the value of pi : ");
	scanf("%f",&pi);
	printf("Enter the value of radius : ");
	scanf("%d",&radius);
	printf("Perimeter of rectangle %d\n",perimeter_of_rectangle);
	circumference_the_circle=pi*(radius*radius);
	printf("Area of circumference the circle : %f",circumference_the_circle);
}