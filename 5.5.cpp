#include <iostream>
#include <math.h>
using namespace std;
double side(double x1,double x2,double y1,double y2){
	return sqrt(pow((x2-x1),2)-pow((y2-y1),2));
}
int main()
{
	double x1,x2,x3,y1,y2,y3,s,p;
	//Ввод координат первой точки
	cin >> x1 >> y1;
	//Ввод координат второй точки
	cin >> x2 >> y2;
	//Ввод координат третьей точки
	cin >> x3 >> y3;
	double a=side(x1,x2,y1,y2);
	double b=side(x2,x3,y2,y3);
	double c=side(x1,x3,y1,y3);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	//Вывод периметра
	cout << (p*2);
	//Вывод площади
	cout << s;
	return 0;
}