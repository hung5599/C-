#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore(1);
	while (t--){
	string s;
	cin >> s;
	int k;
	cin >> k;
	if (s.size()<26) cout << 0;
	else {
	    set <char> str;
	    for(int i=0;i<s.size();i++){
		    str.insert(s[i]);
	        }
	    if (k>=26-str.size()) cout << 1;
	    else cout << 0 ;
	}
	cout << "\n";
	}
}