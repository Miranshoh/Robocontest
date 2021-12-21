#include <iostream>
using namespace std;
int main()
{
    long long a1, a2, a3;
    long long b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;

    cout << b1 * 3600 + b2 * 60 + b3 - a1 * 3600 - a2 * 60 - a3;
}