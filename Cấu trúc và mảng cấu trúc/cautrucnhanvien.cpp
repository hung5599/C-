#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten;
	string gt;
	string ntn;
	string dc;
	string sdt;
	string khd;
};
	void nhap(NhanVien &A){
		getline(cin,A.ten);fflush(stdin);
		getline(cin,A.gt);fflush(stdin);
		getline(cin,A.ntn);fflush(stdin);
		getline(cin,A.dc);fflush(stdin);
		getline(cin,A.sdt);fflush(stdin);
		getline(cin,A.khd);
	}
	void in(NhanVien &A){
		cout << "00001"<<" "<< A.ten <<" "<< A.gt << " " << A.ntn << " "  << A.dc << " " << A.sdt <<" " <<A.khd ;
	}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}