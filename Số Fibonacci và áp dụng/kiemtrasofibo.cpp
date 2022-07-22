#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
	long long n;
	cin >> n;
	if (n==1||n==0) cout <<"YES"<<endl;
	else {
	long long fibo=1;
	long long f0=0;
	long long f1=1;
	while (f0+f1<=n){
		fibo=f0+f1;
		f0=f1;
		f1=fibo;
	}
	if (fibo==n) cout << "YES" <<endl;
	else cout <<"NO" <<endl;
	}
	}
}