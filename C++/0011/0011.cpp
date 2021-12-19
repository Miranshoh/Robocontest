#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    unsigned short k;
    cin >> k;
    unsigned short n[k];
    for (short j = 0; j < k; j++)
    {
        cin >> n[j];
    }
    sort(n, n + k, greater<short>());
    cout << n[1];
}