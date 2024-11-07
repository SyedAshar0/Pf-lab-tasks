#include<stdio.h>
#include<string.h>
int main(){
  char array2D[10][10]={"harry","alice","charlie","diana","eve"};
  int found=0;
  char name[20];
  printf("enter a name to search:");
  fgets(name,20,stdin);
  name[strlen(name)-1]='\0';
  for(int i=0;i<5;i++){
    if(strcmp(array2D[i],name)==0){
        found=1;
    }
  }
  if(found==1){
    printf("found");
  }else{
    printf("not found");
  }
 return 0;



}