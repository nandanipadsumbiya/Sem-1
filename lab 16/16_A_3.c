#include<stdio.h>
void main(){
  int i,j,rollno,mark;
  
  
  int a[20][2];
  for(i=0;i<20;i++){
  	for(j=0;j<2;j++){
  	//	printf("Enter an element in to a[%d][%d]",i,j);
  		if(j==0){
  			printf("Enter rollno:");
  			
		  }
		  else{
		  	printf("Enter mark:");
		  	
		  }
  		scanf("%d",&a[i][j]);
  		
	  }
  }
  for(i=0;i<20;i++){
  	for(j=0;j<2;j++){
  		printf("%d",a[i][j]);
	  }
	  printf("\n");
  }	
}
