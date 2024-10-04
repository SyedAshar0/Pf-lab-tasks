#include<stdio.h>
int main(){
	int num;
	do{
	   	printf("enter number");
	    scanf("%d",&num);
	}while(num<0);
	printf("your number is positive and is %d",num);
	
return 0;
}
