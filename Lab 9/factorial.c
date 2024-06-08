#include<stdio.h>
    void main(){
    	int n,i=1,sum=1;
    	printf("Enter n:");
    	scanf("%d",&n);
    	while(i<=n){
    		sum=sum*i;
    		i++;
		}
		printf("%d",sum);
	}
