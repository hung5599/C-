#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
	int k;
	cin >> k;
	long long f[100];
	f[0]=0;
	f[1]=1;
	for (int i=2;i<=k;i++){
		f[i]= f[i-2] + f[i-1];
	}
	cout << f[k] << endl;
	}
}
