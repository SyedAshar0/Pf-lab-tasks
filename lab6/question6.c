#include<stdio.h>
int main(){
    int num;
    int count=0;
    int newnum;
    int fib0=0;
    int fib1=1;
    int i;
    printf("enter number :");
    scanf("%d",&num);
    if(num<=1){
        printf("your number is not prime");
    }
    else{
        for(int i =1;i<=num;i++){
            if(num%i==0){
                count++;
            }
        }
         if(count>2){
          printf("your number is not prime");
        } else{
            printf("number is prime\n");
            printf("the fibonacci series is :\n");
            printf("%d\t%d\t",fib0,fib1);
            for(i=2;i<num;i++){
                newnum=fib0+fib1;
                printf("%d\t",newnum);
                fib0=fib1;
                fib1=newnum;
            }
            
        }
         }
        
return 0;
}
