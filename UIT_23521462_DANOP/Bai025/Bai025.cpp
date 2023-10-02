#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << "a la " << a << "\n";
	cout << "b la " << b << "\n";
	return 0;
}