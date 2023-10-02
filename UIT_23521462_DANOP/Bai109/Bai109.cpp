#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float s = 1;
	float m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = 1. / m;
		s = s + e;
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}