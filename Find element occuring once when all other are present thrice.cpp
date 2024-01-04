class Solution {
  public:
    int singleElement(int arr[] ,int N) {
          map<int, int> m;
        
        for(int i = 0; i < N; i++){
            
            m[arr[i]]++;
        }
        
        for(auto x : m){
            
            if(x.second != 3){
                
                return x.first;
            }
        }
    }
};
