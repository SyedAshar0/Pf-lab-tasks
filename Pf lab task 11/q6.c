#include<stdio.h>
struct invoice{
    char part_num[40];
    char part_desc[40];
    int quantity;
    float price;
};
void validate(struct invoice *Inv){//Inv is asically a tempo variable for invoice n
    if(Inv->quantity<0){
    Inv->quantity=0;
}
if(Inv->price<0){
    Inv->price=0.0;
}
}
int main(){
    float amount1;
    float amount2;
    float amount3;
struct invoice Invoice1={"0582","this is a door knob",6,50.0};
struct invoice Invoice2={"Hvn67","this is a door handle",4,-100.0};
struct invoice Invoice3={"qwcvg","this is a kitchen door",-12,509.0};
printf("\n<-----Invoice1----->\n");
printf("Part number : %s\n",Invoice1.part_num);
printf("Part description : %s\n",Invoice1.part_desc);
printf("quantity : %d\n",Invoice1.quantity);
printf("price : %f\n",Invoice1.price);
validate(&Invoice2);
amount1=Invoice1.quantity * Invoice1.price;
printf("amount :%f",amount1);
printf("\n<-----Invoice2----->\n");
printf("Part number : %s\n",Invoice2.part_num);
printf("Part description : %s\n",Invoice2.part_desc);
printf("quantity : %d\n",Invoice2.quantity);
printf("price : %f\n",Invoice2.price);
validate(&Invoice3);
amount2=Invoice2.quantity * Invoice2.price;
printf("amount :%f",amount2);
printf("\n<-----Invoice3----->\n");
printf("Part number : %s\n",Invoice3.part_num);
printf("Part description : %s\n",Invoice3.part_desc);
printf("quantity : %d\n",Invoice3.quantity);
printf("price : %f\n",Invoice3.price);
validate(&Invoice1);
amount3=Invoice3.quantity * Invoice3.price;
printf("amount :%f",amount3);
    return 0;
}
//whne i passed it in main func it didnt work because it only affected my local copy only which had no part itself meanwhie for my validate function ti worjed because i passed its address ...