#include<stdio.h>
void main(){
	int n,i,count=0,search;
	printf("Enetr n:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter a value of arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("Enetr an element search:");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(search==arr[i]){
			count=1;
			break;
		}
	}
	if(count==1){
		printf("search element found");
	}
	else{
		printf("search element not found");
	}
}
