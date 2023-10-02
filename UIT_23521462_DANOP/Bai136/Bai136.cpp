#include <iostream>
#include <string>
#include <cmath>
#include<stdio.h>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int res = x / 4;
	res = res * 4;
	res = res + 4;
	if (x % 4 == 0)
		cout << x << " ";
	while (res <= y)
	{
		cout << res << " ";
		res = res + 4;
	}
}