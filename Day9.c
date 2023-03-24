/* Program No: 1 Point and Convert them into polar co-ordinates.*/

#include<stdio.h>
#include<math.h>
/*
int main(){
	int x=1;
	int y=1;
	float thera;
	float radius;
	radius=sqrt((pow(x,2)+pow(y,2)));
	thera=atan(x/y);
	printf("\nRadius : %f",radius);
	printf("\nthera :%f",thera);
}
*/

/* Program NO: 2 */

int main(){
	int l1=5;
	int l2=1;
	int g1=4.;
	int g2=1;
	float d;
	d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*(cos(g2-g1)));
	printf("Distance :%f",d);
}


/* Program No: 3 */
/*
int main(){
	float temp,wind,wcf;
	printf("The Felt air temperature : ");
	scanf("%f",&temp);
	printf("The Wind Velocity : ");
	scanf("%f",&wind);
	wcf=35.74+(0.6215*temp)+((0.4275*temp)-35.75)*(pow(wind,0.16));
	printf("Calculate wind chill Factor : %f",wcf);
}
*/
	