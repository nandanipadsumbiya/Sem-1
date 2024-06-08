#include<stdio.h>
   void main(){
   	    int a,b;
   	    char choice;
   	    printf("Enter choice:");
   	    scanf("%c",&choice);
   	    printf("Enter a and b :");
   	    scanf("%d %d",&a,&b);
   	    switch (choice){
   	    	case '+':printf("sum=%d",a+b);
   	    	         break;
   	    	case '-':printf("sum=%d",a-b);
   	    	         break;
   	    	case '*':printf("sum=%d",a*b);
   	    	         break;
   	    	case '/':printf("sum=%d",a/b);
   	    	         break;
   	        default:printf("invalid input");
   	                 break;
   	    }
}
