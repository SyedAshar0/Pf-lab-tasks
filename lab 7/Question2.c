#include<stdio.h>
int main(){
int arr[10];
int var;
printf("enter 10 numbers:\n");
for(int i=0;i<10;i++){
    printf("%d :",i+1);
    scanf("%d",&arr[i]);
}
var=arr[0];
for(int i =0;i<9;i++){
    arr[i]=arr[i+1];
}
arr[9]=var;
printf("array after element shifting :");
printf("\t");
for(int i=0;i<10;i++){
    printf("%d\t",arr[i]);
}
return 0;
}