#include <iostream>
using namespace std;
long long a = 1000000007;
long long k;
long long b_f(long long n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return k + 1;
    if (n % 2 == 0)
        return ((b_f(n / 2) % a) * (b_f(n / 2) % a)) % a;
    else
        return ((b_f(n / 2) % a) * (b_f(n / 2 + 1) % a)) % a;
}
int main()
{
    long long n, x;

    cin >> n >> k;
    x = b_f(n);
    cout << x;
}