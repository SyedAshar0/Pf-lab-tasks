#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int len_key;
    int len_plaintext;
    char key[100];
    char plainText[100];
    char cipher[100];
    char cipher_mod_26[100];
    char Final_Cipher[100];
    printf("enter plaintext:");
    fgets(plainText,50,stdin);
    printf("enter key:");
    fgets(key,50,stdin);
    printf("Plaintext:\n");
    plainText[strlen(plainText)-1]='\0';
    key[strlen(key)-1]='\0';
    len_key=strlen(key);
    len_plaintext=strlen(plainText);
    for(int i=0;i<len_plaintext;i++){
        printf("%d\t",plainText[i]-0);
        if(plainText[i]==' '){
            plainText[i]=20;
        }else{
            plainText[i]=plainText[i]-64;
        }
    }
    printf("\nKey:\n");
    for(int i=0;i<len_key;i++){
        printf("%d\t",key[i]-0);
        if(key[i]==' '){
            key[i]=20;
        }else{
            key[i]=key[i]-64;
        }
    }
    //adding values vertically
    for(int i=0;i<len_plaintext;i++){
        cipher[i]=plainText[i]+key[i%len_key];
    }
    //taking modulo
    for(int i=0;i<len_plaintext;i++){
        cipher_mod_26[i]=cipher[i]%26;
        if(cipher_mod_26[i]==0){
            cipher_mod_26[i]=26;
        }
    }
    //adding yet again
    for(int i=0;i<len_plaintext;i++){
        Final_Cipher[i]=cipher_mod_26[i]+64;
    }
    printf("\nresult\n");
    for(int i=0;i<len_plaintext;i++){
        if(Final_Cipher[i]==20){
            printf(" ");
        }else{
        printf("%c",Final_Cipher[i]);
        }
    }
    printf("\n");
 return 0;
}