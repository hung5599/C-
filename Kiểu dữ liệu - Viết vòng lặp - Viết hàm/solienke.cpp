#include<iostream>
using namespace std;
int sochanle( long long n){
	while (n>9){
		long long b=n%10;
		long long c=(n/10)%10;
		if (c!=b+1&&c!=b-1) {
		return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
	long long n;
	cin >> n;
	if (sochanle(n)) cout << "YES";
	else cout << "NO";
	cout << "\n";
	}
}
