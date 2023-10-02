#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float s = 0;
	float dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 4. / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}