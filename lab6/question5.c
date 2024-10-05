#include<stdio.h>
int main(){
    int num;
    int count=0;
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
        } else
            printf("your number is prime");
         }
        
return 0;
}





