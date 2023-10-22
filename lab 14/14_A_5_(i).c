#include<stdio.h>
void main(){
	int i,n=5,h[n],w[n],count=0;


	for(i=0;i<n;i++){
		printf("Enter an element into h[%d]",i);
		scanf("%d",&h[i]);
		printf("Enter an element into w[%d]",i);
		scanf("%d",&w[i]);
	}
	for(i=0;i<n;i++){
		if(h[i]>170 && w[i]<50){
			count =count+1;
		}
	}
	printf("%d",count);
}
