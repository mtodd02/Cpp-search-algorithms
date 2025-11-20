#include <fstream>
#include <iostream>

using namespace std;

// Merge function to merge two sorted subarrays into a single sorted array
void merge(long data[], int left, int mid, int right) {
    // Find the size of the two subarrays to be merged
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays for the left and right subarrays
    long* leftArr = new long[n1];
    long* rightArr = new long[n2];

    // Copy data into temporary arrays leftArr[] and rightArr[]
    for (int i = 0; i < n1; i++) {
        leftArr[i] = data[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = data[mid + 1 + i];
    }

    // Merge the temporary arrays back into data[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            data[k] = leftArr[i];
            i++;
        } else {
            data[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr[], if any
    while (i < n1) {
        data[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr[], if any
    while (j < n2) {
        data[k] = rightArr[j];
        j++;
        k++;
    }

    // Clean up the temporary arrays
    delete[] leftArr;
    delete[] rightArr;
}

// Merge Sort function that takes the data array and its size (sz)
void mergeSort(long data[], int sz) {
    // If sz is 1 or less, the array is already sorted
    if (sz > 1) {
        // Calculate the middle index based on sz
        int mid = sz / 2;

        // Recursively sort the left half
        mergeSort(data, mid);

        // Recursively sort the right half
        mergeSort(data + mid, sz - mid);

        // Merge the sorted halves
        merge(data, 0, mid - 1, sz - 1);
    }
}
