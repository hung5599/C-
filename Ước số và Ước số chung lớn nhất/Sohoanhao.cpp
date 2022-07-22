#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
    	long long n;
    	cin >> n;
		int a[7]={2,3,5,7,13,17,19};
		int kt=0;
		vector <long long > v;
		for(int i=0;i<7;i++){
			long long h= pow(2,a[i]-1)*(pow(2,a[i])-1);
			v.push_back(h);
		}
		for(int i=0;i<v.size();i++){
			if(n==v[i]) kt=1;
		}
		if(kt==1) cout <<1;
		else cout << 0;
    	cout <<  endl;
	}
}
