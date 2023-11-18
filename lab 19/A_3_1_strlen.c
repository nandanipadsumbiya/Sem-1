#include<stdio.h>
void main(){
	char s1[50];
	printf("Enter a string s1: ");
	gets(s1);
	int i=0,count=0;
	while(s1[i]!='\0'){
		count ++;
		i++;
	}
		printf("string lentgh is=%d",count);
}
//#include<stdio.h>
////void main(){
	char s1[50],s2[50];
	printf("Enter a string s1: ");
	gets(s1);
	printf("Enter a string s2: ");
	gets(s2);
	int i;
	for(i=0;s2[i]!='\0';i++){
		s1[i]=s2[i];
		s1[i]!='\0';
	}
		printf("modified string is=%s",s1);
}
