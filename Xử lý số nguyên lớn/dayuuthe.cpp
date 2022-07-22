#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int t;  
	cin >> t;
	cin.ignore(1);
	string s;
	while(t--) {
	getline(cin,s);
	stringstream a(s);
	string word;
	int count =0;
	int chan=0;
	int le=0;
	while (a>>word){
		count ++;
		int c = word[word.size() -1 ] - 48;
		if (c%2==0) chan++;
		else le++;
	}
	if (count%2==0&&chan>le) cout << "YES";
	else if (count%2!=0&&chan<le) cout << "YES";
	else cout << "NO";
	cout << endl; 
	} 
}