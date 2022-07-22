#include<bits/stdc++.h>
using namespace std;  
int main() { 
	int t;
	cin>> t;
	while(t--){
	int n,k;
	cin >> n >> k;
	int a[n];
	set <int > s;
	for (int i=0;i<n;i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	int kt=-1;
	for (int i=0;i<n;i++){
		if (s.count(a[i]+k)!=0) kt =1;
	}
	if(kt==1) cout << 1;
	else cout << -1;
	cout << "\n";
	}
}
