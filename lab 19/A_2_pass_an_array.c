#include<stdio.h>
int arr(int n){
 int arr[n],i;
 for(i=0;i<n;i++){
 		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
     }
     for(i=0;i<n;i++){
     	printf("%d\n",arr[i]);
	 }
 }
void main(){
  int i,n;
  scanf("%d",&n);
  arr(n);
}
