#include<stdio.h>
void main(){
	float a,b,temp;
	printf("Enter a:");
	scanf("%f",&a);
	printf("Enter b:");
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("%f",a);
	printf("%f",b);	
}
