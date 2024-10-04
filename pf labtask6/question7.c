#include<stdio.h>
int main(){
    int armnum;
    int rem;
    int num;
    int var;
    printf("enter number :");
    scanf("%d",&num);
    var =num;
   while(num>0)    {    
    rem=num%10;    
    armnum=armnum+(rem*rem*rem);    
    num=num/10;    
   } 
   if(var == armnum){
    printf("your number: %d is armstrong number",armnum);
   }
   else
   printf("this is not a armostrong number");       
   
return 0;   
}