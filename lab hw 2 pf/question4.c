#include<stdio.h>
int main(){
	int totalamount;
	int status;//1 for yes and 0 for no
   printf("enter total amount :");
   scanf("%d",&totalamount);
   printf("enter membership status :");
   scanf("%d",&status);
   (totalamount >=100 && status==1) ? printf("discount is applied\n") : printf("no discount\n");
   
return 0;
}
