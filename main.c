#include <stdio.h>

// Function declaration
// int add(int a, int b);
// Function definition
int add(int a, int b) {
    return a + b;  // Returning the sum of two integers
}


// Main function
int main() {
    int num1 = 5, num2 = 3;
    int sum = add(num1, num2); // Calling the function
    printf("Sum: %d\n", sum);  // Output: Sum: 8
    return 0;
}

