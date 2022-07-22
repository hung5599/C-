#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
    string masv,ten,lop,email;
    public:
    SinhVien(){
        this -> masv = masv;
        this -> ten =ten;
        this -> lop = lop;
        this -> email = email;
    }
    friend void sapxep(SinhVien ds[],int n);
    friend istream &operator >> (istream &in, SinhVien&);
    friend ostream &operator << (ostream &out, SinhVien);
};
istream &operator >> (istream &in, SinhVien &a){
    getline(in,a.masv);
    getline(in,a.ten);
    getline(in,a.lop);
    getline(in,a.email);
    return in;
}
ostream &operator << (ostream &out, SinhVien a){
    out << a.masv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
    return out;
}
void sapxep(SinhVien ds[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
                if(ds[i].lop > ds[j].lop) swap(ds[i],ds[j]);
                else if(ds[i].lop == ds[j].lop){
                    if(ds[i].masv > ds[j].masv) swap(ds[i],ds[j]);
                }
        }
    }
}
int main(){
    int n;
    cin >> n;
    cin.ignore(1);
    SinhVien ds[50];
    for(int i=0;i<n;i++) cin >> ds[i];
    sapxep(ds,n);
    for(int i=0;i<n;i++) cout << ds[i];
}