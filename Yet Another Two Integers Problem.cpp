//1409A - Yet Another Two Integers Problem


#include<iostream>
using namespace std;
int main(){
	int a, b,t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		
 
		cout<<(abs(a-b)+9)/10<<endl;
	}
}
