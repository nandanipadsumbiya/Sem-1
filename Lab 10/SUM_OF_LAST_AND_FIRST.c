#include<stdio.h>
    void main(){
    	int first,n,last,sum;
    	printf("Enter n:");
    	scanf("%d",&n);
        last=n%10;
        while(n>=10){
        	n=n/10;
       	}
       	    first=n;
       		sum=first+last;
       		printf("sum of first and last digit is=%d",sum);
	}
