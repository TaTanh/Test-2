#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float ht = (n / 100) % 10;
	cout << "ht la " << ht;
	return 0;
}