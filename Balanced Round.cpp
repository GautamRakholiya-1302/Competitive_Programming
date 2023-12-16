//1850D - Balanced Round
#include<bits/stdc++.h>
using namespace std;
 
main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int dif[n];
    for(int i=0; i<n; i++)
      cin>>dif[i];
    sort(dif, dif+n);
    int len = 1, maxlen= 1;
    for(int i=1; i<n; i++){
      if(dif[i] - dif[i-1] <= k){
        len++;
      }
      else{
        len = 1;
      }
      maxlen = max(maxlen, len);
    }
    cout<<n-maxlen<<endl;
  }
}
