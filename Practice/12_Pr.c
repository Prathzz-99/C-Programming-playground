#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= n; i++)
    { // Check divisors up to the square root of n
        if (n % i == 0)
            return 0; // Not prime if divisible by i
    }
    return 1; // Prime
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
