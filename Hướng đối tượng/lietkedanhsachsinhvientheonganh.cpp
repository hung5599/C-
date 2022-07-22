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
    friend string getmasv(SinhVien&a){
        return a.masv;
    }
    friend string getlop(SinhVien&a){
        return a.lop;
    }
};
 string chuanhoa(string s){
        string k;
        if( s =="CONG NGHE THONG TIN") k= "CN";
        else if (s == "AN TOAN THONG TIN") k= "AT";
        else if (s == "VIEN THONG") k= "VT";
        else if (s == "DIEN TU") k= "DT";
        else if (s == "KE TOAN") k = "KT";
        return k;
    }
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
        string s;
        getline(cin,s);
        transform(s.begin(), s.end(),s.begin(),:: toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" <<"\n";
        string c = chuanhoa(s); //KT
        for(int i=0;i<n;i++){
            string l = getmasv(ds[i]);
            string hung = getlop(ds[i]);
            if(c == "AT"|| c == "CN"){
            if(c[0]==l[5]&&c[1]==l[6]&&hung[0]!='E') cout << ds[i];
            }
            else{
             if ( c[0]==l[5]&&c[1]==l[6] ) cout  << ds[i];
            }
        }
    }
}