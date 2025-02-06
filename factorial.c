#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    printf("done!!");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
