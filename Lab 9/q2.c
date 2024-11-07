#include<stdio.h>
//5 cents for bolt
//3 cents per nut
//1 cent per washer
int main(){
 int bolt;
 int nut;
 int washer;
 int total;
 int price_bolt;
 int price_nut;
 int price_washer;
 printf("enter number of bolts:");
 scanf("%d",&bolt);
 printf("enter number of nuts:");
 scanf("%d",&nut);
 printf("enter number of washers:");
 scanf("%d",&washer);
 price_bolt=5 * bolt;
 price_nut=3 * nut;
 price_washer=1 * washer;
 total=price_bolt + price_nut + price_washer;
 if(nut>=bolt  && (2*washer >=bolt)){
    printf("total cost : %d\n",total);
    printf("order is ok");
 }else if(nut<bolt){
    printf("check the order: too few nuts\n");
    printf("total cost : %d\n",total);
 }else{
    printf("check the order: too few washers\n");
    printf("total cost : %d\n",total);
 }
 return 0;



}