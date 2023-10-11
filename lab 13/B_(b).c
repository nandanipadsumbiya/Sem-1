#include<stdio.h>
void main(){
	int i,j,b=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(b%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
			b++;
		}
		 printf("\n");
	}
}
