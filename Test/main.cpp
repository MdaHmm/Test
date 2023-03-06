#include <iostream>
#include <ctime>
#include <cstdlib>

template <typename T>
void fill_arr(T arr[], const int length) {
	srand(time(NULL));
	for (int i{}; i < length; i++)
		arr[i] = rand() % 100;
}

void print_arr(int arr[], const int length) {
	std::cout << "[";
	for (int i{}; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

template <typename T>
void clear_arr(T arr[], const int l, int num) {
	for (int i{}; i < l; i++)
		if (arr[i] == num)
			arr[i] = 0;	
}

int index_sum(int arr1[], int l1, int arr2[], int l2, int index) {
	int index_sum = 0;
	for(int i{}; i < l1; i++)
		for (int j{}; j < l2; j++) {
			if (i == index && j == index)
				index_sum = arr1[i] + arr2[j];
		}
	return index_sum;
}

template <typename T>
double mean_arr(T arr[], const int l) {
	int min = arr[0], max = arr[1];
	for (int i{}; i < l; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i{}; i < l; i++){
		if (arr[i] < min)
			min = arr[i];
	}	
	return (double)(min + max) / 2;
}

void prime_range(int a, int b) {
	
}
void permute_arr(int arr[], const int l) {
	for (int i{0}; i < l / 2; i++)
		std::swap(arr[i], arr[i + l / 2 + 1]);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n1, n2;

	// Задача 1. 

	const int size1 = 10;
	int arr1[size1];
	std::cout << "\n\n";
	std::cout << "Задача 1.\nИзначальный массив: ";
	fill_arr(arr1, size1);
	print_arr(arr1, size1);
	std::cout << "Выберите число из массива -> ";
	std::cin >> n1;
	clear_arr(arr1, size1, n1);
	print_arr(arr1, size1);
	

	// Задача 2.
	
	std::cout << "\nЗадача 2.\n";
	const int size2 = 10;
	int arr2[size2];
	fill_arr(arr2, size2);
	print_arr(arr2, size2);
	print_arr(arr1, size1);
	std::cout << "Выберите индекс ->";
	std::cin >> n2;
	std::cout << index_sum(arr2, size2, arr1, size1, n2);
	

	// Задача 3.
	
	std::cout << "\nЗадача 3.\n";
	const int s3 = 5;
	int arr3[s3];
	fill_arr(arr3, s3);
	print_arr(arr3, s3);
	std::cout << "\nСреднее арифметическое min и max = " << mean_arr(arr3, s3) << "\n";
	

	// Задача 4.
	//std::cout << "\n\n";
	//	prime_range(1, 10);
	
	// Задача 5.
	std::cout << "\n\nЗадача 5.\n\n";
	const int s5 = 5;
	int arr5[s5];
	fill_arr(arr5, s5);
	print_arr(arr5, s5);
	permute_arr(arr5, s5);
	print_arr(arr5, s5);





	
	return 0;
}