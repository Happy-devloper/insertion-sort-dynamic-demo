#include <stdio.h>

int main() {
    int arr[10] = {50, 20, 40, 10};
    int size = 4, capacity = 10, injected = 0, newItem;

    for (int i = 1; i < size; i++) {

        // Insert user input during sorting
        if (i == 2 && !injected && size < capacity) {
            printf("Enter value to insert: ");
            scanf("%d", &newItem);

            arr[size++] = newItem;
            injected = 1;
        }

        // Insertion Sort logic
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}