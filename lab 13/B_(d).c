#include<stdio.h>
void main(){
	int i,j,c=65,n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i%2==0){
				printf("%c ",c);
				c++;
			}
			else{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
