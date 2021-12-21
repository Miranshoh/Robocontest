#include <bits/stdc++.h>
using namespace std;

long long divisorsSame(long long n)
{

    long long even_div = 0, odd_div = 0;

    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (n / i == i)
            {

                if (i % 2 == 0)
                {
                    even_div++;
                }
                else
                {
                    odd_div++;
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    even_div++;
                }
                else
                {
                    odd_div++;
                }
                if (n / i % 2 == 0)
                {
                    even_div++;
                }
                else
                {
                    odd_div++;
                }
            }
        }
    }

    return even_div;
}
int main()
{
    long long N, n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> N;
        cout << divisorsSame(N) << endl;
    }

    return 0;
}