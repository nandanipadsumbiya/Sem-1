#include<stdio.h>
void main(){
   int i,j,n,factorial=1,sum=0;
   int e=1;
   printf("Enter n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   	factorial=factorial*i;
   	for(j=1;j<=i;j++){
   		
   		sum=sum+j;
	   }
	   e=e+1/factorial;
   }
    printf("%d",e);
}
