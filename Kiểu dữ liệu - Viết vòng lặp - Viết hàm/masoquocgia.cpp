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
 		for (int i=0;i<s.size()-2;i++){
			if (s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4') {
				s[i]='.';
				s[i+1]='.';
				s[i+2]='.';
			}
		}
		for (int i=0;i<s.size();i++){
			if (s[i]!='.') cout << s[i];
		}
		cout << "\n";
  		
	}
    return 0;
}



