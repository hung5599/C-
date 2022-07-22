#include<bits/stdc++.h>
using namespace std;
int main(){ 
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		vector <int> u;
		vector <int> v;
		for(int i=0;i<n;i++){
			cin >> a[i];
		} 	
		sort(a,a+n);
		if(n%2==0){
			for(int i=0;i<n;i++){
			if(i<n/2) u.push_back(a[i]);
			else v.push_back(a[i]);
		}
		}
		else{
		for(int i=0;i<n;i++){
			if(i<=n/2) u.push_back(a[i]);
			else v.push_back(a[i]);
		}
		}
		int h=0;
		int k=0;
		while (h<u.size()||k<v.size()){
			if(h<u.size()){
				cout << u[h] << " ";
				h++;
			}
			if(k<v.size()){
				cout << v[k] << " ";
				k++;
			}
		}
		cout <<endl; 	
	}
}
