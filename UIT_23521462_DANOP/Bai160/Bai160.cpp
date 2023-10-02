#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dt = n;
	while (dt >= 10)
		dt = dt / 10;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == dt)
			dem = dem + 1;
		t = t / 10;
	}
	cout << dem;
	return 0;
}