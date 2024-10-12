#include<stdio.h>>

int main(){
   int Nrows;
   printf("enter numer of rows:");
   scanf("%d",&Nrows);
   int row;
   for(row=Nrows;row>=1;row--){
   	int asterisk=1;
   	do{
   		printf("*");
   		asterisk++;
	   }while(asterisk<=row);
	printf("\n");
   }









return 0;	
}


