#include<stdio.h>
int main(){
int arr[15];
int i;
int sum=0;
printf("enter 15 numbers:\n");
for(i=0;i<15;i++){
    printf("%d :",i+1);
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
printf("sum is : %d",sum);





return 0;
}

