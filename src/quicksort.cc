//quick sort 
//gb
#include "myheaders.h"

static int quicksort_r(long data[], int first, int last) {
	long lower = first+1, upper = last;
	swap(data[first],data[(first+last)/2]);
	long bound = data[first];
	while (lower <= upper) {
		while (bound > data[lower])
			lower++;
		while (bound < data[upper])
			upper--;
		if (lower < upper)
			swap(data[lower++],data[upper--]);
		else lower++;
	}
	swap(data[upper],data[first]);
	if (first < upper-1)
		quicksort_r (data,first,upper-1);
	if (upper+1 < last)
		quicksort_r (data,upper+1,last);
}

void quicksort(long data[], int sz) {
	int i, max;
	if (sz < 2)
		return;
	for (i = 1, max = 0; i < sz; i++) // find the largest
		if (data[max] < data[i]) // element and put it
			max = i; // at the end of data[];
	swap(data[sz-1], data[max]); // largest el is now in its
	quicksort_r(data, 0, sz-2); // final position;
}