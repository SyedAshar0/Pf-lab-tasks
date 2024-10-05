#include<stdio.h>
//the left most bit represents whether number is even or odd
//by rightshifting number by 1 we get a new value by removing left most bit
//and by left shifting it back if we get our original number aain then this proves that its even...
int main(){
    int num;
    printf("please enter your number");
    scanf("%d",&num);
    if((num >> 1) <<1 ==num){
     printf("number is even");
    }else
    printf("number is odd");
return 0;
}