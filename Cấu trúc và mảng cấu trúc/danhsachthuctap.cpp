#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
    string masv,ten,lop,email,dn;
    int stt;
};
void nhap(SinhVien ds[],int n){
for (int i = 0; i < n; i++)
{   ds[i].stt = i+1;
    getline(cin,ds[i].masv);
    getline(cin,ds[i].ten);
    getline(cin,ds[i].lop);
    getline(cin,ds[i].email);
    getline(cin,ds[i].dn);
}
}
void sapxep(SinhVien ds[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(ds[i].masv > ds[j].masv) swap(ds[i],ds[j]);
        }
    }
}
void in(SinhVien ds[],int n, string s){
    for (int i = 0; i < n; i++)
    {
        if(ds[i].dn == s){
        cout << ds[i].stt <<" " << ds[i].masv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].email << " " << ds[i].dn << "\n" ; 
        }
}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    cin.ignore(1);
    nhap(ds, N);
    sapxep(ds,N);
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin,s);
        in(ds, N,s);
    }
    return 0;
}