#include "iostream"

#include "math.h"

using namespace std;

int main()

{

    int a, b, c;

    cin >> a;

    cin >> b;

    cin >> c;

    if (a / 2 != 0)

    {

        a = a + 1;
    }

    if (b / 2 != 0)

    {

        b = b + 1;
    }

    if (c / 2 != 0)

    {

        c = c + 1;
    }

    cout << a / 2 + b / 2 + c / 2;

    return 0;
}