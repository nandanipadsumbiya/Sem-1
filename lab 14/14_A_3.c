#include<stdio.h>
void main(){
	int n,i,ce=0,co=0;
	printf("Enter the size of arry: ");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++){
		if(ar[i]%2==0){
			ce=ce+1;
			//printf("%4d",cp);
		}
		else{
			co=co+1;
			//printf("%4d",cn);
		}
	//	printf("%d %d",cp,cn);
	}
	 //printf("\n");
		printf("%4d %4d",ce,co);
}
