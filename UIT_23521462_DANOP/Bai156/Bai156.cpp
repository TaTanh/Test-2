#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		cout << t;
		i = i + 1;
	}
	return 0;
}