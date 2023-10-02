#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float s = 3;
	float dau = 1;
	float e = 3;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = 4. / (i*(i+1)*(i+2));
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}