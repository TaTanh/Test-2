#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + float(1./ i);
		i = i + 1;
	}
	cout << "s la " << float (s) <<"\n";
	return 0;
}