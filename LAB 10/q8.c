#include<Stdio.h>
void ArrayOutput(int array[],int size,int i){
     if(i==size){//index becomes equal to size of array
        return;//exit
     }else{
        printf("element :%d -->%d\n",i+1,array[i]);
     }
     ArrayOutput(array,size,i+1);//i paramter increments to print next element
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
    printf("\narray\n");
    ArrayOutput(array,size,0);
return 0;	
}
/*recursion understanding:
check if index is equal to size index,which if true write return which measn to exit else if 
index in not equal to size index then write the  print call statement with incremetning index and store in ith index of array
then use recurive with argument having increment to call next element to be printed...
and the main functions function argument starts from 0th index which really increases due to the parameter each time via recursion...*/