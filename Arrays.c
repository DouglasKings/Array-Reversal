#include <stdio.h>

// Declares the function prototype for reverseArray
// void means the function doesn't return anything, 
// int arr[] is the array of integers to be reversed,
// int size is the number of elements in the array
void reverseArray(int arr[], int size);

int main() {
    // Initializing an array of integers
    int myArray[] = {1, 2, 3, 4, 5};

    // Calculates the size of the array by dividing the total size of the array by the size of one element
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Calls the reverseArray function to reverse the order of elements in the array
    reverseArray(myArray, size);

    // Prints the reversed array to the console
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]); // Prints each element of the reversed array
    }

    return 0; // Returns 0 indicates successful execution of the program
}

// Implements the reverseArray function
// This function reverses the order of elements in the given array
void reverseArray(int arr[], int size) {
    int start = 0; // Pointer to the start of the array
    int end = size - 1; // Pointer to the end of the array

    // Continues swapping elements until the start pointer meets the end pointer
    while (start < end) {
        // Swaps the elements at the start and end positions
        int temp = arr[start]; // Temporary variable to hold the value at the start position
        arr[start] = arr[end]; // Assigns the value at the end position to the start position
        arr[end] = temp; // Assigns the value stored in the temporary variable to the end position

        // Increments the start pointer and decrement the end pointer
        // This moves the pointers towards the center of the array
        start++;
        end--;
    }
}
