#include <stdio.h>

int main() {
    // Step 1: Declare array with extra capacity
    int arr[10] = {50, 20, 40, 10};

    int size = 4;        // Current number of elements
    int capacity = 10;   // Maximum capacity of array
    int injected = 0;    // Flag to ensure insertion happens only once

    // Step 2: Perform Insertion Sort
    for (int i = 1; i < size; i++) {

        // Step 3: Inject a new element during sorting (at i = 2)
        if (i == 2 && injected == 0 && size < capacity) {
            arr[size] = 30;  // Add new element at the end
            size++;          // Increase size after insertion
            injected = 1;    // Mark as inserted
        }

        // Step 4: Standard Insertion Sort logic
        int key = arr[i];   // Element to be placed correctly
        int j = i - 1;

        // Shift elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place the key at correct position
        arr[j + 1] = key;
    }

    // Step 5: Print the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}