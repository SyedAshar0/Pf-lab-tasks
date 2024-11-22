#include<stdio.h>
#include<string.h>
int main(){
	FILE *filei,*fileii;
	char line[300];
	
	filei = fopen("q3.1.txt","r");
	if(filei==NULL){
		printf("Error in opening file");
		return 1;	
	}
	fileii= fopen("3.2.txt","w");
		if(fileii==NULL){
			printf("Error in opening file");
			return 1;	
	}
	int lineNum = 1;
    while (fgets(line, sizeof(line), filei)){
    	for(int i=0;i<strlen(line);i++){
    		if(line[i]>='a' && line[i]<='z'){
    			line[i]-=32;
			}														
		}
		fprintf(fileii,"%s",line);
        lineNum++;
	}
	fclose(filei);
	fclose(fileii);
	
return 0;
}