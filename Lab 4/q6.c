#include<stdio.h>
int main(){
    int firstnum;
    int secondnum;
    printf("enter value of num1 and num2:");
    scanf("%d%d",&firstnum,&secondnum);
    if(firstnum>secondnum){
        if(firstnum>100){
         printf("first num is larger");
        }else if(firstnum<100){
            if(firstnum<0){
                printf("firstnumber is negative or smaller");
            }else
            printf("firstnumber is smaller");
        }
    }else if(firstnum == secondnum){
        printf("both numbers are equal");
    }else
    printf("invalid input");
return 0;
}
