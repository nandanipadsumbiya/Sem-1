#include<stdio.h>
  struct student{
  	char name[100];
  	float per;
  	int age;
  }abc[5];
  int main(){
  	struct student abc;
  	int i;
  	for(i=0;i<5;i++){
  		printf("Enter a name %d:");
  		scanf(" %s",&abc.name);
  		printf("Enter a per %d:");
  		scanf(" %f",&abc.per);
  		printf("Enter a age %d:");
  		scanf(" %d",&abc.age);
	  }
	  for(i=0;i<5;i++){
	  	printf("name %d=%s\n",abc.name);
	  	printf("per %d=%f\n",abc.per);
	  	printf("age %d=%d\n",abc.age);
	  }
  }
