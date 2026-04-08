#include <stdio.h>

int main() {
    int arr[100], size = 0, capacity = 100;
    int choice, value;

    while (1) {
        printf("\n1. Insert\n2. Display\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (size == capacity) {
                printf("Array full!\n");
                continue;
            }

            printf("Enter value: ");
            scanf("%d", &value);

            // Insert in sorted position
            int i = size - 1;
            while (i >= 0 && arr[i] > value) {
                arr[i + 1] = arr[i];
                i--;
            }
            arr[i + 1] = value;
            size++;
        }

        else if (choice == 2) {
            printf("Array: ");
            for (int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");
        }

        else if (choice == 3) {
            break;
        }
    }

    return 0;
}