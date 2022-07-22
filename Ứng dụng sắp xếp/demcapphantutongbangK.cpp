#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,t;
		cin >> n >> t;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		int count=0;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				if ((a[i]+a[j])==t&& i!=j) count++;
			}
		}
		cout << count/2 <<"\n" ;
	}
}
