#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	cin >> x;
	float xx = (x * 3.14) / 180;
	float s = 1;
	float t = 1;
	float m = 1;
	int dau = -1;
	float e = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		i = i + 2;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}