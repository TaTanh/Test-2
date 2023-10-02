#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float a, b;
	cin >> a >> b;
	float x;
	if (a == 0)
	{
		if (b == 0)
			cout << "VSN";
		else
			cout << "VN";
	}
	else
		x = (-b) / a;
	cout << "x la " << x;
	return 0;
}