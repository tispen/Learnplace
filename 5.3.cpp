#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int A,B,C,AC,BC,P;
	//Ввод координат точек
	cin >> A >> B << C;
	AC = C-A;
	cout << AC;
	BC = C-B;
	cout << BC;
	P = AC*BC;
	//Вывод произведения
	cout << P;
}