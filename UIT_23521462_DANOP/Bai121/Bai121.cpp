#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float att = 1;
	float at = 1;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << setprecision(3) << "so hang thu n trong day la " << ahh << endl;
	return 0;
}