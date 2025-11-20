#include "myheaders.h"

// Mergesort - recursively divides input array until we get sub-arrays of size 1
void mergesort(long data[], long first, long last) {
    if (first < last) {  // i.e. array is of size 2 or larger
        long mid = (first + last) / 2;

        mergesort(data, first, mid);      // Sort the left half
        mergesort(data, mid + 1, last);   // Sort the right half

        merge(data, first, mid, last);    // Merge the sorted halves
    }
}

// Merge - merges left and right sub-arrays of the input array, in order
void merge(long d[], long first, long mid, long last) {
    long i1, i2, i3;
    long tmp[last - first + 1];  // Temporary array for merged result

    i1 = 0;  // Start index of tmp[]
    i2 = first;  // Start index of left sub-array (d[first..mid])
    i3 = mid + 1;  // Start index of right sub-array (d[mid+1..last])

    // While both left and right sub-arrays have elements
    while (i2 <= mid && i3 <= last) {
        if (d[i2] < d[i3]) {
            tmp[i1++] = d[i2++];
        } else {
            tmp[i1++] = d[i3++];
        }
    }

    // Copy remaining elements from the left sub-array if any
    while (i2 <= mid) {
        tmp[i1++] = d[i2++];
    }

    // Copy remaining elements from the right sub-array if any
    while (i3 <= last) {
        tmp[i1++] = d[i3++];
    }

    // Copy the merged result back into the original array
    for (i1 = 0; i1 < (last - first + 1); ++i1) {
        d[first + i1] = tmp[i1];
    }
}
