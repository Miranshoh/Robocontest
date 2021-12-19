#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    vector<long long> b(a);
    for (long long h = 0; h < a; h++)
    {
        cin >> b.at(h);
    }
    sort(b.begin(), b.end());
    long long f;
    for (auto h : b)
    {
        long long af = count(b.begin(), b.end(), h);
        if (af % 2 == 1)
        {
            cout << h;
        }
    }
}