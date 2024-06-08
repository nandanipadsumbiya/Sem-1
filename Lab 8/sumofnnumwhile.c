#include<stdio.h>
    void main(){
    	int i=1,n,sum=0;
    	printf("Enter n:");
        scanf("%d",&n);
    	while(n>=i){
    		sum=sum+i;
			i++; 
  	}
  	    printf("sum=%d",sum); 
}
