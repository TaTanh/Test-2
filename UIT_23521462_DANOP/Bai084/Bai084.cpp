#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	float s = 0;
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = sin(t);
		s = s + t;
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}