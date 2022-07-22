#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >>m;
		int a[n][m];
		vector <int > u;
		vector <int > v;
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin >> a[i][j];
				if (a[i][j]==1) {
					u.push_back(i);
					v.push_back(j);
				}
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				for (int k=0;k<u.size();k++){
					if (i==u[k]||j==v[k]) a[i][j]=1;
				}
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cout <<  a[i][j] << " ";
			}
			cout <<" \n";
		}
		
		cout  <<  "\n";
	}	
}
	


