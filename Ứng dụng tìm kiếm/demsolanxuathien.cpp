#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
	int n,x ;
	cin >> n >> x;
	int a[10000];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		if (a[i]==x) count++;
	}
	if (count!=0) cout << count;
	else cout << "-1" ;
	cout << endl;
}
}