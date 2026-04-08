#include <stdio.h>
#define MAX_SIZE 100

// Function prototypes
void displayArray(int arr[], int size);
int insertSorted(int arr[], int *size, int capacity, int value);
void clearInputBuffer();

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, value;

    printf("=== Dynamic Sorted Insertion Demo ===\n");

    while (1) {
        printf("\n1. Insert value\n2. Display array\n3. Exit\nChoice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        switch (choice) {
            case 1:
                if (size == MAX_SIZE) {
                    printf("Array is full! Cannot insert more elements.\n");
                    break;
                }
                printf("Enter value to insert: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid number.\n");
                    clearInputBuffer();
                    break;
                }
                insertSorted(arr, &size, MAX_SIZE, value);
                printf("Inserted %d. Array is now sorted.\n", value);
                break;

            case 2:
                displayArray(arr, size);
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select 1-3.\n");
        }
    }
    return 0;
}

/**
 * Inserts a value into a sorted array, maintaining sorted order.
 * Returns 1 on success, 0 if array is full.
 */
int insertSorted(int arr[], int *size, int capacity, int value) {
    if (*size >= capacity) return 0;

    int i = *size - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
    (*size)++;
    return 1;
}

/**
 * Prints the current array contents.
 */
void displayArray(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Current sorted array (%d elements): ", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * Clears the input buffer after a failed scanf.
 */
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
