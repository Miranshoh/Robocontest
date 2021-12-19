#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N, A, B, C;
    cin >> N;
    cin >> A >> B >> C;
    if (N < A + B + C)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}