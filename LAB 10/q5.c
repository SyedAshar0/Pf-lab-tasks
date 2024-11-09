#include<Stdio.h>
int sum(int n){
    if(n==0){
        return 0;//set a base case such that if our digit can no longer produce remainder then the digit is 0 and so exit...
    }else{
        return (n%10)+sum(n/10);
    }   
}



int main(){
	int n;
    printf("input number:");
    scanf("%d",&n);
    printf("sum is : %d",sum(n));
return 0;	
}
/*(123%10)+sum(123/10)-->3+sum(12)
                         3+((12%10)+(12/10))-->3+2+sum(1)
                                               5+((sum%10)+(sum/10))-->5+1+sum(0)
                                                                       6+0--->6<----sum  
*/
