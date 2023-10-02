#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	cout << setprecision(3) << "thu tu tang dan trong day la " << a << ", " << b <<", " << c << endl;
	return 0;
}