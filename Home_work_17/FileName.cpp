#include <iostream>
#include <cmath> //функция power доступна при подключении этой библиотеки (Задача 3)

double mean(double num1, double num2) { // Задача 1.
	return (num1 + num2) / 2.0;
}


double mean_arr(int arr[], const int length) { // Задача 2.
	double sum = 0.0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
}
	return (sum / length);
}


void powers(int N, int M) { // Задача 3.
	for (int i = 0; i <= M; i++) {
		std::cout << N << " в степени " << i << " равно " << pow(N, i) << std::endl;
	}
}


void positive_arr(int arr[], int length) { // Задача 4.
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			arr[i] = -arr[i]; // заменяем отрицательное значение на положительное
		}
	}
}




int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1.

	double num1 = 15;
	double num2 = 36;
	double res = mean(num1, num2);
	std::cout << " Средшнее арифмитическое " << num1 << " и " << num2 << " = " << res << std::endl;
	

	// Задача 2.

	const int size = 5;
	int arr[size]{ 7, 15, 42, 105, -77 };
	
	
	double res = mean_arr(arr, size);
	std::cout << " Средннее арифмитическое " << res << std::endl;
	

	// Задача 3.

	int N, M;
	std::cout << " Введите число N -> ";
	std::cin >> N;
	std::cout << " Введите степень M -> ";
	std::cin >> M;
	powers(N, M);
	

	// Задача 4.

	const int size1 = 5;
	int arr1[size1]{ 10, -6, 0, 15, -38 };
	std::cout << "Исходный массив: ";
	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	positive_arr(arr1, size1);

	std::cout << "Массив с заменой на положительные значения: ";
	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;



	return 0;

}
