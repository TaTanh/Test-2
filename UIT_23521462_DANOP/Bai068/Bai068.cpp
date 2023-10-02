#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t;
		i = i + 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}