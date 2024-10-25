#include<stdio.h>


int main(){
    int m1;
    int n1;
    int m2;
    int n2;
    printf("dimensions of first matrix:\n");
   printf("enter value of m :");
   scanf("%d",&m1);
   printf("enter value of n:");
   scanf("%d",&n1);
   printf("dimensions of second matrix:\n");
   printf("enter value of m :");
   scanf("%d",&m2);
   printf("enter value of n:");
   scanf("%d",&n2);
   int matrix1[m1][n1];
    int matrix2[m2][n2];
    int sum[m1][n1];
   printf("filling first matrix\n");
   for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        scanf("%d",&matrix1[i][j]);
    }
   }
   printf("filling second matrix:\n");
   for(int i=0;i<m2;i++){
    for(int j=0;j<n2;j++){
        scanf("%d",&matrix2[i][j]);
    }
   }
   printf("displaying first matrix:\n");
   for(int i=0;i<m1;i++){
    printf("\n");
    for(int j=0;j<n1;j++){
        printf("%d\t",matrix1[i][j]);
    }
   }
   printf("\n");
   printf("displaying second matrix:\n");
   for(int i=0;i<m2;i++){
    printf("\n");
    for(int j=0;j<n2;j++){
        printf("%d\t",matrix2[i][j]);
    }
   }
   printf("\n");
   for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        sum[i][j]=matrix1[i][j]+matrix2[i][j];
    }
   }
   printf("displaying resulting matrix\n");
   for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
   }
   

   





return 0;    
}