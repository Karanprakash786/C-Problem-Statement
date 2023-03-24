/*Program No.1 WAP to calculate and print paper sizes A0,A1,A2,A3,A4,A5,A6,A7,A8 */
/*#include<stdio.h>
int main()
{
	int l,b,A0,A1,A2,A3,A4,A5,A6,A7,A8;
	l=b,b=l/2; A0=b*l;	l=b,b=l/2;
	A1=A0*l;
	l=b,b=l/2;
	A2=A1*l;	
	l=b,b=l/2;
	A3=A2*l;
	l=b,b=l/2;
	A4=A3*l;
	l=b,b=l/2;
	A5=A4*l;
	l=b,b=l/2;
	A6=A5*l;
	l=b,b=l/2;
	A7=A6*l;
	l=b,b=l/2;
	A8=A7*l;
	printf("The value of length : ");
	scanf("%d",&l);
	printf("The value of breadth : ");
	scanf("%d",&b);
	printf("The value of A0 : %d\n",A0);
	printf("The value of A1 : %d\n",A1);
	printf("The value of A2 : %d\n",A2);
	printf("The value of A3 : %d\n",A3);
	printf("The value of A4 : %d\n",A4);
	printf("The value of A5 : %d\n",A5);
	printf("The value of A6 : %d\n",A6);
	printf("The value of A7 : %d\n",A7);
	printf("The value of A8 : %d\n",A8);

}*/

/*Program No.1 WAP to calculate and print paper sizes A0,A1,A2,A3,A4,A5,A6,A7,A8 */
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
	
}


