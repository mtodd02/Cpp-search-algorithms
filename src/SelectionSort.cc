#include "myheaders.h"
//#include "testinput.txt"

//GWEN BLOESCH
// Your BSort function(s) go here
template<class T>
void selectionsort(T data[], int n) {
	for (int i = 0,j,least; i < n-1; i++) {
		for (j= i+1, least =i; j < n; j++) 
			if (data[j] < data[least] ) {
				least = j;
			}
		if (i != least) {
			swap(data[least], data[i]);
		}
	}
}
