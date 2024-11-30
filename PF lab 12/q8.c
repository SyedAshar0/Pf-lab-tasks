#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct transport{
    int *fee;
    int num_point;
};
void initialize(struct transport * Point){
printf("enter total number of points in the facility\n");
scanf("%d",&Point->num_point);
Point->fee=(int*)malloc(Point->num_point*sizeof(int));//we allocated memory for each fee by varying with number of points thus...
    for(int i=0;i<Point->num_point;i++){
        printf("enter fee for point %d:\n",i+1);
        scanf("%d",&Point->fee[i]);
    }
}
int sum(struct transport * Point){
    float total =0;
    for(int i=0;i<Point->num_point;i++){
        total+=Point->fee[i];
    }
    return total;
}
int main(){
struct transport * Point=(struct transport*)malloc(sizeof(struct transport));//thus while allocating memory for struct we dont need the num_points since fee is allocated alraedy with number of points hence we can just allocate space on the basis of the structure
initialize(Point);
float result=sum(Point);
printf("total fee for facility :$ %.2f",result);
free(Point->fee);
free(Point);
  return 0;
}
//unlike q1 where we knew we had to create memory for certain integer of studets ,eanwhile here we know its just one facility of transport which has multiple points for their fee
//hence i allocated structure by its size so basically just space but for point fee i dynamically allocated to accomodate by num of points the facility has