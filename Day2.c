/*Program No.2 WAP to convert and print this distance in meters, feet, inches and centimeters.*/
/*#include<stdio.h>
int main(){
	float kilometer,feet,meters,centimeters,inches;
	printf("Enter the kilometer distance");
	scanf("%f",&kilometer);
	meters=kilometer*1000;
	centimeters=meters*100;
	inches=centimeters/2.54;
	feet=inches/12;
	printf("Distance of meters %f \n",meters);
	printf("Distance of centimeter %f \n",centimeters);
	printf("Distance of inches %f \n",inches);
	printf("Distance of feets %f \n",feet);
}
*/

/*Program No.3 WAP to convert and print this distance in meters, feet, inches and centimeters.*/
/* #include<stdio.h>
int main(){
	int Hindi,English,Maths,Science,Drawing,Total_Masks;
	float percentage_marks;
	printf("Enter your First Subjects : \n");
	scanf("%d",&Hindi);
	printf("Enter your Second Subjects : \n");
	scanf("%d",&English);
	printf("Enter Your Third Subjects : \n");
	scanf("%d",&Maths);
	printf("Enter Your four subjects : \n");
	scanf("%d",&Science);
	printf("Enter your Five Subjects : \n");
	scanf("%d",&Drawing);

	Total_Masks=Hindi+English+Maths+Science+Drawing;

	percentage_marks=Total_Masks/5;

	printf(" Total Masks =%d",Total_Masks);
	printf(" Percentage Masks =%f",percentage_marks);
}
*/

/*Program No.3 Temperature of a city in Fahrenheit degrees is input through the keyboard. WAP to convert this temperature into Centigrade
degrees*/

#include<stdio.h>

int main(){
	float fahrenheit_degrees,Centigrade_degrees;
	printf("Enter the fahrenheit Degrees : \n" );
	scanf("%f",&fahrenheit_degrees);
	Centigrade_degrees=5*(fahrenheit_degrees-32)/9;
	printf("Centigrade Degrees =%f",Centigrade_degrees);
}