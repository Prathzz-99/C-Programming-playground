#include <stdio.h>

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n == 0) return 0; // Base case: Fibonacci(0) = 0
    if (n == 1) return 1; // Base case: Fibonacci(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive formula
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
