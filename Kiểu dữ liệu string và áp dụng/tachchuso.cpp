#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin,s);
        multiset <char> ms;
        vector <char> v;
        int tong=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9') tong+= s[i]-'0';
            ms.insert(s[i]);
        }
        for(char x : ms ){
            v.push_back(x);
        }
        for(int i=0;i<v.size();i++){
            if(v[i]<'0' || v[i]>'9')  cout<< v[i];
        }
        cout << tong <<"\n";

    }
}