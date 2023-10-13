//144A - Arrival of the General


#include <iostream>
using namespace std;
int main() {
    int n, x, y, max = 0, min = 101; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a > max) {
            x = i;
            max = a;
        }
        if (a <= min) {
            y = i;
            min = a;
        }
    }
    cout << (x-1) + (n-y) - (x>y);
 
}
