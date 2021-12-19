#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<long long> s(9);
    for (long long i = 0; i < 9; i++)
    {
        cin >> s[i];
    }
    vector<long long> s1 = {4, 9, 2, 3, 5, 7, 8, 1, 6};
    vector<long long> s2 = {8, 3, 4, 1, 5, 9, 6, 7, 2};
    vector<long long> s3 = {6, 1, 8, 7, 5, 3, 2, 9, 4};
    vector<long long> s4 = {2, 7, 6, 9, 5, 1, 4, 3, 8};
    vector<long long> s5 = {4, 3, 8, 9, 5, 1, 2, 7, 6};
    vector<long long> s6 = {6, 7, 2, 1, 5, 9, 8, 3, 4};
    vector<long long> s7 = {8, 1, 6, 3, 5, 7, 4, 9, 2};
    vector<long long> s8 = {2, 9, 4, 7, 5, 3, 6, 1, 8};
    long long a1 = 0;
    long long a2 = 0;
    long long a3 = 0;
    long long a4 = 0;
    long long a5 = 0;
    long long a6 = 0;
    long long a7 = 0;
    long long a8 = 0;
    for (long long i = 0; i < 9; i++)
    {
        a1 = a1 + abs(s1[i] - s[i]);
        a2 = a2 + abs(s2[i] - s[i]);
        a3 = a3 + abs(s3[i] - s[i]);
        a4 = a4 + abs(s4[i] - s[i]);
        a5 = a5 + abs(s5[i] - s[i]);
        a6 = a6 + abs(s6[i] - s[i]);
        a7 = a7 + abs(s7[i] - s[i]);
        a8 = a8 + abs(s8[i] - s[i]);
    }

    cout << (min({a1, a2, a3, a4, a5, a6, a7, a8}));
}