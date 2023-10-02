#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	float s = 0;
	float i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}