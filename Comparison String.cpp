//1837B - Comparison String
#include <bits/stdc++.h>
using namespace std;
int a[110], t[10010];
void solve() {
	  int n, cnt = 1, ans = 1; string s;
	  cin >> n >> s;
	  for(int i = 1; i < n; i++) {
		   if(s[i] == s[i - 1]) ++cnt;
		   else cnt = 1;
		   ans = max(ans, cnt);
	  }
	  cout << ans + 1 << endl;
}
 
int main() {
	int T; cin >> T;
	while(T--) solve();
}
