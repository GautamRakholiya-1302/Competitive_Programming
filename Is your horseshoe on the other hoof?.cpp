//228A - Is your horseshoe on the other hoof?
#include <bits/stdc++.h>
using namespace std;
main(){
	int x, n=4;
	set <int> st;
	while(n--){
		cin>>x;
		st.insert(x);
	}
	cout<<4-st.size();
}
