#include<stdio.h>
    void main(){
    	int n,m;
    	printf("Enter n m:");
    	scanf("%d %d",&n,&m);
    	while(n<=m){
    	  if (n%2==0){
    	  	printf("%d",n);
		  } 
		  n=n+1;	
		}
	}
