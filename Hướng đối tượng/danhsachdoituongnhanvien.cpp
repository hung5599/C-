#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string ma,HoTen,gt,ns,dc,mst,khd;
	public:
		NhanVien(){
			string ma= " ";
			string HoTen=" ";
			string gt=" ";
			string ns=" ";
            string dc=" ";
            string mst=" ";
            string khd=" ";
		};
		friend istream &operator >> (istream &input,NhanVien&);
		friend ostream &operator << (ostream &output, NhanVien);
};
int r=0;
int n=1;
istream &operator >> (istream &input,NhanVien&sv){
    if(r==0) cin.ignore(1);
	string s = to_string(n);
    while(s.size()<5) s= "0"+s;
    sv.ma = s;
    n++;
	getline(input,sv.HoTen);
	input >> sv.gt >> sv.ns;
    cin.ignore(1);
    getline(input,sv.dc);
    input >> sv.mst >> sv.khd;
	return input;
}
ostream &operator << (ostream &output, NhanVien sv){
	
	if (sv.ns[2]!='/') sv.ns= "0"+sv.ns;
	if (sv.ns[5]!='/') sv.ns.insert(3,"0");
	output << sv.ma <<" " << sv.HoTen<<" " << sv.gt<<" " << sv.ns <<" " << sv.dc<<" " << sv.mst<<" " << sv.khd << "\n";
	return output;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}