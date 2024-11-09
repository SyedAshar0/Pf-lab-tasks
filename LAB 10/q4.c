#include<stdio.h>

struct travel_package
{
 char package_name[100];
 char destinaion[100];
 int duration;
 float cost;
 int n;
};
void display(struct travel_package *package,int n){
    if(n==0){
        printf("no package avaliable");
        return;
    }else{
     printf("\nFollowing is a list of avaliable packages:\n");
    for(int i=0;i<n;i++){
    printf("package: %d:\n",i+1);
    printf(" package name: %s\n",package[i].package_name);
    printf("destination: %s\n",package[i].destinaion);
    printf("duration: %d days\n",package[i].duration);
    printf("cost: %.2f\n",package[i].cost);
    printf("seats avaliable: %d\n",package[i].n);
    }
    }
}
void book(struct travel_package *package,int n){
 int choice;
 printf("enter the number of package you want to book:");
 scanf("%d",&choice);

 //checking if user chose valid package
 if(choice>=1 && choice<=n){
    choice=choice-1;
    if(package[choice].n>0){
        package[choice].n--;
        printf("success!,seats remaining:%d",package[choice].n);
    }else{
        printf("oops!,no seats avaliable for this chosen package");
    }
 }else{
    printf("invalid entry");
 }
}
int main(){
    struct travel_package package[]= 
    {
        {"Cold Alpines", "Antarctica", 10, 15000.00, 20},
        {"Mountain hike", "australia", 20, 2750.00, 15},
        {"ethnic drive", "germany", 9, 1750.00, 18},
        {"Desert Safari", "Dubai", 4, 30003.00, 6}
    };
 int n=sizeof(package)/sizeof(package[0]);
 int choice;
 do{
        printf("\ntravel package(main menu)\n");
        printf("i)view packages\n");
        printf("ii)book package\n");
        printf("iii)quit\n");
        printf("choose option:\n");
        scanf("%d",&choice);

        switch ((choice))
        {
        case 1:
            display(package,n);
            break;
        case 2:
            book(package,n);
            break;
        case 3:
            printf("hope you had a great interactivity!\n");
            break;    
        default:
        printf("your option in invalid,try again");
            break;
        }
    }while(choice!=3);

    return 0; 
}

