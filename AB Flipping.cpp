//1896B - AB Flipping

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int k=0;
		int h=s.size()-1;
		while(s[k]=='B') k++;
		while(s[h]=='A') h--;
		if(h-k<0){
			cout<<0<<endl;
			continue;
		}
		cout<<h-k<<endl;
	}
}
