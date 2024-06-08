#include<stdio.h>
    void main(){
    	int n=0,evensum=0,oddsum=0;
    	while(n!=-1){
    	   if(n%2==0){
    	   	    evensum=evensum+n;
		   }
		   else{
		   	    oddsum=oddsum+n;
		   }
		   	scanf("%d",&n);
	}
		   printf("evensum=%d",evensum);
		   printf("oddsum=%d",oddsum); 	
}
