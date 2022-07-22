#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma,HoTen,lop,ns;
		float GPA;
	public:
		SinhVien(){
			string ma;
			string HoTen=" ";
			string lop=" ";
			string ns=" ";
			GPA=0;
		};
		friend istream &operator >> (istream &input,SinhVien&);
		friend ostream &operator << (ostream &output, SinhVien);
};
istream &operator >> (istream &input,SinhVien&sv){
	sv.ma="B20DCCN001";
	getline(input,sv.HoTen);
	input >> sv.lop >> sv.ns >> sv.GPA;
	return input;
}
ostream &operator << (ostream &output, SinhVien sv){
	if (sv.ns[2]!='/') sv.ns= "0"+sv.ns;
	if (sv.ns[5]!='/') sv.ns.insert(3,"0");
	output << sv.ma <<" "<< sv.HoTen <<" "<< sv.lop <<" "<< sv.ns << "  "<< fixed << setprecision(2) << sv.GPA ;
	return output;
}
/*void SinhVien::xuat(){
		if (ns[2]!='/') ns= "0"+ns;
	if (ns[5]!='/') ns.insert(3,"0");
	cout << "B20DCCN001"<< " " <<HoTen << " " << lop << " " << ns<<" "<< fixed << setprecision(2) << GPA;
}*/
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
