#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void add(float **array,int *size,int *index){//used double pointer since im reallocating to same variable so thats why i created a pointer to the pointer of array to prevent mismatch of values.
    int n;
    int x;
    //functionality for realloc if current index is equal tot isze of array so we can create more space
    if(*index>=*size){
        *size=*size*2;
        *array=(float*)realloc(*array,(*size)*sizeof(float));
    }
    printf(("enter number you want to add:\n"));
    scanf("%d",&n);
    printf("enter postion\n");
    scanf("%d",&x);
    for(int i=*index;i>=x;i--){
        (*array)[i]=(*array)[i-1];//shifitng elements to allow insertion of new value
    }
    (*array)[x-1]=n;//updating erray
    (*index)++;//increasing index
}
void removeelement(float **array,int *size,int *index){
    printf("\nremoving\n");
    int n;
    int x;
    printf(("enter number you want to remove:\n"));
    scanf("%d",&n);
    printf("enter postion\n");
    scanf("%d",&x);
for(int i=x-1;i<*index-1;i++){
           (*array)[i]=(*array)[i+1];
    }
    (*index)--;
    //resiszing as deemed in question accordingly
    if(*index<= *size /2 && *size>4){
        *size=*size /2;
        *array=(float*)realloc(*array,(*size)*sizeof(float));
    }
}
void display(float *array,int index){
    int x;
    int pos;
    int n;
    printf("\narray\n");
    for(int i=0;i<index;i++){
     printf("%f\t",array[i]);
    }

}
int main(){
    int size=4;//instead of defining variable on top,i asigned 4 to a variable so instead of making it static i can use it while rellocaitng
    int index=0;
   float *array=(float*)malloc(size*sizeof(float));//dma for array
   for(int i=0;i<size;i++){
    printf("%d:",i+1);
    scanf("%f",&array[i]);
    index++;//increment to allow rest of function to work
   }
   display(array,index);
   printf("\n");
   add(&array,&size,&index);
   display(array,index);
   removeelement(&array,&size,&index);
   display(array,index);


free(array);
    return 0;
}