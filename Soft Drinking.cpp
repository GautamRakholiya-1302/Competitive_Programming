#include <iostream>
 
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    int total_drink = k * l;
    int total_limes = c * d;
    int total_salt = p;
 
    int toasts_drink = total_drink / (n * nl);
    int toasts_limes = total_limes / n;
    int toasts_salt = total_salt / (n * np);
 
    int min_toasts = min(min(toasts_drink, toasts_limes), toasts_salt);
    cout << min_toasts << endl;
 
    return 0;
}
