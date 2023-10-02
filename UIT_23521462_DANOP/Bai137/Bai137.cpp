#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int f;
	if (x >= 5)
		f = 2 * pow(x, 2) + 5 * x + 9;
	else
		f = (-2) * pow(x, 2) + 4 * x - 9;
	cout << setprecision(3) << "f la " << f << endl;
	return 0;
}