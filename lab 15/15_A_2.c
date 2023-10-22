#include<stdio.h>
void main(){
	int i,n,count=0;
	printf("Enetr n:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter a value of arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]<0){
			count++;
		}
		
	}
	for(i=0;i<n;i++){
		printf("%d",count);
	}
}
