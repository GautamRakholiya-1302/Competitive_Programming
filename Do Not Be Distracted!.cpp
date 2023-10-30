// //1520A - Do Not Be Distracted!

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,k;
		cin>>n;
		string s;
		cin>>s;
		int a[26]={0};
		for(i=0;i<n;i++)
		{
			k=s[i]-65;
			a[k]++;
			if(a[k]>=2)
			{
				if(s[i]!=s[i-1])
				break;
			}
		}
		if(i<n)
		cout<<"NO";
		else
		cout<<"YES";
		cout<<"\n";
	}
}
