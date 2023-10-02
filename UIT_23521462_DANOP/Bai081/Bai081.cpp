#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	float s = 0;
	float m = 1;
	int i = 0;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + 1. / m;
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}