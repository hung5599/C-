#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore(1);
	while (t--){
		string s;
		cin >> s;
		if (s[0]=='0') cout <<"INVALID";
		else {
		int kt=0;
		set <int> st;
		for (int i=0;i<s.size();i++){
			int k= s[i]-'0';
			if (k >= 0 && k<=9 ){
				st.insert(k);
				kt=1;
			}
			else{
			    kt=0;
			    break;
			}
		}
		if (kt==0) cout <<"INVALID";
		else {
		if (st.size()==10) cout << "YES";
		else cout <<"NO";
		}
		}
		cout <<endl;	
	}
}