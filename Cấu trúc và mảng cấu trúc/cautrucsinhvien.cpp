#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma;
	string ten;
	string lop;
	string ns;
	float GPA;
};
void nhap(SinhVien &a){
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.ns);
	cin >> a.GPA;
	a.ma="B20DCCN001";
	if (a.ns[1]=='/') a.ns = "0"+a.ns;
	if (a.ns[4]=='/') a.ns.insert(3,"0");
}
void in(SinhVien &a){
	cout << a.ma <<" "<< a.ten << " "<< a.lop << " "<< a.ns <<" ";
	cout << fixed << setprecision(2) << a.GPA;
	}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

