#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n];
			for (int i=0;i<n;i++){
				cin >> a[i];
			}
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				if (i==a[j]) {
					int temp= a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for (int i=0;i<n;i++){
				if (i!=a[i]) cout << "-1" << " ";
				else cout << a[i] << " ";
			}
		cout << "\n";	
	}
}
