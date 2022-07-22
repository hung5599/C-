#include <iostream> 
#include <math.h>
#include <set>
#include <vector>
using namespace std;
int main() { 
	int t;  
	cin >> t; 
	while(t--) {
	int n,m;
	cin >> n >> m;
	int a[n][n];
	multiset <int> s;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin >> a[i][j];
			s.insert(a[i][j]);
		}
	}
	vector <int > v;
	for (auto x : s){
		v.push_back(x);
	}
	cout << v[m-1];
	cout << endl; 
	} 
}