#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	cin >> x;
	float xx = (x * 3.14) / 180;
	float s = xx;
	float t = xx;
	float m = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
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