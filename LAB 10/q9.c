#include<stdio.h>
#include<string.h>
struct employeeDetails 
{
    int employeeID;
    char Name[50];
    char Department[50];
    float Salary;
};

void AddDetails(struct employeeDetails *store){//"*store" is pointer to "store' array 
    int employeeID;
    char Name[50];
    char Department[50];
    float Salary;
    printf("employee ID:\n");
    scanf("%d",&employeeID);
    printf("Name:\n");
    scanf("%s",&Name);
    printf("department:\n");
    scanf("%s",&Department);
    printf("salary:\n");
    scanf("%f",&Salary);
    //assigning
    store->employeeID=employeeID;           /*understanding*/
    strcpy(store->Name,Name);               /*"->" this arrow operator is used in c when pointing to a member of structure i.e: store->salary=salary,*/
    strcpy(store->Department,Department);   /*thus store pointer points to the member which is salary which is equal to salary variable through which we took our input to store.*/
    store->Salary=Salary;
    printf("Data recorded!");
}
void Display(struct employeeDetails *store,int n){
    if(n==0){
        printf("invalid entry");
    }else{
        printf("\nEmployee Detail\n");
        for(int i=0;i<n;i++){
            printf("employee:%d\n",i+1);
            printf("employee ID:%d\n",store[i].employeeID);
            printf("Name:%s\n",store[i].Name);
            printf("department:%s\n",store[i].Department);
            printf("salary:%.2f\n",store[i].Salary);
        }
    }
}
int main(){
 int n;
 printf("enter number of employees:\n");
 scanf("%d",&n);
 struct employeeDetails store[100];
 
 for(int i=0;i<n;i++){
    printf("\n input details of employee : %d\n",i+1);
    AddDetails(&store[i]);//in function addDetails,access store array on zeroth index and take input since store is our array of structure and in loop to go till n...
 }
 printf("\n displaying data now\n");
 Display(store,n);
 return 0;
}
/*i.e:
on addDetails(store[0])=>
printf("employee ID:\n");
    scanf("%d",&employeeID);
    printf("Name:\n");
    scanf("%s",&Name);
    printf("department:\n");
    scanf("%s",&Department);
    printf("salary:\n");
    scanf("%f",&Salary);
    //assigning
    store->employeeID=employeeID;           
    strcpy(store->Name,Name);               
    strcpy(store->Department,Department);   
    store->Salary=Salary;
    printf("Data recorded!");
all this is done and this is stored on zeroth index and this continues in loop till index reaches value of n,and then afterwards we use display function=>
printf("employee:%d\n",i+1);
            printf("employee ID:%d\n",store[i].employeeID);
            printf("Name:%s\n",store[i].Name);
            printf("department:%s\n",store[i].Department);
            printf("salary:%.2f\n",store[i].Salary);
which does all this for each store pointed index...
*/