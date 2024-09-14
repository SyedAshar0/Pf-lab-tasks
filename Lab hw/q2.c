#include<stdio.h>

int main(){
   float totalcharges;
   int units;
   float surcharge;
   float charges;
   printf("please enter your  units consumed :");
   scanf("%d",&units); 
   if(units<=0){
    printf("please enter correct units");
   }else if(units>=0 && units <= 30){
     charges = units * 0.6;
   }else if(units>=30 &&units<=110){
     charges = 18 + ((units-30)*0.85);
   }else if(units>=110  &&units <= 210){
     charges = 86 + ((units-110)*1.30);
   }else if(units>=210){
     charges = 216 + ((units-210)*1.60);
   }
    surcharge = charges * 0.15;
    totalcharges = charges + surcharge;
    printf("your electricity bill is :%.3f",totalcharges);
   return 0;
}