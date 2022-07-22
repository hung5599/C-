#include<bits/stdc++.h>
using namespace std;
int check1 (vector <int> v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>=v[i+1]) {
            return 0;
            break;
        }
    }
    return 1;
}
int check2 (vector <int> v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]!=v[i+1]) {
            return 0;
            break;
        }
    }
    return 1;
}
int check3 (vector <int> v){
    if(v[0]!=v[1] || v[1]!=v[2] || v[0]!=v[2] || v[3]!=v[4] ) return 0;
    else return 1;
}
int check4 (vector <int> v){
    for(int i=0;i<v.size();i++){
        if(v[i]!= 6 && v[i]!=8 ) {
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    cin.ignore(1);
    while (n--)
    {
        string s;
        vector <int> v;
        cin >> s;
        for(int i=5;i<s.length();i++){
            if(s[i]!='.') {
                s[i]= s[i] -'0';
                v.push_back(s[i]);
            }
        }
        if(check1(v)||check2(v)||check3(v)||check4(v)) cout <<"YES";
        else cout << "NO";
        cout << "\n";
    }
    
}