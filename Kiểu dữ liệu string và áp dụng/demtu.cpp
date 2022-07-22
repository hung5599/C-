#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore(1);
	string s;
	while(t--){
	getline(cin,s);
	stringstream a(s);
	string token;
	int dem=0;
	while (a>> token){
		dem++;
	}
	cout << dem << "\n";
}
}