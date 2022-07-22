#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin>>t; 
	cin.ignore(1);
	while(t--){ 
	string s;
	getline(cin,s);
	int dem=0;
	for (int i=0;i<s.size();i++){
		for (int j=i+1;j<s.size();j++){
			if (s[i]==s[j]) dem++;
		}
	}
	cout << s.size() +dem <<endl;
}
} 
