//1878C - Vasilije in Cacak
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, x;
        cin >> n >> k >> x;
        cout << ((k * (k + 1) <= 2 * x && 2*x <= n * (n + 1) - (n - k) * (n - k + 1)) ? "YES" : "NO") << endl;
    }
}
