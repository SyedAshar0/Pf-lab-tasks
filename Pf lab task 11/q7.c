#include<stdio.h>
//for a single department there can b emultiple courses.
struct course{
    int courseID;
    char course_name[50];
    char instructor_name[50];
    int credits;
};
struct department{
    char name[50];
    struct course crs[20];
    int n_courses;
};
void add_dept(struct department *dept,int *n_dept){
    printf("how many deparments do you want to add?\n");
    scanf("%d",n_dept);
    for(int i=0;i<*n_dept;i++){
        printf("enter depratment name:\n");
        scanf("%s",dept[i].name);
        dept[i].n_courses=0;
    }
}
void add_course(struct department *dept,int n_dept){
    int index;
    int n2;
    printf("enter the index of the department you want to add this course to:\n ");
    scanf("%d",&index);
    if(index>=0 && index<n_dept){
    printf("how many courses do you want to add to this department \n");
    scanf("%d",&n2);
    struct course *crs=&dept[index].crs[dept[index].n_courses];//the crs pointer points to the index n_courses in the crs array for the department at index which we have selected.
    for(int i=0;i<n2;i++){
        printf("enter course Id:\n");
        scanf("%d",&crs->courseID);
        printf("enter course name:\n");
        scanf("%s",crs->course_name);
        printf("enter instructor name:\n");
        scanf("%s",crs->instructor_name);
        printf("enter credits:\n");
        scanf("%d",&crs->credits);
        dept[index].n_courses++;
    }
}else{
    printf("invalid input\n");
}
}
void display(struct department *dept,int n_dept){
    for(int i=0;i<n_dept;i++){
        printf("%s\n",dept[i].name);
        for(int j=0;j<dept[i].n_courses;j++){
            printf("Course Id :%d\n",dept[i].crs[j].courseID);
            printf("Course name :%s\n",dept[i].crs[j].course_name);
            printf("instructor Name :%s\n",dept[i].crs[j].instructor_name);
            printf("Credits:%d\n",dept[i].crs[j].credits);
        }
    }
}
void calculate(struct department *dept,int n_dept){
    for(int i=0;i<n_dept;i++){
        int sum=0;
        for(int j=0;j<dept[i].n_courses;j++){
            sum=sum+dept[i].crs[j].credits;
        }
        printf("total credits for dept : %s is :%d",dept[i].name,sum);
    }
}
int main(){
int n_dept=0;
int n2;
int sum;
int choice;
struct department dept[20];
do{
    printf("\n<-----uni course enrollment system---->\n");
    printf("1)add departments\n"); 
    printf("2)add course\n");
    printf("3)display details\n");
    printf("4)calculate total credits for each department\n");
    printf("5)exit\n");
    printf("choose an option(1-5)\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    add_dept(dept,&n_dept);//add department on that sepcific address of department number
        break;
    case 2:
    add_course(dept,n_dept);//on the dpeartment number and not for all
        break;
    case 3:
    display(dept,n_dept);
        break;    
    case 4:
    calculate(dept,n_dept);
        break;    
    case 5:
    printf("\nhope you enjoyed,leaving now...\n");
        break;
    default:
        printf("choose correct option only\n");
        break;
    }
}while(choice!=5);
    return 0;
}