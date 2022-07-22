#include <bits/stdc++.h>
using namespace std;
long long  gcd(long long a,long long b){
	if (b==0) return a;
	else return gcd(b, a%b);
}
class PhanSo{
	private:
		long long tu ,mau;
	public:
		PhanSo(long long tu, long long  mau );
		friend ostream& operator << (ostream&in,PhanSo);
		friend istream& operator >> (istream&out ,PhanSo&);
		void rutgon();	
};
PhanSo::PhanSo(long long  tu,long long mau){
	this -> tu=tu;
	this -> mau=mau;
}
ostream& operator << (ostream& out ,PhanSo a){
	out << a.tu <<"/" << a.mau;
	return out ;
}
istream& operator >> (istream& in,PhanSo& a){
	in >> a.tu >> a.mau;
	return in;
}
void PhanSo::rutgon(){
	long long  h=gcd(tu,mau);
	tu/=h;
	mau/=h;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
