#include <stdio.h>
int main(){
	FILE *file;
	char line[300];
	
	file = fopen("q2.txt","r");//opens file
	if(file==NULL){//checks if its null
		printf("Error in opening file");//prompt
		return 1;	
	}
	
	
	int lineNum = 1;
    while (fgets(line, sizeof(line), file)) {
        printf("%d. %s", lineNum, line);
        lineNum++;
	}
	fclose(file);
	
return 0;																																																			
}