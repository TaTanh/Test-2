#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x % 4 == 0)
    {
        if (x % 100 == 0)
        {
            if (x % 400 == 0)
                cout << x << " la nam nhuan";
            else
                cout << x << " ko phai la nam nhuan";
        }
        else
            cout << x << " la nam nhuan";
    }
    else
        cout << x << " ko phai la nam nhuan";
    cout << "\n-----------------------------------\n";
    return 0;
}