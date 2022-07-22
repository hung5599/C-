#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
		string s;
		cin >> s;
		int temp=0;
		set <long long> st;
		vector <long long> v;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9') {
				temp = temp*10 +s[i]-'0';
			}
			else{
				st.insert(temp);
				temp=0;
			}
		}
		st.insert(temp);
		for(int x:st){
			v.push_back(x);
		}
		cout << v[v.size()-1] <<" \n";
	}
}
