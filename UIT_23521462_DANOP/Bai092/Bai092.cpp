#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	float s = 1 - x;
	float t = x;
	float m = 1;
	int i = 3;
	int dau = 1;
	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + float(dau) * t/m;
		i = i + 2;
		dau = -dau;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}