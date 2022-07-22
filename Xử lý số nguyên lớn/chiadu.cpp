#include<bits/stdc++.h>
using namespace std;
long long powmode( string a, long long b, long long c){
    long long s=0;
    for(int i=0;i<a.size();i++){
        s= s*10 + b*(a[i]-'0');
        s%=c;
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        long long b,c;
        cin >> a >> b >> c;
        cout <<powmode(a,b,c) <<endl;
        
    }
}