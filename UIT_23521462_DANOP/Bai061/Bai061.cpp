#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem = dem + 1;
		t = t / 10;
	}
	cout << setprecision(3) << "so luong chu so le la " << dem << endl;
	return 0;
}