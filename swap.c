#include "so"

void swap_and_print(int arr[], int i, int j) {
    /* Swaps the elements at indices i and j in the array arr,
       prints the final array, and returns the modified array. */

    // Temporary variable to hold the first element
    int temp = arr[i];

    // Swap the elements
    arr[i] = arr[j];
    arr[j] = temp;

    // Print the final array
    printf("Swapped array: ");
    for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
}
