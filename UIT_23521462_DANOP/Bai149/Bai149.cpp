#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	float m = abs(a);
	float n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		n = n - m;
	}
	float ucln = m + n;
	cout << ucln;
	return 0;
}