#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n ;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		int tong = a[0]+a[1];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				if (i!=j) {
					if (abs(tong)>abs(a[i]+a[j])) tong = a[i]+a[j];					
				}
			}
		}
		cout << tong << "\n";
	}
}

