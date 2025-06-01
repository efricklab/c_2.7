#include <stdio.h>

// Function declarations
int addTwoNumbers(int a, int b);
int multiplyTwoNumbers(int a, int b);

int main() {
    int num1, num2, sum, product;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = addTwoNumbers(num1, num2);
    product = multiplyTwoNumbers(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}

// Function definitions
int addTwoNumbers(int a, int b) {
    return a + b;
}

int multiplyTwoNumbers(int a, int b) {
    return a * b;
}
