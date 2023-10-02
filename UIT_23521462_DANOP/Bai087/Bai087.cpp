#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	float s = x;
	float t = x;
	int i = 3;
	int dau = -1;
	while (i <= 2 * n +1)
	{
		t = t * x * x;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}