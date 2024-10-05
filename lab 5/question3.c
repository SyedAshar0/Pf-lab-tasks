#include<stdio.h>
int main(){
	int percentage;
	printf("please enter your respective percentage");
	scanf("%d",&percentage);
	(percentage>=90) ? printf("A\n") :(percentage>=80 && percentage<=89) ? printf("B\n") :(percentage>=70 && percentage<=79) ? printf("C\n") :(percentage>=60 && percentage <=69) ? printf("D\n") :(percentage<60) ? printf("F\n") :printf("invalid input");
return 0;
}
