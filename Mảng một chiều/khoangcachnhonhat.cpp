#include <bits/stdc++.h>
using namespace std;
void sort(int a[1000],int h){
	for (int i=0;i<h;i++){
		for (int j=i+1;j<h;j++){
			if (a[i]>a[j]){
				int temp = a[i];
				a[i] =a[j];
				a[j]=temp;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n ;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,n);
		int hieu=a[1]-a[0];
		for (int i=2;i<n;i++){
			if ((a[i]-a[i-1])< hieu ) hieu=a[i]-a[i-1];
		}
		cout << hieu << "\n";
	}
}
