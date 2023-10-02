#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int k = 0;
	while (s+k+1 < n)
	{
		k = k + 1;
		s = s + k;
	}
	cout << k;
	return 0;
}