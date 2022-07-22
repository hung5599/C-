#include <bits/stdc++.h>
using namespace std;
int main(){
		string s;
		getline(cin,s);
		stringstream a(s);
		string word;
		vector <string> v;
		while(a>>word){
			transform(word.begin(), word.end(),word.begin(),:: tolower);
			word[0]-=32;
			v.push_back(word); 
		}
		for (int i=0;i<v.size()-1 ;i++){
			if(i==v.size()-2)cout << v[i] << ",";
			else cout << v[i] << " ";
		}
		transform(v[v.size()-1].begin(), v[v.size()-1].end(),v[v.size()-1].begin(),:: toupper);
		cout << " "<< v[v.size()-1];
}


