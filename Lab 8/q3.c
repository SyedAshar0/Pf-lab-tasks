#include<stdio.h>
int main(){
    int rows;
    printf("enter number of rows:");
    scanf("%d",&rows);
    for(int i=rows;i>=1;i--){
        for(int j=0;j<rows-i;j++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");    
    }
    for(int i=2;i<=rows;i++){
        for(int j=0;j<rows-i;j++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){ 
            printf("%d ",j);
        }
        printf("\n");    
    }  
return 0;    
}