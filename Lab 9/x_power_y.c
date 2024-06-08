#include<stdio.h>
    void main(){
    	int x,y,sum=1,i=1;
    	printf("Enter x:");
    	scanf("%d",&x);
    	printf("Enter y:");
    	scanf("%d",&y);
    	while(i<=y){
    		sum=sum*x;
    		i++;
    	}
		printf("%d",sum);
}
