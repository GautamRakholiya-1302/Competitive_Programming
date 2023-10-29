// 1869A - Make It Zero
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        // Calculate the XOR result and perform operations
        int xorResult = 0;
        for (int i = 0; i < n; i++) {
            xorResult ^= a[i];
        }
 
        cout << 4 << endl << 1 << " " << 1 + (n % 2) << endl << 1 << " " << 1 + (n % 2) << endl << 1 + (n % 2) << " " << n << endl << 1 + (n % 2) << " " << n << endl;
    }
    return 0;
}
