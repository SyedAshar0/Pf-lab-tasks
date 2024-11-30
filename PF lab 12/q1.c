#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
   int *grade;
   int g;
};
void initialize(struct student * students,int  n){
    for(int i=0;i<n;i++){
        printf("enter number of grades for student %d:\n",i+1);
        scanf("%d",&students[i].g);
        students[i].grade=(int*)malloc(students[i].g*sizeof(int));
        printf("enter grade for student :%d\n",i+1);
        for(int j=0;j<students[i].g;j++){
        printf("Grade %d:",j+1);
        scanf("%d",&students[i].grade[j]);
        }
    }
}
void display(struct student * students,int n){
    for(int i=0;i<n;i++){
        printf("student %d grades:\n",i+1);
        for(int j=0;j<students[i].g;j++){
        printf("%d\t",students[i].grade[j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    int g;
    printf("enter number of students:\n");
    scanf("%d",&n);
 struct student *students=(struct student *)malloc(n*sizeof(struct student));
initialize(students,n);
display(students,n);
for(int i=0;i<n;i++){
    free(students[i].grade);
}
free(students);
    return 0;
}