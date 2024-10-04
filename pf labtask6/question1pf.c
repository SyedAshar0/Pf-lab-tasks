#include<Stdio.h>
int main(){
 int num;
 int fact=1;
 printf("enter the number :");
 scanf("%d",&num);
  if(num<0){
  	printf("please enter a valid number");
  }
  else{
  int i;
  for(i=1;i<=num;i++){
  	fact*=i;
  	}printf("your factorial is %d",fact);
}
return 0;
}

