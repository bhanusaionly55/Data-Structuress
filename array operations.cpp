#include <stdio.h>
void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insertElement(int arr[], int *size, int index, int element) {
    if (index < 0 || index > *size) {
        printf("Invalid index for insertion.\n");
        return *size;
    }
    for (int i = *size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    (*size)++;

    return *size;
}
int deleteElement(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index for deletion.\n");
        return *size;
    }
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    return *size;
}
int main() {
    int arr[100], size = 0;
    int choice, index, element;
    printf("Array Operations:\n");
    do {
        printf("\n1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the index where you want to insert the element: ");
                scanf("%d", &index);
                printf("Enter the element to be inserted: ");
                scanf("%d", &element);
                size = insertElement(arr, &size, index, element);
                break;
            case 2:
                printf("Enter the index of the element to be deleted: ");
                scanf("%d", &index);
                size = deleteElement(arr, &size, index);
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

}

