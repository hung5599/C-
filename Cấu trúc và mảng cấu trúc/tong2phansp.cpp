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
 
void in(PhanSo p){
	cout << p.tu << "/" << p.mau << endl;
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
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
