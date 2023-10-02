#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float s = 0;
	float e = 0.5;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 1. / (float(i) * (float(i) + 1));
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}