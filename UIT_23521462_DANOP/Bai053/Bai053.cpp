#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		if( n%i==0)
			cout << setprecision(3) << "uoc so le la " << i << endl;
		i = i + 2;
	}
	return 0;
}