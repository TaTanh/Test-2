#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + i;
		i = i + 1;
	}
	cout << "s la " << s;
	return 0;
}