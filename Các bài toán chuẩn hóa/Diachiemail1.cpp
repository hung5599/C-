#include <bits/stdc++.h>
using namespace std;
int main(){
		string s;
		getline(cin,s);
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
		cout<<"@ptit.edu.vn";
}


