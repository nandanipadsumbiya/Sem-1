#include<stdio.h>
void
 main(){
	int a,b,temp;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}
