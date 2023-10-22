#include<stdio.h>
void main(){
	int i,count=0;
	char arr[1000];
	printf("Enter a string");
	gets(arr);
	printf("%s\n",arr);
	for(i=0;arr[i]!='\0';i++){
		count++;
	}
	printf("length of string= %d",count);
}
