#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int **allocation(int row,int column){
    int **ptr;
    ptr=(int**)malloc(row * sizeof(int*));//allocates memory for 2D array
    for(int i=0;i<row;i++){
        ptr[i]=(int*)malloc(column*sizeof(int));
    }
    return ptr;
}
void populate(int **array,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("element [%d][%d]:",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
}
void display(int **array,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
}
int main(){
int row;
int column;
int **ptr;
printf("enter number of rows:\n");
scanf("%d",&row);
printf("enter number of column:\n");
scanf("%d",&column);
ptr=allocation(row,column);
populate(ptr,row,column);
display(ptr,row,column);
printf("\nmodify segment\n");
ptr[0][0]=666;
printf("\n");
display(ptr,row,column);
for(int i=0;i<row;i++){
     free(ptr[i]);
}
free(ptr);

    return 0;
}