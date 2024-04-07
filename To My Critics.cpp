//1850A	To My Critics
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a+b>=10 || c+b>=10 || a+c>=10)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
      }
    }
    
}
