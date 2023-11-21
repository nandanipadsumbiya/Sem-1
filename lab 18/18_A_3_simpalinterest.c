#include<stdio.h>
float interest(int p,int r,int n){
  float ans=(p*r*n)/100.0;
  return ans;
}
void main(){
	int p,r,n;
	printf("Enter a value of p,r,n");
	scanf("%d %d %d",&p,&r,&n);
	float ans=interest(p,r,n);
	printf("simple interest=%f",ans);
}
