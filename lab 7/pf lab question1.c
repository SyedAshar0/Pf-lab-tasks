#include<stdio.h>

int main(){
	int arr[]={1,1,1,1,1,1,5,1,1,1,1,1};
	int num;
	int i;
	int size = sizeof(arr);
	printf("enter num:");
	scanf("%d",&num);
	for(i=0;i<size;i++){
    	if(arr[i]==num){
			printf("num : %d found at index : %d",num,i);
			break;
		}
    }
    if(!(arr[i]==num)){
    	printf("number was not found");
	}
	

return 0;	
}

