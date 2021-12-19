#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    vector<long long> as(a + 1);
    as[0] = 2;
    as[1] = 2;
    for (long long h = 2; h < a; h++)
    {
        as.at(h) = as.at(h - 2) + as.at(h - 1);
    }
    cout << as.at(a - 1);
}