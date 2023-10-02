#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s=0;
	int i = 1;
	while (i <= n)
	{
		s = s + (1. / i);
		cout << s;
		i = i + 1;
	}
	return 0;
}