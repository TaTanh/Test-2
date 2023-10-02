#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	cout << dt;
}