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
	float m = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + t / m;
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}