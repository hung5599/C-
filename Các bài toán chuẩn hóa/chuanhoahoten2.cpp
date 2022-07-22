#include <bits/stdc++.h>
using namespace std;
void cach1(string s){
	vector <string> v;
	stringstream a(s);
	string word;
	while (a>>word){
			transform(word.begin(), word.end(),word.begin(),:: tolower);
			word[0]-=32;
			v.push_back(word);
	}
	cout << v[v.size()-1] << " ";
	for (int i=0;i<v.size()-1;i++){
		cout << v[i]<< " ";
	}	
}
void cach2(string s){
	vector <string> v;
	stringstream a(s);
	string word;
	while (a>>word){
			transform(word.begin(), word.end(),word.begin(),:: tolower);
			word[0]-=32;
			v.push_back(word);
	}
	for (int i=1;i<v.size();i++){
		cout << v[i]<<" ";
	}
	cout << v[0]	;	
}
int main(){
    int t;
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	cin.ignore();
    	string s;
    	getline(cin,s);
    	switch(n){
    		case 1: cach1(s);break;
    		case 2: cach2(s);break;
		}
		cout << "\n";
	}
}
