#include <iostream>

const int MAX_SIZE = 100;

void my_sort(int* arr, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;

        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void print_array(const char* message, const int* arr, const int size) {
    std::cout << message << "\n[ ";

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << "]\n";
}

int main() {
    int size = 0;

    std::cout << "Введите размер массива (от 1 до "
              << MAX_SIZE << "): ";

    if (!(std::cin >> size)) {
        std::cout << "Ошибка: нужно ввести целое число.\n";
        return 1;
    }

    if (size < 1 || size > MAX_SIZE) {
        std::cout << "Ошибка: размер должен быть от 1 до "
                  << MAX_SIZE << ".\n";
        return 1;
    }

    int arr[MAX_SIZE];

    std::cout << "Введите " << size << " целых чисел:\n";

    for (int i = 0; i < size; ++i) {
        if (!(std::cin >> arr[i])) {
            std::cout << "Ошибка: элемент массива должен быть целым числом.\n";
            return 1;
        }
    }

    print_array("Исходный массив:", arr, size);

    my_sort(arr, size);

    print_array("Массив после сортировки:", arr, size);

    return 0;
}