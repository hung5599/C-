#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
	cin.ignore(1);
    while (t--){
		string s;
		cin >> s;
		int du=0;
		for(int i=s.size()-1;i>=0;i--){
			if(s[s.size()-1-i]=='1'){
			if(i%4==0) du+=1;
			else if(i%4==1) du+=2;
			else if(i%4==2) du+=4;
			else if(i%4==3) du+=3;
			}
		}
		if(du%5==0) cout << "Yes"<<endl;
		else cout <<"No" <<endl;

	}
}