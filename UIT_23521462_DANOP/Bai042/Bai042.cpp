#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + 1. / (float(i) * (float(i) + 1));
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}