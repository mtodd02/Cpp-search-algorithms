#include "myheaders.h"
#include <algorithm>
//#include "testinput.txt"

//GWEN BLOESCH
// Your BSort function(s) go here

void selectionsort(long data[], int sz) {
	for (int i = 0,j,least; i < sz-1; i++) {
		for (j= i+1, least =i; j < sz; j++) 
			if (data[j] < data[least] ) {
				least = j;
			}
		if (i != least) {
			swap(data[least], data[i]);
		}
	}
}
