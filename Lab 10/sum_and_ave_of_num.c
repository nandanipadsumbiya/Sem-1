#include<stdio.h>
    void main(){
    	int n,i=1,sum=0,ave,x;
    	printf("Enter n:");
    	scanf("%d",&n);
    	while(i<=n){
    		printf("Enter x:");
    		scanf("%d",&x);
    		sum=sum+x;
    		i++;
		}
			printf("sum=%d\n",sum);
			ave=sum/n;
			printf("ave=%d",ave);
	}
