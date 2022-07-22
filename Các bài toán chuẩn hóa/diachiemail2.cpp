#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string s){
    stringstream a(s);
		string word;
		vector <string> v;
		vector <char>  u; 
 		while(a>>word){
			transform(word.begin(), word.end(),word.begin(),:: tolower);
			v.push_back(word);
			u.push_back(word[0]); 
		}
        cout << v[v.size()-1];
		for (int i=0;i<u.size()-1 ;i++){
			cout << u[i];
		}
}
int main(){
        int t;
        cin >> t;
        cin.ignore(1);
        while(t--){
		string s;
		getline(cin,s);
        chuanhoa(s);
		cout<<"@ptit.edu.vn";
        cout << " \n";
        }
}


