#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int lc = n % 10;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == lc)
			dem=dem+1;
		t = t / 10;
	}
	
	cout << dem;
	return 0;
}