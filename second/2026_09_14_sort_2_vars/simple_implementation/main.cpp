#include <iostream>

void my_sort(int *arr, const int size);

int main() {
	int size;

	std::cout << "Введите количество элементов массива: ";
	std::cin >> size;

	int* arr = new int[size];

	std::cout << "Введите элементы массива:\n";

	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	std::cout << "Первоначальный массив: ";

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";

	my_sort(arr, size);

	std::cout << "Массив после сортировки: ";

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";

	delete[] arr;
	return 0;
}

void my_sort(int *arr, const int size) {
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
