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
void chuanhoa(string s){
    stringstream a(s);
		string word;
		vector <string> v;
		while(a>>word){
			transform(word.begin(), word.end(),word.begin(),:: tolower);
			word[0]-=32;
			v.push_back(word); 
		}
    for(int i=0;i<v.size();i++){
        cout << v[i] <<" ";
    }
}
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
	output << sv.ma <<" "; 
	chuanhoa(sv.HoTen) ;
	output <<" "<< sv.lop <<" "<< sv.ns << "  "<< fixed << setprecision(2) << sv.GPA << "\n" ;
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