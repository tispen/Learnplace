#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x1,x2,y1,y2,r;
	//Ввод координат первой точки
	cin >> x1 >> y1;
	//Ввод координат второй точки
	cin >> x2 >> y2;
	r = sqrt(pow((x2-x1),2)-pow((y2-y1),2));
	//Вывод расстояния между ними
	cout << r;
	return 0;
}