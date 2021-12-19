#include <iostream>

using namespace std;

long long p_m(long long num, long long pow, long long mod)
{
    long long test;
    for (test = 1; pow; pow >>= 1)
    {
        if (pow & 1)
            test = (test * num) % mod;
        num = (num * num) % mod;
    }

    return test;
}

int main()
{
    long long n, k, mod = 1000000007;
    scanf("%lld %lld", &n, &k);
    if (n == 0)
        printf("0");
    else if (n == 1 or k == 0)
        printf("1");
    else
    {
        n = ((p_m(k, n, mod) - 1) * p_m(k - 1, mod - 2, mod)) % mod;
        printf("%d", n);
    }
}