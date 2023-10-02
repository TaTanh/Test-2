#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float at = 2;
	float bt = 1;
	int i = 2;
	float ahh, bhh;
	while (i <= n)
	{
		ahh = pow(at, 2) + 2 * pow(bt, 2);
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << setprecision(3) << "so hang thu n cua a trong day la " << ahh << endl;
	cout << setprecision(3) << "so hang thu n cua b trong day la " << bhh << endl;
	return 0;
}