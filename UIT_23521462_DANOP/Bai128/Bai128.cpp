#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int temp;
	if (a > b)
		temp = a;
		a = b;
		b = temp;
	cout << setprecision(3) << "a la " << a << endl;
	cout << setprecision(3) << "b la " << b << endl;
	return 0;
}