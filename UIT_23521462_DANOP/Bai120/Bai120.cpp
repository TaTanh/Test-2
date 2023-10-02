#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float at = 2;
	int i = 2;
	float ahh;
	if (n == 1)
		ahh = 2;
	while (i <= n)
	{
		ahh = (5 * at + sqrt(24 * pow(at, 2) - 8));
		i = i + 1;
		at = ahh;
	}
	cout << setprecision(3) << "so hang thu n trong day la " << ahh << endl;
	return 0;
}