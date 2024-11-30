#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(int *arr,int n){
    for(int i=0;i<=n;i++){
            if(arr[i]%2!=0){
                arr[i]=arr[i]-1;
            }
    }
}
int main(){
    int n;
    int *arr;
    int newarr;
    printf("enter size:\n");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d:",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("\nsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    free(arr);


    return 0;
}