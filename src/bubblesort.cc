<<<<<<< HEAD
//void bubblesort(T data[], int n) {
	//for (int i = 0; i < n-1; i++)
		//for (int j = n-1; j > i; --j)
			//if (data[j] < data[j-1])
				//swap(data[j],data[j-1]);
=======
#include "myheaders.h"
using namespace std;
#include <fstream>
//michael todd
//bubble

void bubblesort(long data[], int n) {
	for (int i = 0; i < n-1; i++)
		for (int j = n-1; j > i; --j)
			if (data[j] < data[j-1])
				swap(data[j],data[j-1]);
>>>>>>> branch 'main' of git@github.com:mtodd02/Cpp-search-algorithms.git
}
