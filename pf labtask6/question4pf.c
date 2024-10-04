#include<Stdio.h>
int main(){
	int num;
	int x;
	do{
		printf("enter number");
		scanf("%d",&num);
		x=x+num;
		}while(num>0);
	    printf("you entered zero hence program was interrupted");
}
