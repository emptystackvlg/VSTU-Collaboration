﻿#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int const size = 100;
	int A[size];
	int n;
	int i, k=1;
	srand(time(NULL));
	cout << "\nВведите значение n" << endl;
	cin >> n;
	while (n > 100)
	{
		cout << "\nРазмерность массива превышает 100\nВведите значение n" << endl;
		cin >> n;
	}
	cout << "\nВывод введенного массива" << endl;
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << "\t";
	}
	cout << "\nПоиск первого четного элемента" << endl;
	for (i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
		{
			k = A[i];
			i = n;
		}
	}
	cout << "\n Вывод измененного массива" << endl;
	for (i = k; i < n; i++)
	{
		A[i] *= k;
		
	}
	for (i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}


}