#include<stdio.h>
void main(){
	char a[50],b[50];
	printf("Enter a string 1:");
	gats(a);
	printf("Enter a string 2:");
	gets(b);
	int i=0;
	for(i=0;b[i]!='\0';i++){
		a[i]=b[i];
		a[i]='\0';
	}
	printf("modified string is:%s",a);
}
