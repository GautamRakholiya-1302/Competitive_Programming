// 1399A - Remove Smallest

#include<bits/stdc++.h>
using namespace std;
int a[60];
int main(){
	int t,n;
	cin>>t;
	while(t--){
		int flag=1;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]>1){
				flag=0;
				break;
			}
		}
		if(flag)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
