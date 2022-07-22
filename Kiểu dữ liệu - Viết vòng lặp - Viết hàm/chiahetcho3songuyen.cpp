#include<bits/stdc++.h>
using namespace std;  
long long gcd(long long a, long long b) { 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
long long lcm(long long a, long long b){
	return a*b/gcd(a,b);
}
int main() { 
	int t;
	cin>> t;
	while(t--){
		long long a,b,c,n;
		cin >> a >> b >> c >> n;
		long long k=lcm(a,lcm(b,c));
		long long dau=pow(10,n-1);
		long long cuoi=pow(10,n);
		long long d=dau/k;
		long long e=cuoi/k;
		if (d<1&&e<1) {
		cout << -1<<endl;
		continue;
		}
		if (d*k<dau) {
			d++;
			cout << k*d <<endl;
		}
		else cout << k*d << endl;
		
	}
}
