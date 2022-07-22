#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
struct PhanSo{
	ll tu, mau;
};
 
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}
 
void rutgon(PhanSo &p){
	ll l = gcd(p.tu, p.mau);
	p.tu /= l;
	p.mau /= l;
}
PhanSo tong(PhanSo a, PhanSo b){
	ll mc = lcm(a.mau, b.mau);
	a.tu = mc / a.mau * a.tu;
	b.tu = mc / b.mau * b.tu;
	a.tu += b.tu;
	a.mau = mc;
	rutgon(a);
	return a;
}
void process(PhanSo &p,PhanSo &q){
    PhanSo C;
    C = tong(p,q);
    C.tu*=C.tu;
    C.mau*=C.mau;
    rutgon(C);
    cout << C.tu << "/" <<C.mau << " ";
    PhanSo D;
    D.tu= p.tu * q.tu *C.tu;
    D.mau= p.mau * q.mau *C.mau;
    rutgon(D);
    cout << D.tu << "/" <<D.mau << " ";
    cout << "\n";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}