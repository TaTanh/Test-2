#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	float s = 0;
	float t = 1;
	int i = 2;
	int dau = -1;
	while (i <= 2*n)
	{
		t = t * x * x;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}