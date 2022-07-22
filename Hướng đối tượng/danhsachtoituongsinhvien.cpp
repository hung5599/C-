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
int r=0;
int n=1;
istream &operator >> (istream &input,SinhVien&sv){
    if(r==0) cin.ignore(1);
	string s = to_string(n);
    while(s.size()<3) s= "0"+s;
    sv.ma ="B20DCCN" + s;
    n++;
	getline(input,sv.HoTen);
	input >> sv.lop >> sv.ns >> sv.GPA;
	return input;
}
ostream &operator << (ostream &output, SinhVien sv){

	if (sv.ns[2]!='/') sv.ns= "0"+sv.ns;
	if (sv.ns[5]!='/') sv.ns.insert(3,"0");
	output << sv.ma <<" "<< sv.HoTen <<" "<< sv.lop <<" "<< sv.ns << "  "<< fixed << setprecision(2) << sv.GPA << "\n" ;
	return output;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
