#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	float i = n;
	while (i > 0)
	{
		s = sqrt((i) + s);
		i = i - 1;
	}
	cout << setprecision(3) << "s la " << s << endl;
	return 0;
}