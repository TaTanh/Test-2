#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int lc = a;
	if (lc > b)
		lc = b;
	cout << lc;
	cout << setprecision(3) << "gia tri nho nhat trong day la " << lc << endl;
	return 0;
}