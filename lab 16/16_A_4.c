#include<stdio.h>
void main(){
  int n,m;
  printf("Enter row:");
  scanf("%d",&n);
  printf("Enter col:");
  scanf("%d",&m);
  int a[n][m],i,j,b[n][m],c[n][m];
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		printf("Enter an element in to a[%d][%d]",i,j);
  		scanf("%d",&a[i][j]);
  		
	  }
  }
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		printf("Enter an element in to b[%d][%d]",i,j);
  		scanf("%d",&b[i][j]);
	  }
  }
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		c[i][j]=a[i][j]+b[i][j];
  		 printf("%d",c[i][j]);
	  }
	  printf("\n");
  }
 
}
