#include "myheaders.h"
#include ""

// Your Insertion Sort function(s) goes here ..

template<class T>
	void insertionsort(T data[], int n) {
		for (int i = 1,j; i < n; i++) {
			T tmp = data[i];
		for (j = i; j > 0 && tmp < data[j-1]; j--)
			data[j] = data[j-1];
			data[j] = tmp;
		}
	}


