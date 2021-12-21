#include <cstdio>
using namespace std;
int get_index(int n, int k)
{
    int l = n / 2;
    if (l == k)
        return n - 1;
    if (k > l)
        return (n - k - 1) * 2;
    else
        return (k + 1) * 2 - 1;
}
int main()
{
    int t, n, k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        printf("%d\n", get_index(n, k));
    }
    return 0;
}