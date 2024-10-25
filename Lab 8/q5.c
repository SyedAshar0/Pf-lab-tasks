#include<stdio.h>


int main(){
    int index=0;
    int z;
   int matrix[4][4];
   for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&matrix[i][j]);
    }
   }

   for(int i=0;i<4;i++){
    printf("\n");
    for(int j=0;j<4;j++){
        printf("%d\t",matrix[i][j]);
    }
   }
   for(int j=0;j<4;j++){ // iterating through each column
    for(int i=0;i<4;i++){//sorting for each column
        for(int k=0;k<4-i-1;k++){
               if(matrix[k][j]>matrix[k+1][j]){
                z=matrix[k][j];
                matrix[k][j]=matrix[k+1][j];
                matrix[k+1][j]=z;
            }
        }
    }
   }
    printf("\n");
    printf("new matrix");
    for(int i=0;i<4;i++){
    printf("\n");
    for(int j=0;j<4;j++){
        printf("%d\t",matrix[i][j]);
    }
    }
   
return 0;    
}