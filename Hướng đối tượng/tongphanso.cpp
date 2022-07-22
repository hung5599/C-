#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
/*ll UCLN( ll a,ll b){
	if(b==0) return a;
	else return (b,a%b);
}*/
class PhanSo{
	private: 
		ll tu,mau;
	public:
		PhanSo (ll a,ll b){
			this -> tu = a;
			this -> mau= b;
		};
		friend PhanSo operator + (PhanSo,PhanSo);
		friend istream &operator >> (istream &input , PhanSo &);
		friend ostream &operator << (ostream &output , PhanSo );
};
istream &operator >> (istream &input , PhanSo &ps){
	input >> ps.tu ;
	input >> ps.mau;
	return input;
}
PhanSo operator+(PhanSo p,PhanSo q){
	PhanSo kq(10,10);
	kq.tu= (p.tu*q.mau + q.tu*p.mau);
	kq.mau= p.mau*q.mau;
	ll h= __gcd(kq.tu,kq.mau);
	kq.tu/= h;
	kq.mau/= h;
	return kq;
}
ostream &operator << (ostream &output , PhanSo ps ){
	output << ps.tu << "/"<< ps.mau << " " ;
	return output;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}