#include <bits/stdc++.h> 
using namespace std;
void process(){
    string s;
    getline(cin,s);
    int n= s.size();
    int vt=-1;
    for(int i=n-2;i>=0;i--){
        if(s[i]> s[i+1]) {
            vt=i;
            break;
        }
    }
    int h=-1;
    for(int i=n-1;i>vt;i--){
        if(s[i]<s[vt]){
            if(h==-1) {
                h=i;
            }
            else if(s[i]>=s[h]){
                h=i;
            }
        }
    }
    if(vt==-1) cout << -1;
    else if(vt==0 && s[h]=='0') cout << -1;
    else if(h!=-1){
        swap(s[vt],s[h]);
        cout << s;
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--){
        process();
        cout <<"\n";
    }
} 