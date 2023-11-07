//	1742A - Sum

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		cout<<(a+b==c||b+c==a||c+a==b?"yes\n":"no\n");
	}
	
}
