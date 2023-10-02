#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 1;
	int i = 1;
	while (i <= n)
	{
		s = s + 1. / (1 + s);
		i = i + 1;
	}
	cout << s;
	return 0;
}