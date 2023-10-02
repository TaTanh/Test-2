#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && y + z > x && x + z > y)
		cout << "la tam giac";
	else
		cout <<"ko phai la tam ";
	return 0;
}