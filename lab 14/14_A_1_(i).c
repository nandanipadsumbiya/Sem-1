#include<stdio.h>
void main(){
	int n,i;
	printf("Enter the size of arry: ");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		scanf("%d", &ar[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",ar[i]);
	}

}
