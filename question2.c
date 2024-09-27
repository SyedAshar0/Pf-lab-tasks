#include<stdio.h>
int main(){
	int angle1;
	int angle2;
	int angle3;
	int sum;
	printf("please enter angle1,angle2,angle3");
	scanf("%d%d%d",&angle1,&angle2,&angle3);
	sum=angle1+angle2+angle3;
	if(sum==180 && angle1>=0 && angle2>=0 && angle3>=0){
		printf("triangle is valid");
	}else
	printf("triangle is not valid");
return 0;
}

