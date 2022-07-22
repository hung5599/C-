#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		vector <int > v;
		vector <int > u;
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		sort (a,a+n);
		for (int i=0;i<n/2;i++){
			v.push_back(a[i]);
		}
		for (int i=n/2;i<n;i++){
			u.push_back(a[i]);
		}
		int h=0;
		int k=u.size();
		while (h<v.size()||k>0){
			if (k>0) cout << u[k-1] << " ";
			if (h<v.size()) cout << v[h] << " ";
			k--;
			h++; 
		}
		cout << "\n";
	}	
	}
	


