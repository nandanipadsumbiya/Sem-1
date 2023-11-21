#include<stdio.h>
int max(int a,int b){
	if(a>b){
		return a;
	}
	else {
		return b;
	}
	//int max=max(a,b);
	
}
int min(int a,int b){
	if(a>b){
		return b;
	}
	else{
		return a;
	}
//	int min=min(a,b);
	//return min;
}
void main(){
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	int m=max(a,b);
	int n=min(a,b);
	printf("max=%d\n min=%d",m,n);
}
