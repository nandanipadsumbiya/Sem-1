#include<stdio.h>
void name(int xyz,int abc){
	printf("Enter namber is=%d %d",xyz,abc);
}
void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	name(a,b);
}
