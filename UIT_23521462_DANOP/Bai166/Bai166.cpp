#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = 1;
	int k = 1;
	while (2 * t <= n)
	{
		t = t * 2;
		k = k + 1;
	}
	cout << k;
	return 0;
}