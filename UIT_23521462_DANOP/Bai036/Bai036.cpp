#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		i = i + 1;
	}
	cout << setprecision(3) << "t la " << t << endl;
	return 0;
}