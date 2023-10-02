#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >>  n;
	float s = 0;
	float m = 0;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + dau / m;
		i = i + 1;
		dau = -dau;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}