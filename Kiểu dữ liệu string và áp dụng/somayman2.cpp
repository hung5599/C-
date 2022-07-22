#include<bits/stdc++.h>
using namespace std;
long long tong(string s){
    long long res=0;
    for(int i=0;i<s.size();i++){
        res = res + s[i]-'0';
    }
    return res; 
}
int main(){
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin,s);
        while(s.size()>1){
            long long m = tong(s);
            s = to_string(m);
        }
        if(s[0]-'0'==9) cout << 1;
        else cout << 0;
        cout << " \n"; 
    }

}