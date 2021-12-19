#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    if (t % 400 == 0)
        cout << "12/09/" << setw(4) << setfill('0') << t;
    else if (t % 100 == 0)
        cout << "13/09/" << setw(4) << setfill('0') << t;
    else if (t % 4 == 0)
        cout << "12/09/" << setw(4) << setfill('0') << t;
    else
        cout << "13/09/" << setw(4) << setfill('0') << t;
}