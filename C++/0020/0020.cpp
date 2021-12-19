#include "iostream"

#include "math.h"

using namespace std;

int main()

{
    int n, k;
    cin >> n;
    cin >> k;
    cout << k - n * int(k / n);
    return 0;
}