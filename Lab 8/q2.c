#include<stdio.h>


int main(){
    int index=0;
   int matrix[4][4];
   for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&matrix[i][j]);
        if(matrix[i][j]<0){
            matrix[i][j]=0;
        }
    }
   }

   for(int i=0;i<4;i++){
    printf("\n");
    for(int j=0;j<4;j++){
        printf("%d\t",matrix[i][j]);
    }
   }   

return 0;    
}