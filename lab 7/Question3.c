#include<stdio.h>
int main(){
int arr[12];
int sum[6]={0};
//this loop will take respective input 
printf("enter 12 numbers:\n");
for(int i=0;i<12;i++){
    printf("%d :",i+1);
    scanf("%d",&arr[i]);  
}
//following this,this loop willfind sum for 2 values making 1 pair
//arr[i*2] for 0th index would be 0th index value 
//arr[i*2 +1] for 0th index would be the 1st index value
//this loop will store each pairs sum in a single index of sum loop.
for(int i =0;i<6;i++){
    sum[i]=arr[i*2] + arr[i * 2 + 1 ];
    }
//this loop is used to print sum in a array mark.
printf("Pair sum array is :\n");
for(int i=0;i<6;i++){
    printf("%d\t",sum[i]);
}





return 0;
}
