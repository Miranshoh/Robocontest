#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long long a, a1, a2, b1, b2;
    cin >> a;
    vector<long long> a1s(a);
    vector<long long> a2s(a);
    vector<long long> b1s(a);
    vector<long long> b2s(a);

    for (int i = 0; i < a; i++)
    {
        cin >> a1 >> a2 >> b1 >> b2;
        a1s[i] = a1;
        a2s[i] = a2;
        b1s[i] = b1;
        b2s[i] = b2;
    }
    for (int i = 0; i < a; i++)
    {
        cout << a1s[i] * (-1) + b1s[i] * 2 << " " << a2s[i] * (-1) + b2s[i] * 2 << endl;
    }
}