#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag = 1;
	int t = n;
	while (t >= 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc < dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Giam";
	else
		cout << "Ko Giam";
	return 0;
}