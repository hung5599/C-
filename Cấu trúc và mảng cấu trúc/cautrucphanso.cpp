#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &p){
		cin >> p.tu >> p.mau;
	}
long long UCLN (long long a ,long long  b){
    if (b==0) return a;
    else return UCLN(b,a%b);
}
void rutgon(PhanSo &p){
	long long l= UCLN(p.tu,p.mau);
	p.tu/=l;
	p.mau /=l;
}
void in(PhanSo &p){
	cout << p.tu << "/" << p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}