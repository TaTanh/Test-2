#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		s = s + dv;
		t = t / 10;
	}
	cout << setprecision(3) << "tong cac chu su cua n la " << s << endl;
	return 0;
}