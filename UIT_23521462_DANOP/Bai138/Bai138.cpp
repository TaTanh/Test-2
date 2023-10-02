#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int f;
	if (x >= 0)
	{
		if (x <= 1)
			f = (5 * x - 7);
		else
			f = (2 * pow(x, 3) + 5 * pow(x, 2) - 8 * x + 3);
	}
	else
		f = (-2) * pow(x, 3) + 6 * x + 9;
	cout << setprecision(3) << "f la " << f << endl;
	return 0;
}