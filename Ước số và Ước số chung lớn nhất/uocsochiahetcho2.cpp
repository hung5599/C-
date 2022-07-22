#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	int dem=1;
    	if (n%2!=0) dem=0;
    	if (n%2==0){
    		for (int i=2;i<=sqrt(n);i++){
    		if (n%i==0&&i%2==0&&(n/i)%2==0&&i!=sqrt(n)) dem+=2;
    		if (n%i==0&&i%2==0&&(n/i)%2!=0&&i!=sqrt(n)) dem+=1;
    		if (n%i==0&&i%2!=0&&(n/i)%2==0&&i!=sqrt(n)) dem+=1;
    		if (n%i==0&&i==sqrt(n)) dem+=1;
    	}
		}
    	cout << dem  << endl;
	}
}
