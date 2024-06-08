#include<stdio.h>
    void main(){
    	int i=1,a,n,sum=0;
    	printf("Enter n:");
    	scanf("%d",&n);
    	a=n;
    	while(i<n){
    		if(n%i==0){
    			sum=sum+i;
    		}
    		i++;
		}
    		if(sum==a){
				printf("num is perfect");
			}
			else{
				printf("num is not perfect");
			}
	}
