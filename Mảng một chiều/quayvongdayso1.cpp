#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
	int n,x;
	cin >>n >> x;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	for (int i=x;i<n;i++){
		cout << a[i] << " ";
	}
	for (int i=0;i<x;i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}
}