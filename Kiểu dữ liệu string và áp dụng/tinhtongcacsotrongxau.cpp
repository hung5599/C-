#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
		string s;
		cin >> s;
		int tong=0;
		int temp=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9') {
				temp = temp*10 +s[i]-'0';

			}
			else{
				tong+= temp;
				temp=0;
			}
		}
		tong+=temp;
    	cout << tong <<  endl;
	}
}
