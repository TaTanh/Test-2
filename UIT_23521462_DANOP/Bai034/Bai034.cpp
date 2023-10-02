#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= 2*n + 1)
	{
		s = s + (float(i)/ (float(i) + 1));
		i = i + 2;
	}
	cout << setprecision(3) <<"s la "<< s << endl;
	return 0;
}