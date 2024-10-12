#include<stdio.h>>

int main(){
   int Nrows;
   printf("enter numer of rows:");
   scanf("%d",&Nrows);
   int row=1;
   while(row<=Nrows){
   	int gap=1;
   	while(gap<=(Nrows-row)){
   		printf(" ");
   		gap++;
	   }
	int asterisk=1;
	while(asterisk<=(2*row-1)){
		printf("*");
		asterisk++;
	}
	printf("\n");
	row++;   
   }




return 0;	
}


