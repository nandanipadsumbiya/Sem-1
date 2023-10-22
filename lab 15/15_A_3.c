#include<stdio.h>
void main(){
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	int arr[n],count=0;
	for(i=0;i<n;i++){
		printf("Enter a valur of arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%3==0){
			count++;
		}
	//	printf("%d",count);
	}
		printf("%d",count);
}
