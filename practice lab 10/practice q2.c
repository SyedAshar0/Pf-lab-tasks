#include <stdio.h>

void calculate(int length, int pieces, int n){
if(n < 1){
printf("pieces: %d", pieces);
return;
}else{
   pieces += (length/n);
   calculate(length % n, pieces, n - 1);
    }
}
int main()
{
int length;
printf("Enter Length: ");
scanf("%d", &length);
int pieces = 0;
int n = 3;
calculate(length, pieces, n);

return 0;
}
