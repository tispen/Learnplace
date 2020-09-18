#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x1,x2,y1,y2,s,p;
	//Ввод координат первой точки
	cin >> x1 >> y1;
	//Ввод координат второй точки
	cin >> x2 >> y2;
	//Подсчет площади
	s = (x2-x1)*(y2-y1);
	cout << s;
	//Подсчет периметра
	p = (2*(x2-x1)+(y2-y1));
	cout << p;
	return 0;
}