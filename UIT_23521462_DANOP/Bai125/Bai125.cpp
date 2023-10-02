#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float a, b;
	cin >> a >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << setprecision(3) << "a la " << a << endl;
	cout << setprecision(3) << "b la " << b << endl;
	return 0;
}