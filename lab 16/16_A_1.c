#include<stdio.h>
void main(){
  int n,m;
  printf("Enter row:");
  scanf("%d",&n);
  printf("Enter col:");
  scanf("%d",&m);
  int a[n][m],i,j;
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		printf("Enter an element in to a[%d][%d]",i,j);
  		scanf("%d",&a[i][j]);
	  }
  }	
  for(i=0;i<n;i++){
  	printf("|");
  	for(j=0;j<m;j++){
  		printf("%d",a[i][j]);
  	
	  }
	  printf("|");
	  printf("\n");
  }
   
}
