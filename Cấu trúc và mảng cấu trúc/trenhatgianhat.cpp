#include<bits/stdc++.h>
using namespace std;
struct person{
    string ten, ns ;
    long long kq;
};
int r=0;
long long chuyendoi(string s){
    vector<int> v;
    for(int i=0;i<s.size();i++){
        if (s[i]>='0'&&s[i]<= '9'){
            int k= s[i]-'0';
            v.push_back(k);
        }
    }
    long long h= v[4]*10000000 + v[5]*1000000 + v[6]*100000 + v[7]*10000 + v[2]*1000 + v[3]*100 + v[0]*10 + v[1];
    return h;
}
void nhap(person ps[],int n){
    for(int i=0;i<n;i++){
    if(r==0) {cin.ignore(1);r++;}
    cin >> ps[i].ten >> ps[i].ns;
    ps[i].kq = chuyendoi(ps[i].ns);
    }
}
void sapxep(person ps[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(ps[i].kq < ps[j].kq) swap(ps[i],ps[j]);
        }
    }
}
void in(person ps[],int n){
    cout << ps[0].ten <<"\n"<< ps[n-1].ten;
}
int main(){
    int n;
    cin >> n;
    struct person ps[100];
    nhap(ps,n);
    sapxep(ps,n);
    in(ps,n);
}