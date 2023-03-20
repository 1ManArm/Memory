#include <iostream>
#include <cstdlib>
#include <ctime>

void arr_add(int*& arr, int size, int num) {
	if (num <= 0)
		return;
	int* tmp = new int[size + num]{};
	for (int i = 0; i < size; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Динамические переменные
	/*int* pointer = new int; //Статическая память -> Динамическая память. Выделение динамической памяти размером в 4 байта.
	*pointer = 7; //запись значения в выделенную область памяти
	std::cout << "*pointer = " << *pointer << std::endl;

	delete pointer; //Очищение выделенной динамической памяти

	//*pointer = 100; //Ошибка

	pointer = new int;
	*pointer = 15;
	std::cout << "*pointer = " << *pointer << std::endl;

	delete pointer;*/

	//Динамические массивы
	/*int d_size;
	std::cout << "Введите длину массива -> ";
	std::cin >> d_size;

	int* d_arr = new int[d_size];
	std::cout << "Ввод данных в массив:\n";
	for (int i = 0; i < d_size; i++) {
		std::cout << "Введите " << i + 1 << "-й элемент -> ";
		std::cin >> d_arr[i];
	}
	std::cout << "Получившийся массив:\n[";
	for (int i = 0; i < d_size; i++) {
		std::cout << d_arr[i] << ", ";
	}
	std::cout << "\b\b]\n";

	delete[] d_arr;*/

	//Двумерные динамические массивы
	/*int rows, cols;
	std::cout << "Введите высоту массива -> ";
	std::cin >> rows;
	std::cout << "Введите ширину массива -> ";
	std::cin >> cols;
	
	//int* mx = new int[rows][cols]; //Ошибка
	int** mx = new int* [rows];
	for (int i = 0; i < rows; i++)
		mx[i] = new int[cols];
	
	//Использование массива
	mx[0][0] = 10;

	//Использование массива
	for (int i = 0; i < rows; i++)
		delete[] mx[i];
	delete[] mx;*/

	//Задача 1. Увеличение массива
	int d_size1;
	std::cout << "Задача 1.\nВведите длину массива -> ";
	std::cin >> d_size1;

	int* d_arr1 = new int[d_size1];
	srand(time(nullptr));
	std::cout << "Массив:\n";
	for (int i = 0; i < d_size1; i++) {
		d_arr1[i] = rand() % 10 + 1; //[1..10]
		std::cout << d_arr1[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "Количество дополнительных элементов -> ";
	std::cin >> n;
	arr_add(d_arr1, d_size1, n);
	d_size1 += n;
	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < d_size1; i++)
		std::cout << d_arr1[i] << ' ';
	std::cout << std::endl;

	return 0;
}