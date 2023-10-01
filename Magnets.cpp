//344A - Magnets


#include <iostream>
 
using namespace std;
int n,x,d,c;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x!=d)c++;
        d=x;
    }
    cout<<c;
    return 0;
}
