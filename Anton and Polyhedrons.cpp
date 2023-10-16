
// 785A - Anton and Polyhedrons
#include <iostream>
 
using namespace std;
 
int main()
{
int n,k=0;
cin>>n;
string s;
while(n--){
        cin>>s;
    if(s=="Tetrahedron")k+=4;
    if(s=="Cube")k+=6;
    if(s=="Octahedron")k+=8;
    if(s=="Dodecahedron")k+=12;
    if(s=="Icosahedron")k+=20;
}
cout<<k;
}
