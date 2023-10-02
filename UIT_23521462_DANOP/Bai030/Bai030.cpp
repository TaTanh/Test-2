#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = 2;
	while (i <= 2*n)
	{
		s = s + float(1. /i);
		i = i + 2;
	}
	cout << setprecision(3) << "s la "<< s << endl;
	return 0;
}