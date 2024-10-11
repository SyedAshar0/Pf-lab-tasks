#include <stdio.h>

int main() {
    int arr[30];
    int max;
    int min;
    int i;

    printf("Enter 30 numbers:\n");
    for (i = 0; i < 30; i++) {
        printf("number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    max =arr[0];
    min=arr[0];

    
    for (i = 1; i < 30; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

   
    printf("Max number is: %d\n", max);
    printf("Min number is: %d\n", min);

    return 0;
}

