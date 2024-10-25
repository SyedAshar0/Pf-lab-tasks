#include<stdio.h>


int main(){
    int index=0;
   int matrix[3][3];
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&matrix[i][j]);
    }
   }

   for(int i=0;i<3;i++){
    printf("\n");
    for(int j=0;j<3;j++){
        printf("%d\t",matrix[i][j]);
    }
   }

   for(int i=0;i<3;i++){
    int sumrow=0;
    for(int j=0;j<3;j++){
        sumrow=sumrow+matrix[i][j];
    }
    printf("\n");
    printf("sum of scores in row :%d is : %d",i,sumrow);
   }
   for(int i=0;i<3;i++){
    int sumcol=0;
    for(int j=0;j<3;j++){
        sumcol=sumcol+matrix[j][i];
    }
    printf("\n");
    printf("sum of scores in column : %d is : %d",i,sumcol);
   }
   

   





return 0;    
}