#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore(1);
	while(t--){
		string s;
		cin >> s;
		vector <char> v;
		for(int i=0;i<s.size();i++){
		if(s[i]=='a'||s[i]=='b'||s[i]=='c'||s[i]=='A'||s[i]=='B'||s[i]=='C') v.push_back('2');
		if(s[i]=='d'||s[i]=='e'||s[i]=='f'||s[i]=='D'||s[i]=='E'||s[i]=='F') v.push_back('3');
		if(s[i]=='g'||s[i]=='h'||s[i]=='i'||s[i]=='G'||s[i]=='H'||s[i]=='I') v.push_back('4');
		if(s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='J'||s[i]=='K'||s[i]=='L') v.push_back('5');
		if(s[i]=='m'||s[i]=='n'||s[i]=='o'||s[i]=='M'||s[i]=='N'||s[i]=='O') v.push_back('6');
		if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S') v.push_back('7');
		if(s[i]=='t'||s[i]=='u'||s[i]=='v'||s[i]=='T'||s[i]=='U'||s[i]=='V') v.push_back('8');
		if(s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z'||s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z') v.push_back('9');
	    }
		int kt=1;
		for(int i=0;i<(v.size())/2;i++){
		if(v[i]!=v[v.size()-1-i]) {
			kt=0;
			break;
			}
		}
		if(kt==1) cout <<"YES";
		else cout <<"NO";
		cout <<"\n";
	}
}