// 1872B - The Corridor or There and Back Again
#include <iostream>
using namespace std;
 
const int N = 103;
 
void solve() {
	int n, ans = 1e9;
	cin >> n;
	while (n--) {
		int d, s;
		cin >> d >> s;
		ans = min(ans, d + (s - 1) / 2);
	}
	cout << ans << endl;
}
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
