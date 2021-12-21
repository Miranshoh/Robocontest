#include <iostream>
#include <algorithm>
using namespace std;

long long power(long long x, unsigned int y, long long p)
{
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    long long t;
    cin >> t;
    t = t % 1000000007;
    long long n[t];
    for (long long &h : n)
    {
        cin >> h;
    }
    for (long long h : n)
    {
        cout << power(h, 2, 1000000007) << endl;
    }
}