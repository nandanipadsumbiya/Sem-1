#include<stdio.h>
void main(){
  int n=3,m=3,negative=0,positive=0,zero=0;
  int a[n][m],i,j;
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		printf("Enter an element in to a[%d][%d]",i,j);
  		scanf("%d",&a[i][j]);
	  }
  }	
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		if(a[i][j]>0){
  			positive++;
		  }
		else if(a[i][j]<0){
			negative++;
		}
		else{
			zero++;
		}
		//printf("%d %d %d",positive,negative,zero);
	  }
	 // printf("%d %d %d",positive,negative,zero);
	  printf("\n");
}
 printf("%d %d %d",positive,negative,zero);
}
