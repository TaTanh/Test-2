#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float s = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 1. / i;
		s = s + e;
		i = i + 2;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}