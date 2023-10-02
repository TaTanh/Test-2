#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int xA, yA, xB, yB, xC, yC;
	cin>> xA>> yA>> xB>> yB>> xC >> yC;
	float a, b, c;
	a = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));
	b = sqrt(pow((xC - xA), 2) + pow((yC - yA), 2));
	c = sqrt(pow((xC - xB), 2) + pow((yC - yB), 2));
	if (a + b > c && a + c > b && b + c > a)
		cout << "la tam giac";
	else
		cout << " ko phai la tam giac";
	return 0;
}