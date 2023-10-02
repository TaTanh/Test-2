#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int lc = n % 10;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	cout << setprecision(3) << "chu so lon nhat la " << lc << endl;
	return 0;
}