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
    friend istream &operator >> (istream &in, SinhVien&);
    friend ostream &operator << (ostream &out, SinhVien);
    friend string getlop(SinhVien&a){
        return a.lop;
    }
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
int main(){
    int n;
    cin >> n;
    cin.ignore(1);
    SinhVien ds[1000];
    for(int i=0;i<n ;i++){
        cin >> ds[i];
    }
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--){
        int t;
        cin >> t;
        cout << "DANH SACH SINH VIEN KHOA " << t << ":" <<"\n";
        t-=2000;
        for(int i=0;i<n;i++){
            string m = getlop(ds[i]);
            int h= (m[1]-'0')*10 + (m[2] - '0');
            if(t==h) cout << ds[i];
            }
        }
    }