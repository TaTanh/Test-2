#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float a, b, c,x1,x2,x;
	cin >> a >> b >> c;
	float denta = pow(b, 2) - 4 * a * c;
	if (denta <= 0)
	{
		if (denta == 0)
			x = (-b) / 2 * a;
		else
			cout << "VN";
	}
	else
		x1 = (-b + sqrt(denta)) / 2 * a;
		x2 = (-b - sqrt(denta)) / 2 * a;
		cout <<"x1 la "<< x1 <<" " <<"x2 la " << x2;
	return 0;
}