//sort an array in even idex places
#include <iostream>
#include <vector>
#include <algorithm>

void sortEvenIndices(int arr[], int n) {
    std::vector<int> evenIndexElements;
    for (int i = 0; i < n; i += 2) {
        evenIndexElements.push_back(arr[i]);
    }

    std::sort(evenIndexElements.begin(), evenIndexElements.end());

    int j = 0;
    for (int i = 0; i < n; i += 2) {
        arr[i] = evenIndexElements[j++];
    }
}

int main() {
    int arr[] = {9, 3, 8, 7, 5, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sortEvenIndices(arr, n);

    std::cout << "Array after sorting even indices: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
