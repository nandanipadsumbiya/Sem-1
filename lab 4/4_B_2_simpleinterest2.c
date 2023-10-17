#include<stdio.h>
void main(){
	int P,R,N;
	float I;
	printf("Enter P:");
	scanf("%d",&P);
	printf("Enter R:");
	scanf("%d",&R);
	printf("Enter N:");
	scanf("%d",&N);
	I=(P*R*N)/100.0;
	printf("%f",I);
}
