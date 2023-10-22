#include<stdio.h>
void mnain(){
	int i,n=5,h,w,count=0;
	printf("Enter n:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element into h[%d]",i);
		scanf("%d",&arr[i]);
		printf("Enter an element into w[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(h>170 && w<50){
			count =count+i;
		}
		printf("%d",count);
	}
}
