#include <stdio.h>
#include <string.h>
struct Course{
    char course_name[50];
    char instructor_name[50];
    char students[20][50];
};
struct Department {
    char dept_name[50];
    struct Course courses[10];
    int course_count;
};
void add_dept(struct Department dept[],int *department_count){
	printf("Enter department name: ");
    scanf(" %[^\n]", dept[*department_count].dept_name);
    dept[*department_count].course_count = 0;
    (*department_count)++;
}
void add_course(struct Department dept[],int *department_count){
	char dept_name[50];
    int found = -1;
    int num_students;
    printf("Enter the department name to add a course: ");
    scanf(" %[^\n]",&dept_name);
    for (int i = 0; i < *department_count; i++) {
        if (strcmp(dept[i].dept_name, dept_name) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("please enter valid department..\n");
        return;
    }
    printf("Enter course name: ");
    scanf(" %[^\n]", dept[found].courses[dept[found].course_count].course_name);
    getchar();
    printf("Enter instructor name: ");
    scanf(" %[^\n]", dept[found].courses[dept[found].course_count].instructor_name);
    getchar();
    printf("How many students? ");
    scanf("%d",&num_students);
    if(num_students>0 && num_students<=20){
        for (int i=0;i<num_students;i++){
            printf("Enter name of student %d: ",i+1);
            scanf(" %[^\n]", dept[found].courses[dept[found].course_count].students[i]);
            getchar();
        }
    }else{
        printf("Invalid number of students.\n");
        return;
    }
    dept[found].course_count++;
}
void display(struct Department dept[], int department_count) {
    if (department_count == 0) {
        printf("No departments as per choice\n");
        return;
    }   
    for (int i = 0; i < department_count; i++) {
        printf("Department: %s\n", dept[i].dept_name);
        for (int j = 0; j < dept[i].course_count; j++) {
            printf("Course Name: %s\n", dept[i].courses[j].course_name);
            printf("Instructor: %s\n", dept[i].courses[j].instructor_name);
            printf("Enrolled Students:\n");
            for(int k=0;k<20;k++){
                if (strlen(dept[i].courses[j].students[k]) > 0){//if student is not empty
                    printf("%s\n",dept[i].courses[j].students[k]);
                }
            }
        }
    }
}
int main() {
    struct Department dept[10];
    int department_count = 0;
    int choice;
   do{
        printf("\n<-----Univeristy management system----->\n");
        printf("1. Add Department\n");
        printf("2. Add Course\n");
        printf("3. Display Departments and Courses\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                add_dept(dept, &department_count);
                break;
            case 2:
                add_course(dept, &department_count);
                break;
            case 3:
                display(dept, department_count);
                break;
            case 4:
                printf("hope you enjoyed,leaving now....\n");
                break;
            default:
               printf("please enter valid option\n");
        }
    }while(choice!=4);
return 0;
}