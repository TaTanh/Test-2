#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem = dem + 1;
		i = i + 1;
	}
	cout << setprecision(3) << "so uoc so la " << dem << endl;
	return 0;
}