#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "s la " << s;
	return 0;
}