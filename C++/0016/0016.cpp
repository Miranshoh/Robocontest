#include <iostream>
#include <cmath>
using namespace std;

int getSum(int n)
{
    long long sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return pow(sum, 2);
}

int main()
{
    long long N;
    cin >> N;
    long long h{0};
    long long k{0};
    while (h != N)
    {
        k++;
        if ((k % getSum(k)) == 0)
        {
            h++;
        }
    }
    cout << k;
}