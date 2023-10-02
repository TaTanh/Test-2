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
	cout << setprecision(3) << "tong cac uoc so nho hon n la " << s << endl;
	return 0;
} 