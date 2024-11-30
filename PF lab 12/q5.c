#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int find(int *T,int N,int key){
    for(int i=0;i<N;i++){
        if(T[i]==key){
            return i;
        }
    }
    return -1;
}
int delete(int *T,int N,int key){
    int position=find(T,N,key);
    if(position==-1){
        printf("element not found\n");
        return N;
    }
    for(int i=position;i<N;i++){
        T[i]=T[i+1];
    }
    return N-1;
}
int insert(int *T,int N,int key){
    T[N]=key;
    return (N+1);
}
int main(){
int n;//no of test cases
int N;
int key1;
int key2;
printf("enter number of test cases:\n");
scanf("%d",&n);
for(int t=0;t<n;t++){
    printf("\nenter number of elements for test case %d:\n",t+1);
    scanf("%d",&N);
    int *T=(int*)malloc((N+1)*sizeof(int));
    printf("enter element to be inserted:\n");
    scanf("%d",&key1);
    printf("enter element to be deleted:\n");
    scanf("%d",&key2);
    printf("enter elements for test case : %d \n",t+1);
    for(int j=0;j<N;j++){
        printf("%d:",j+1);
        scanf("%d",&T[j]);
    }
    printf("\nbefore insertion\n");
    for(int j=0;j<N;j++){
        printf("%d\t",T[j]);
    }
    printf("\n");
    N=insert(T,N,key1);
    printf("\nafter insertion\n");
    for(int j=0;j<N;j++){
        printf("%d\t",T[j]);
    }
    printf("\n");
    N=delete(T,N,key2);
    printf("\narray after deleting\n");
    for(int j=0;j<N;j++){
        printf("%d\t",T[j]);
    }
    free(T);
}
    return 0;
}
