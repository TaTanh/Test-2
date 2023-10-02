#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a la " << a << "\n";
	cout << "b la "<< b << "\n";
	return 0;
}