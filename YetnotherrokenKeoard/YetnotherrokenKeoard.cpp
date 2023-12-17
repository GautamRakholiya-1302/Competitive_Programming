//1907B - YetnotherrokenKeoard
include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		string s,k;
		cin>>s;
		k=" ";
		a=0,b=0;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='B')a++;
			else if(s[i]=='b')b++;
			else {
				if(s[i]>='a'&&s[i]<='z'&&b>0)
				b--;
				else if(s[i]>='A'&&s[i]<='Z'&&a>0)
				a--;
				else k+=s[i];
				}
		}
		reverse(k.begin(),k.end());
		cout<<k<<endl;
	}
	return 0;
 } 
