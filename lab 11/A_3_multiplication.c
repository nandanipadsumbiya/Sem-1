#include<stdio.h>
void main(){
	int i,n,sum=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		sum=n*i;
		printf("%d * %d = %d\n",n,i,sum);
	}
}
