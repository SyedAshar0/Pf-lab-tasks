#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int n;
printf("enter total elements:\n");
scanf("%d",&n);
if(n<1 || n>100){
    printf("value should be within 1 and 100\n");
    exit(0);
}
int *x=(int*)malloc(n*sizeof(int));//variable to store number
for(int i=0;i<n;i++){
    printf("%d:",i+1);
    scanf("%d",&x[i]);
}
int max=x[0];
for(int i=0;i<n;i++){
    if(x[i]>max){
        max=x[i];
    }
}
printf("largest is : %d",max);

free(x);
    return 0;
}