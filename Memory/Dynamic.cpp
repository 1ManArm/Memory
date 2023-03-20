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

	//������������ ����������
	/*int* pointer = new int; //����������� ������ -> ������������ ������. ��������� ������������ ������ �������� � 4 �����.
	*pointer = 7; //������ �������� � ���������� ������� ������
	std::cout << "*pointer = " << *pointer << std::endl;

	delete pointer; //�������� ���������� ������������ ������

	//*pointer = 100; //������

	pointer = new int;
	*pointer = 15;
	std::cout << "*pointer = " << *pointer << std::endl;

	delete pointer;*/

	//������������ �������
	/*int d_size;
	std::cout << "������� ����� ������� -> ";
	std::cin >> d_size;

	int* d_arr = new int[d_size];
	std::cout << "���� ������ � ������:\n";
	for (int i = 0; i < d_size; i++) {
		std::cout << "������� " << i + 1 << "-� ������� -> ";
		std::cin >> d_arr[i];
	}
	std::cout << "������������ ������:\n[";
	for (int i = 0; i < d_size; i++) {
		std::cout << d_arr[i] << ", ";
	}
	std::cout << "\b\b]\n";

	delete[] d_arr;*/

	//��������� ������������ �������
	/*int rows, cols;
	std::cout << "������� ������ ������� -> ";
	std::cin >> rows;
	std::cout << "������� ������ ������� -> ";
	std::cin >> cols;
	
	//int* mx = new int[rows][cols]; //������
	int** mx = new int* [rows];
	for (int i = 0; i < rows; i++)
		mx[i] = new int[cols];
	
	//������������� �������
	mx[0][0] = 10;

	//������������� �������
	for (int i = 0; i < rows; i++)
		delete[] mx[i];
	delete[] mx;*/

	//������ 1. ���������� �������
	int d_size1;
	std::cout << "������ 1.\n������� ����� ������� -> ";
	std::cin >> d_size1;

	int* d_arr1 = new int[d_size1];
	srand(time(nullptr));
	std::cout << "������:\n";
	for (int i = 0; i < d_size1; i++) {
		d_arr1[i] = rand() % 10 + 1; //[1..10]
		std::cout << d_arr1[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "���������� �������������� ��������� -> ";
	std::cin >> n;
	arr_add(d_arr1, d_size1, n);
	d_size1 += n;
	std::cout << "�������� ������:\n";
	for (int i = 0; i < d_size1; i++)
		std::cout << d_arr1[i] << ' ';
	std::cout << std::endl;

	return 0;
}