#include <iostream>


double mean(double num1, double num2) { // ������ 1.
	return (num1 + num2) / 2.0;
}


double mean_arr(int arr[], const int length) { // ������ 2.
	double sum = 0.0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
}
	return (sum / length);
}








int main() {
	setlocale(LC_ALL, "Russian");

	// ������ 1.

	/*double num1 = 15;
	double num2 = 36;
	double res = mean(num1, num2);
	std::cout << " �������� �������������� " << num1 << " � " << num2 << " = " << res << std::endl;
	*/


	const int size = 5;
	int arr[size]{ 7, 15, 42, 105, -77 };
	
	
	double res = mean_arr(arr, size);
	std::cout << " �������� �������������� " << res << std::endl;




	return 0;

}