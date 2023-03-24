/*/*Program No.1 WAP to calculate and print paper sizes A0,A1,A2,A3,A4,A5,A6,A7,A8 */
#include<stdio.h>
int main(){
	int temp,l,b,A0,A1,A2,A3,A4,A5,A6,A7,A8;
	printf("The value of length : ");
	scanf("%d",&l);
	printf("The value of breadth : ");
	scanf("%d",&b);
    	printf("The value of A0 : %d %d\n",l,b);
	temp=l, l=b,b=temp/2;
	printf("The value of A1 : %d %d\n",l,b);
	temp=l, l=b,b=temp/2;
	printf("The value of A2 : %d %d\n",l,b);
	temp=l, l=b,b=temp/2;
	printf("The value of A3 : %d %d\n",l,b);
	temp=l, l=b,b=temp/2;
	printf("The value of A4 : %d %d\n",l,b);
	temp=l, l=b,b=temp/2;
	printf("The value of A5 : %d %d\n",l,b);
	temp=l, l=b,b=temp/2;
	printf("The value of A6 : %d %d\n",l,b);
	temp=l, l=b,b=temp/2;
	printf("The value of A7 : %d %d\n",l,b);
	temp=l, l=b,b=temp/2;
	printf("The value of A8 : %d %d\n",l,b);
	
}*/