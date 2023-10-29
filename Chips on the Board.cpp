1879B - Chips on the Board


#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, a, b, asum = 0, bsum = 0, amin = INT_MAX, bmin = INT_MAX;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a;
			asum += a, amin = min(amin, a);
        }
		for (int i = 0; i < n; i++) {
			cin >> b;
			bsum += b, bmin = min(bmin, b);
		}
		cout << min(asum + bmin * n, bsum + amin * n) << '\n';
	}
}
