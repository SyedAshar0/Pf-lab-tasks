#include<stdio.h>
struct rectangle{
    float length;
    float width;
};

float calc_area(struct rectangle r){
    float area;
    area =r.width * r.length;
    return area;
}
float calc_perimeter(struct rectangle r){
    float perimeter;
    perimeter=(2*r.length)+ (2*r.length);
    return perimeter;
}
int check(struct rectangle r){
    if(r.length>0.0 && r.length<20.0 && r.width>0.0 && r.width<20.0){
		return 1;
	}else
     return 0;
}
int main(){
    struct rectangle r;
    printf("enter length:");
    scanf("%f",&r.length);
    printf("enter width:");
    scanf("%f",&r.width);
    if(check(r)==1){
		printf("Length and width are within range\n");
	}else printf("Length and width are not within range\n");
	float area=calc_area(r);
	printf("Area is %.2f \n",area);
	float perimeter=calc_perimeter(r);
	printf("Perimeter is %.2f \n",perimeter);
    
    
    
    
    
    return 0;

}