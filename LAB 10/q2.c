#include<Stdio.h>
void percentage(int n,int i){
    if(i>100){
        return;
    }else{
        printf(" %d percent -->%.2f\n",i, (n * i) / 100.0);
    }
    percentage(n,i+1);
}



int main(){
    int n;
	printf("enter value to split in percentage:");
    scanf("%d",&n);
    percentage(n,1);
return 0;	
}


