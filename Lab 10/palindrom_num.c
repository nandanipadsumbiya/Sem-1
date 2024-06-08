#include<stdio.h>
    void main(){
    	int n,a,r,b=0;
    	printf("Enter n:");
    	scanf("%d",&n);
    	a=n;
    	while(n!=0){
    		r=n%10;
    		b=b*10+r;
    		n=n/10;
		}
		if(a==b){
			printf("num is palindrom");
		}
		else{
			printf("num is not palindrom");
		}
	}
