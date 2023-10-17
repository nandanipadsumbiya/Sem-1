#include<stdio.h>
void main(){
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	b=a%10;
	if(b%2==0){
		printf("last digit of number is even");
	}
	if(b%2!=0){
		printf("last digit of number is odd");
	}
}
