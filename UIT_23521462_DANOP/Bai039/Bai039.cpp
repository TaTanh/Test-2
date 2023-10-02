#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * (1 + 1. / (float(i) * float(i)));
		i = i + 1;
	}
	cout << setprecision(3) << "t la " << t << endl;
	return 0;
}