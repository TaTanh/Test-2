#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i = i + 1;
		at = ahh;
	}
	cout << setprecision(3) << "so hang thu n trong day la " << ahh << endl;
	return 0;
}