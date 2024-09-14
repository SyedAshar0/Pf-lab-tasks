#include<stdio.h>

int main(){
  int time;//24 hour format
   printf("please enter time:");
   scanf("%d",&time);
 
  if(time>=6 && time <12){
    printf("good morning");
  }else if(time>=12 && time <18){
    printf("good afternoon");
  }else if(time>=18 && time<24){
    printf("good evening");
  }else if(time>=0 && time <=5){
    printf("good night");
  }







    return 0;
}