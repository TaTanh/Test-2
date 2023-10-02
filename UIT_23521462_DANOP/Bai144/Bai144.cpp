#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;	
		i = i + 1;
	}
	if (dem == 2)
		cout << "NT";
	else
		cout << "ko NT";
	return 0;
}