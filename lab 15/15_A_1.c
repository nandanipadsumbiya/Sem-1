#include<stdio.h>
void main(){
	int n,i;
	printf("Enter a value of n:");
	scanf("%d",&n);
//	printf("Enter a value of m:");
//	scanf("%d",&m);
	int array[n],arr[n];
	for(i=0;i<n;i++){
		printf("Enter a value of array[%d]",i);
		scanf("%d",&array[i]);
	}
//	for(i=0;i<n;i++){
//		printf("Enter a value of arr[%d]",i);
		
//	}
	for(i=0;i<n;i++){
		arr[i]=array[i];
		
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
