//1374A - Required Remainder

#include<bits/stdc++.h>
 
using namespace std;
 
int t,x,y,n;;
 
int main(){
	
	cin>>t;
	
	while(t--){
		cin>>x>>y>>n;
		cout<<n-((n-y)%x)<<'\n';
	}
}
