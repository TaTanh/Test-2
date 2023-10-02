#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 2;
	}
	cout << setprecision(3) << "tong cac uoc so chan la " << s << endl;
	return 0;
}