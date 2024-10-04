#include<Stdio.h>
int main(){
	int num;
	int i;
	printf("enter number");
	scanf("%d",&num);
	if(num<0){
		printf("please enter positive number");
	}
	else{
		while(i<num){		
			i=i+2;
			printf("%d\n",i);
		}
	}
return 0;
}
