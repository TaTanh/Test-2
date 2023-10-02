#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		if (x == y && y == z)
			cout << "Deu";
		else
			if ((x * x == y * y + z * z) || (x * x + y * y == z * z) || (x * x + z * z == y * y))
			{
				if ((x == y) || (y == z) || (z == x))
					cout << "Vuong can";
				else
					cout << "Vuong";
			}
			else
			{
				if ((x == y) || (y == z) || (z == x))
					cout << "Can";
				else
					cout << "Thuong";
			}

	}
	else
		cout << "Ko";
	return 0;
}
