#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == n)
		cout << "HT";
	else
		cout << "ko HT";
	return 0;
}