#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string HoTen,gt,ns,dc,sdt,nlv;
	public:
		NhanVien(){
			string HoTen=" ";
			string gt=" ";
			string ns=" ";
			string dc=" ";
			string sdt=" ";
			string nlv=" ";
		};
		void nhap();
		void xuat();
};
void NhanVien::nhap(){
	getline(cin,HoTen);
	getline(cin,gt);
	getline(cin,ns);
	getline(cin,dc);
	getline(cin,sdt);
	getline(cin,nlv);
}
void NhanVien::xuat(){
	cout << "00001"<< " " <<HoTen << " " << gt << " " << ns<<" "<< dc << " " << sdt << " " << nlv ;
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
