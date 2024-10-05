#include<stdio.h>

int main(){
    int age;
    char status;//y for yes and N for no
    printf("please enter age ");
    scanf("%d",&age);
    if(age>=18 ){
    	printf("you can vote");
	}else
	printf("you cant vote");
    
return 0;
}
