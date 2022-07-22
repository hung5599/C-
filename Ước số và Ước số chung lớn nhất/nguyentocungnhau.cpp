#include<bits/stdc++.h>
using namespace std;
int main(){ 
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int count=0;
		for(int i=2;i<n;i++){
			int h=__gcd(n,i);
			if(h==1) count++; 
		}
		if(count==1) cout <<"1";
		else cout << "0";
		cout << endl;
	}
	}