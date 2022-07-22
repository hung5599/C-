#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[100000];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		while (x--){
			int c ,b;
			cin >>c >> b;
			int tong=0;
			for (int i=c-1;i<=b-1;i++){
				tong += a[i];
			}
			cout << tong << endl;
		}
		cout << "\n" ; 
	}
}
