#include<stdio.h>
 int main(){
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("grade is A");
    }else if(marks>=80 && marks<=89){
        printf("grade is B");
    }else if(marks>=70 && marks<=79){
        printf("grade is C");
    }else if(marks>=60 && marks<=69){
        printf("grade is D");
    }else if(marks<=60){
        printf("grade is F");
    }
return 0;
 }
