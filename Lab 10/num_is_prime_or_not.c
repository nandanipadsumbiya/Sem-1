#include<stdio.h>
    void main(){
    	int n,i=1,count=0;
    	printf("Enter n:");
    	scanf("%d",&n);
    	while(i<=n){
    	    if(n%i==0){
    		count=count+1;
    	    }
    	    i++;
    	}
    		if(count>=3){
    			printf("num is not prime");
			}
			else{
				printf("num is prime");
			}
	}
