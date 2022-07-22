#include <bits/stdc++.h>
int isfibo(int n){
	if (n==1||n==0) return 1;
	else {
	int fibo=1;
	int f0=0;
	int f1=1;
	while (f0+f1<=n){
		fibo=f0+f1;
		f0=f1;
		f1=fibo;
	}
	if (fibo==n) return 1;
	else return 0;
}
}
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >>a[i];
	}
	for (int i=0;i<n;i++){
		if (isfibo(a[i])) cout << a[i]<<" ";
	}
	cout <<"\n";
	}
}
