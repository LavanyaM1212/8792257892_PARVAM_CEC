//sort an array in odd index places
#include <iostream>
#include <vector>
#include <algorithm>

void sortOddIndex(int arr[], int size){
    std::vector<int> oddIndexElements;
    for (int i = 1; i < size; i += 2) {
        oddIndexElements.push_back(arr[i]);
    }

    std::sort(oddIndexElements.begin(), oddIndexElements.end());

    int index = 0;
    for (int i = 1; i < size; i += 2) {
        arr[i] = oddIndexElements[index++];
    }
}

int main() {
    int arr[] = {10, 3, 15, 7, 8, 2, 20, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sortOddIndex(arr, size);

    std::cout << "Array after sorting odd index places: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

