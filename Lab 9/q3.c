#include<stdio.h>
#include<string.h>
int main(){
 char username[]= "admin";
 char password[]= "1234";
 char user[50];
 char pass[50];
 printf("enter your username:");
 fgets(user,50,stdin);
 printf("enter your password:");
 fgets(pass,50,stdin);
 user[strlen(user)-1]='\0';
 pass[strlen(pass)-1]='\0';
 if(strcmp(username,user)==0 && strcmp(password,pass)==0){
    printf("acces granted\n");
 }else{
    printf("acces denied\n");
 }
 return 0;



}