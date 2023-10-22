#include<stdio.h>
void main(){
	int n,i;
		printf("Enter a value of arry : ");
		scanf("%d",&n);
	  int ar[n];
	  for(i=0;i<n;i++){
	  	scanf("%d", &ar[i]);
	  }	
	 for(i=n-1;i>=0;i--){
	 	printf("%d",ar[i]);
	 }
}
