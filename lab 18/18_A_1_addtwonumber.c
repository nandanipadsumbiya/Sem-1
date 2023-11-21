#include<stdio.h>
int sum(int x,int y){
	int ans = x+y;
	return ans;
}
void main(){
	int a,b;
	printf("Enter a:");
	scanf("%d", &a);
	printf("Enter b:");
	scanf("%d", &b);
	int ans=sum(a,b);
	printf("ans = %d",ans);
}
