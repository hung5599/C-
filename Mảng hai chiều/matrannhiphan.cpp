#include <bits/stdc++.h>
using namespace std;

int main(){
		int n;
		cin >> n;
		int a[n][3];
		for (int i=0;i<n;i++){
			for (int j=0;j<3;j++){
				cin >> a[i][j];
			}
		}
		int count=0;
		for (int i=0;i<n;i++){
			int mot=0;
			int khong=0;
			for (int j=0;j<3;j++){
				if (a[i][j]==1) mot++;
				else khong++;
			}
			if (mot > khong) count++;
		}
		cout << count <<"\n" ;
	}