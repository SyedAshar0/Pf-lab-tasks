#include <stdio.h>
void pattern(int N) {
    int size = 2 * N - 1; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            printf(". ");
        }
        for (int k = 0; k <= i; k++) {
            printf("O ");
        }
        printf("\n");
    }
    for (int i = N - 2; i >= 0; i--) {
        for (int j = 0; j < N - i - 1; j++) {
            printf(". ");
        }
        for (int k = 0; k <= i; k++) {
            printf("O ");
        }
        printf("\n");
    }
}
int main() {
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);
    pattern(N);
    return 0;
}