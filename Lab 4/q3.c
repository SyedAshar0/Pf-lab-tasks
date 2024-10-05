#include <stdio.h>

int main(){ 
  int newprice;
  int price;
  int amountsaved;
  printf("enter price of item");
  scanf("%d",&price);
  if(price <=1500){
     printf("disount is 7 percent\n ");
     newprice = price -(price * 7 /100);
     printf("your price after discount is: %d\n",newprice);
     amountsaved = price * 7 /100;
     printf("your amountsaved is : %d\n",amountsaved);
  }else if(price>=1500 && price<=3000){
    printf("discount is 12 percent\n");
    newprice=price -(price * 12/100);
    printf("your price after discount is : %d\n",newprice);
    amountsaved = price*12/100 ;
    printf("your amountsaved is : %d\n",amountsaved);
  }else if(price>=3000 && price<=5000){
    printf("discount is 22 percent\n");
    newprice =price -(price * 22/100);
    printf("your price after discount is : %d\n",newprice);
    amountsaved=price * 22/100;
    printf("your amountsaved is : %d\n",amountsaved);
  }else if(price>=5000){
    printf("discount is 30 percent\n");
    newprice = price -(price * 30/100);
    printf("your price after discount is : %d\n",newprice);
    amountsaved=price * 30/100;
    printf("your amountsaved is : %d\n",amountsaved);
  }else
  printf("invalid input");
  

return 0;
}