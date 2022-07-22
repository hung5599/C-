#include <iostream>
#include <cmath>
using namespace std;

#define modulo 1000000007

int main() {
    int t;
    cin >> t;
    while (t--) {
            long long n, x;
            cin >> n >> x;
            long long a[n];
            for (int i=0; i<n; i++)
                cin >> a[i];
            long long p = 0;
            for (int i=0; i<n; i++) {
                long long s=1;
                for (int j=n-i-1; j>0; j--) {
                    s= (s*x)% modulo;
                }
                p+=a[i]*s;
                if (p > modulo) {
                    p %= modulo;
                }
            }
            cout << p << endl;
    }
    return 0;
}