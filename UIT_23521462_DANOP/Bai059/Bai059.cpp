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
		dem = dem + 1;
		t = t / 10;
	}
	cout << setprecision(3) << "so luong chu so la " << dem << endl;
	return 0;
}