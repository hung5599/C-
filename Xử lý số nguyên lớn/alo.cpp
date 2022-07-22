#include<bits/stdc++.h>
using namespace std;
#include <string.h>
long long find( string s , long long b){
    long long res =0;
    for(int i=0;i< s.size();i++){
        res = res*10 + s[i] - '0';
        res %= b; 
    }
    return res;
}
long long powmod(long long a,long long b,long long m){
    long long res=1;
    while (b){
        if(b%2==1){
        res*=a;
        res %= m;
        }
        a*=a;
        a%= m;
        b/=2;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--){
        string s;
        cin >> s;
        long long b,m;
        cin >> b >> m;
        long long du = find(s,m);
        cout << powmod(du,b,m) ;
        cout << "\n";
    }
}