#include<stdio.h>
void main(){
	int a;
	printf("Enter a:");
	scanf("%d",&a);
	if(a&1){
		printf("a is odd");
	}
	else{
		printf("a is even");
	}
}
