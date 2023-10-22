#include<stdio.h>
void main(){
	int i,n,max,min,sum=0;
	float avg=0;
	printf("Enter n:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element into are[%d]:",i);
		scanf("%d",& arr[i]);	
	}	
	max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
}
	printf("max element = %d\n",max);
	
	 min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("min element = %d\n",min);
	
	sum=0;

	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum element = %d\n",sum);
	
	avg=0;
	for(i=0;i<n;i++){
		//sum=sum+arr[i];
		avg=sum/n;
	}
	printf("avg element = %f",avg);
}


