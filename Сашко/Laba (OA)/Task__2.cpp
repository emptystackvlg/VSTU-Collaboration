#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int x, y, R, double_R;

	cout << " Введите радиус окружности R\n\n > ";
	cin >> R;
	double_R = R * 2;	// радиус большей окружности
	cout << " Введите координату X\n\n > ";
	cin >> x;
	cout << " Введите координату Y\n\n > ";
	cin >> y;

	//если точка лежит в верхней части малой окружности, правее оси y 
	if (pow(x, 2) + pow(y, 2) <= pow(R, 2) && x >= 0 && y >= 0) cout << "Точка попадает в заданную область №1";

	//если точка лежит в верхней части графика левее оси y и попадает в обе окружности 
	else if (pow(x, 2) + pow(y, 2) <= pow(double_R, 2) && x <= 0 && y >= 0) cout << "\nТочка попадает в заданную область №2";

	//если точка лежит в нижней части большей окружности правее оси y 
	else if (pow(x, 2) + pow(y, 2) <= pow(double_R, 2) && x >= 0 && y <= 0 && pow(x, 2) + pow(y, 2) > pow(R, 2)) cout << "\nТочка попадает в заданную область №3";

	//если точка лежит в верхней части графика правее оси y и выше большей окружности
	else if (pow(x, 2) + pow(y, 2) > pow(double_R, 2) && y >= double_R && x >= double_R) cout << "\nТочка попадает в заданную область №4";

	//если точка лежит в нижней части графика левее оси y и ниже большей окружности
	else if ((pow(x, 2) + pow(y, 2) > pow(double_R, 2) && y <= -double_R && x <= -double_R)) cout << "\nТочка попадает в заданную область №5";

	//если точка не лежит ни в одной из заданных ообластей
	else cout << "\nТочка не попадает ни в одну из заданных областей";

	system("pause");
	return 0;

}