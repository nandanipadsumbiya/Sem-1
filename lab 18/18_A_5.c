#include<stdio.h>
void  swap(int a,int b){
	int a=temp;
	    a=b;
	    b=temp;
}
voi main(){
	int a,b,temp;
	printf("Enter a b:");
	scanf("%d %d",&a,&b);
	swap(a,b);
}
