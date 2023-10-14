// 427A - Police Recruits
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,b=0,c=0,a;
	cin>>n;
	for(int i=1;i<=n;i++)	{
		cin>>a;
		if(a<0&&b==0)
		c++;
		if(a>0)
		b=b+a;
		if(a<0&&b>0)
		b=b+a;
	}
	cout<<c;
}

