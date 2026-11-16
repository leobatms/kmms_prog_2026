#include "sortings.hpp"

void biv::my_sort(int* const arr, const int size) {
	bool is_swapped;
	int i = 0;
	
	do {
		is_swapped = false;
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				is_swapped = true;
			}
		}
		i++;
	} while (is_swapped);
}
