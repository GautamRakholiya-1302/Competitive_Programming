//	136A - Presents
#include<bits/stdc++.h>
using namespace std;
 
int n, r;
 
int main(){
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> r;
		a[r-1]=i+1;
	}
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}
