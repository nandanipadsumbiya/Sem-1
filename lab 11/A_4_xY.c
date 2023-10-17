#include<stdio.h>
void main(){
	int x,y,ans=1,i;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
	}
		printf("%d",ans);
}
