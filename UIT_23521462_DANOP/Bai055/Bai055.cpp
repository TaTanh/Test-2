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
		if (n % i == 0)
			t = t * i;
		i = i + 2;
	}
	cout << setprecision(3) << "tich cac uoc so le la " << t << endl;
	return 0;
}