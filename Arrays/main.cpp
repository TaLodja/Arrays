#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5; // ������ �������
	double arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� " << i << "-� ������� �������: "; cin >> arr[i];
	}
	cout << endl;
	double sum = 0;
	double MIN = arr[0];
	double MAX = arr[0];
	cout << "������ � ������ �������" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
		sum += arr[i];
		if (arr[i] < MIN) MIN = arr[i];
		if (arr[i] > MAX) MAX = arr[i];
	}
	cout << endl;
	cout << "������ � �������� �������" << endl;
	for (int i = SIZE - 1; i >= 0; i--) cout << arr[i] << "\t";
	cout << endl;
	cout << "����� ��������� ������: " << sum << endl;
	cout << "C������ �������������� ��������� �������: " << sum / SIZE << endl;
	cout << "����������� �������� � �������: " << MIN << endl;
	cout << "������������ �������� � �������: " << MAX << endl;
}
