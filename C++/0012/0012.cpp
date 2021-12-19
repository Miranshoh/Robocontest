#include <iostream>
using namespace std;
bool isPrime(long long n)
{

    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
    long long n, countd{0};
    cin >> n;

    for (long long h = 1; h <= n; h++)
    {
        if (isPrime(h))
        {
            countd += 1;
        }
    }
    if (countd % 2 == 1)
    {
        cout << "Ali";
    }
    else
    {
        cout << "Bobur";
    }
}