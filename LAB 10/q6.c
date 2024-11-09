#include<Stdio.h>
void reverse(char*string){
    if(*string!='\0'){
        reverse(string+1);
        printf("%c",*string);
    }
    
}



int main(){
    char string[100];
printf("enter string:\n");
fgets(string,sizeof(string),stdin);
reverse(string);


return 0;	
}

