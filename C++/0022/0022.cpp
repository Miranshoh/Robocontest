#include "iostream"
#include "math.h"

using namespace std;

int main()

{

    int n;

    cin >> n;

    cout << (n - n % 10) / 10;

    return 0;
}