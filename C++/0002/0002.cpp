#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    long long a, b;
    cin >> a;
    cin >> b;
    if (a > b)
        cout << ">";
    else if (a < b)
        cout << "<";
    else
        cout << "=";
    return 0;
}