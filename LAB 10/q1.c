#include<Stdio.h>
#include<String.h>
void reverse(char *string){//pointer to allocate new char easily.
	if(*string!='\0')//this continues a condition till string goes to null set.
	 reverse(string+1);//pushes the net char of string to the recursive func
	 printf("%c",*string);
}



int main(){
	char string[100];
	printf("enter sentence:");
	fgets(string,100,stdin);
	reverse(string);
return 0;	
}


/*i.e-->reverse("ecin");
on first call;since string condition is till it goes to null set and rn its not at null set thus it calls reverse("ecin") and queues e to be printed and this continues
each time with new cahr due to (string+1)... */ 