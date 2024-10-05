#include<stdio.h>
//num & 1 is used to check thr rightmost bit if the number of both when operated with and gives 1
//if yes then count++
//by right shifting we can do this for consecutive bits till the position we desire....
int main(){
    int num;
    int count=0;
    printf("please enter your number :");
    scanf("%d",&num);
    if(num & 1)
    count++;
    if((num>>1)&1)
    count++;
    if((num>>2)&1)
    count++;
    if((num>>3)&1)
    count++;
    if((num>>4)&1)
    count++;
    if((num>>5)&1)
    count++;            
    printf("number of 1 are : %d",count);  
return 0;
}
