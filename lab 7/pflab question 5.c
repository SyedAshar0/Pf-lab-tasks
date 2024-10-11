#include <stdio.h>
int main() {
    int arr[20];
    int i;
    printf("Enter 20 numbers:\n");
    for (i = 0; i < 20; i++) {
        printf(" number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("reverse array is this:\n");
    for (i = 19; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

    return 0;
}

