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
		s = sqrt(float(i) + s);
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}