#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n;
	cout << "Исходный массив" << endl;
	for (int i = 0; i < SIZE; i++) cout << arr[i] << "\t";
	cout << endl;
	cout << "Укажите количество сдвигов: "; cin >> n;
	cout << "Массив после циклического сдвига " << n << " раз" << endl;
	for (int i = n; i < SIZE; i++) cout << arr[i] << "\t";
	for (int i = 0; i < n; i++) cout << arr[i] << "\t";
	cout << endl;
}