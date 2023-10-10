// 469A - I Wanna Be the Guy


#include<bits/stdc++.h>
using namespace std;
 
int main(){
	map<int ,int >m;
	int level;
	cin>>level;
	int p;
	for(int i=0;i<2;i++){
	cin>>p;
	int a[p];
	for(int i=0;i<p;i++){
		cin>>a[i];
		m[a[i]]++;
	}
}
	if(level==m.size()){
		cout<<"I become the guy."<<endl;
	}
	else{
		cout<<"Oh, my keyboard!"<<endl;
	}
 
}
