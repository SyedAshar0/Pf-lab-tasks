#include<stdio.h>
struct phone{
    int area;
    int exchange;
    int number;
};
int main(){
struct phone Phone1={212,767,8900};
struct phone Phone2;
printf("enter area:\n");
scanf("%d",&Phone2.area);
printf("enter exchange:\n");
scanf("%d",&Phone2.exchange);
printf("enter number:\n");
scanf("%d",&Phone2.number);

printf("my number is :(%d) %d - %d\n",Phone1.area,Phone1.exchange,Phone1.number);
printf("your number is :(%d) %d - %d\n",Phone2.area,Phone2.exchange,Phone2.number);

    return 0;
}