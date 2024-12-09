#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};  // Example array
    int odd_sum = 0, even_sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }

    printf("Sum of odd numbers: %d\n", odd_sum);
    printf("Sum of even numbers: %d\n", even_sum);

    return 0;
}