#include<stdio.h>
float pi(){
	float a = 3.14;
	return a;
}
void main(){
	int r;
	printf("Enter r:");
	scanf("%d",&r);
	float area = pi()*r*r;
	printf("area = %f",area);
}
