#include<Stdio.h>
void bubblesort(int array[],int size){
    int temp;
     if(size==1){
        return;
     }else{
        for(int i=0;i<size;i++){
            temp=array[i];
            if(array[i]>array[i+1]){
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
     }
     size=size-1;//keeps decreasing value of size such that index reaches size.
     bubblesort(array,size);
}
int main(){
    int size;
    printf("enter size");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        printf("element :%d -->",i+1);
        scanf("%d",&array[i]);
    }
    bubblesort(array,size);
    printf("\nsorted array\n");
    for(int i=0;i<size;i++){
        printf("element :%d -->%d\n",i+1,array[i]);
    }
return 0;	
}

