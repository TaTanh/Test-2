#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int att = -1;
	int at = 3;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = 5 * at + 6 * att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << setprecision(3) << "so hang thu n trong day la " << ahh << endl;
	return 0;
}