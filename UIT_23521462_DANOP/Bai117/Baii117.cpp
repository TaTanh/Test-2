#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int att = -1;
	int at = 3;
	int t = 2;
	int i = 2;
	int ahh;
	if (n == 0)
		ahh = -1;
	if (n == 1)
		ahh = 3;
	while (i <= n)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << setprecision(3) << "so hang thu n trong day la " << ahh << endl;
	return 0;
}