#include<Stdio.h>
#include<string.h>
//structure made
struct Car
{
    char make[100];
    char model[100];
    int year;
    float price;
    int mileage;
};
//function to add car
void addCar(struct Car *slot,int *n){//*slot,i used this to refer to the car structure where array is created of all cars stored and *n as a type of count to keep track of cars stored
    char make[100], model[100];
    int year;
    float price;
    int mileage;
    printf("\nnew entry:\n");
    printf("enter manufacturer: \n");
    scanf("%s",make);
    printf("enter model:\n");
    scanf("%s",model);
    model[strlen(model)-1]='\0';
    printf("enter year registered:\n");
    scanf(" %d",&year);
    printf("enter price:\n");
    scanf(" %f",&price);
    printf("enter mileage:\n");
    scanf(" %d",&mileage);
    //assigning into structure data types
    strcpy(slot[*n].make,make);
    strcpy(slot[*n].model,model);
    slot[*n].year=year;
    slot[*n].price=price;
    slot[*n].mileage=mileage;
    (*n)++;
    printf("\nentry created :D");
    /*
    slot[*n] to store on next free index in slot.
    */
}
//function to display list of cars avalaible
void list_Car(struct Car* slot,int n){
    if(n==0){
        printf("Sorry,No cars avalaible in slots as of now\n");
        return;
    }
    printf("\nFollowing is a list of avaliable cars:\n");
    for(int i=0;i<n;i++){
    printf("Car %d:\n",i+1);
    printf("make: %s\n",slot[i].make);
    printf("model: %s\n",slot[i].model);
    printf("year: %d\n",slot[i].year);
    printf("price: %.2f\n",slot[i].price);
    printf("mileage: %d\n",slot[i].mileage);
    }
}
int main(){
    struct Car slot[100];//slot is an arrayof car structure and in all functions i used pointer to poin tto this specific array which i created right now.
   	int n=0;
    int choice;
    do{
        printf("\nCar Dealership main menu\n");
        printf("i)add car\n");
        printf("ii)list of cars\n");
        printf("iii)quit\n");
        printf("choose option:\n");
        scanf("%d",&choice);

        switch ((choice))
        {
        case 1:
            addCar(slot,&n);
            break;
        case 2:
            list_Car(slot,n);
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