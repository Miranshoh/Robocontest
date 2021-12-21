#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
long long mod(string num, long long a)
{

    long long res = 0;

    for (long long i = 0; i < num.length(); i++)
        res = (res * 10 + (long long)num[i] - '0') % a;

    return res;
}

int main()
{
    string num;
    cin >> num;
    long long h = mod(num, 86400);
    long long second = h % 60;
    h = h / 60;
    long long minute = h % 60;
    long long hour = h / 60;
    printf("%d:", hour);
    printf("%02d:", minute);
    printf("%02d", second);
}