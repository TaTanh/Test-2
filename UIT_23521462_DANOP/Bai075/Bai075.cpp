#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	float s = 1;
	float t = 1;
	float m = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + t / m;
		i = i + 2;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}