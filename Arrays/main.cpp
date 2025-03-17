#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5; // размер массива
	double arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Введите " << i << "-й элемент массива: "; cin >> arr[i];
	}
	cout << endl;
	double sum = 0;
	double MIN = arr[0];
	double MAX = arr[0];
	cout << "Массив в прямом порядке" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
		sum += arr[i];
		if (arr[i] < MIN) MIN = arr[i];
		if (arr[i] > MAX) MAX = arr[i];
	}
	cout << endl;
	cout << "Массив в обратном порядке" << endl;
	for (int i = SIZE - 1; i >= 0; i--) cout << arr[i] << "\t";
	cout << endl;
	cout << "Сумма элементов масива: " << sum << endl;
	cout << "Cреднее арифметическое элементов массива: " << sum / SIZE << endl;
	cout << "Минимвльное значение в массиве: " << MIN << endl;
	cout << "Максимальное значение в массиве: " << MAX << endl;
}
