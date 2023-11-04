
#include<bits/stdc++.h>
using namespace std;
int t;
string s;
map < string,int > m;
main()
{
    cin>>t;
while(t--)
{cin>>s;
if(m[s]++)cout<<s<<m[s]-1;
else
 cout<<"OK";
 cout<<endl;
}
    return 0;
}
