#include <stdio.h>

/**
 * @brief Calculates the sum of numbers from 1 to n
 * 
 * @param n The upper limit of the sum
 * @return int The sum of numbers from 1 to n
 */
int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

/** 
 * @brief Prints "Hello, World2!" to the console
 * 
 * @return int Returns 0 on successful execution
 */
int main() {
    printf("Hello, World2!\n");
    int result = calculateSum(100);
    printf("Sum of numbers from 1 to 100: %d\n", result);
    return 0;
}