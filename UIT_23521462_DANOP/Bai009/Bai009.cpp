#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r, n;
	cin >> r >> n;
	float s = 1. / 2 * n * r * r * sin(2 * 3.14 / n);
	cout << "s la " << s;
	return 0;
}