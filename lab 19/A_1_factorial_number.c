#include<stdio.h>
int fac(int);
void main(){
	int a;
	printf("Enter a element a: ");
	scanf("%d",&a);
	printf("%d",fac(a));
}
int fac(int b){
	int p=1,i;
     for(i=1;i<=b;i++){
     	p=p*i;
	 }
	
	 return p;
}
   
