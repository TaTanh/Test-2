#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float at=2;
	float ahh;
	int i = 2;
	if (n == 1)
		ahh = 2;
	while (i <= n)
	{
		ahh = (pow(at,2) + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}
	cout << setprecision(3) << "so hang thu n trong day la " << ahh << endl;
	return 0;
}