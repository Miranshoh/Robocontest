#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;

    int count = 0;
    int n = 1;
    int c;
    cin >> a;
    int ka = a;
    if (a == -1)
    {
        cout << 1;
    }
    else if (a == 0)
    {
        cout << -1;
    }
    else
    {
        a = abs(a);
        while (n <= sqrt(a))
        {
            c = a % n;
            if (c == 0)
            {
                count = count + 1;
            }
            n = n + 1;
        }
        count = count * 2;
        if ((ka < 0) and (trunc(sqrt(abs(a))) == sqrt(abs(a))))
        {
            count = count - 1;
        }

        cout << count;
    }
}