#include<stdio.h>
void main(){
	int i,n,sum=0,count=0;
	float avg=0;
	printf("Enter n:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element into arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	
		
	}
	for(i=0;i<n;i++){
		avg=sum/n;
	}
	
	for(i=0;i<n;i++){
		if(avg<arr[i]){
			count =count+1;
		}
}
    printf("count=%d",count);
}
