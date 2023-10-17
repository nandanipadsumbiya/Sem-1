#include<stdio.h>
void main(){
	int i,n,ans=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		ans=ans*i;
	}
		printf("%d\n",ans);
}
