#include<iostream>
using namespace std;
int main(){
int a[5],i,k=0;
string s;
cin>>a[1]>>a[2]>>a[3]>>a[4]>>s;
for(i=0;i<s.size();i++)
    k+=a[s[i]-48];
cout<<k;
}
