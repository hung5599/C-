#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin,s);
		vector <char > v;
		vector <char> r;
		for (int i=0;i<s.size() ;i++){
			r.push_back(s[i]);
		}
 		for (int i=0;i<s.size();i++){
			for (int j=i+1;j<s.size();j++){
				if (s[i]==s[j]) s[j]='.';
			}
		}
		for (int i=0;i<s.size();i++){
			if (s[i]!='.') v.push_back(s[i]);
		}
		
		for (int i=0;i<v.size();i++){
			int count =0;
			for (int j=0;j<r.size();j++){
				if (v[i]==r[j]) count ++;
			}
			if (count==1) cout << v[i];
		}
		cout << "\n";
  		
	}
    return 0;
}



