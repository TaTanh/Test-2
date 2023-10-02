#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float r;
	cin >> r;
	float p = 2 * n * r * sin(3.14 / n);
	cout << "p la " << p;
	return 0;
}