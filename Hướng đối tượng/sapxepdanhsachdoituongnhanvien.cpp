#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string ma,HoTen,gt,ns,dc,mst,khd;
	public:
        long long kq;
		NhanVien(){
			string ma= " ";
			string HoTen=" ";
			string gt=" ";
			string ns=" ";
            string dc=" ";
            string mst=" ";
            string khd=" ";
            long long kq=0;
		};
        friend void sapxep();
        friend long long chuyendoi(string );
		friend istream &operator >> (istream &input,NhanVien&);
		friend ostream &operator << (ostream &output, NhanVien);
};
long long chuyendoi(string s){
    vector<int> v;
    for(int i=0;i<s.size();i++){
        if (s[i]>='0'&&s[i]<= '9'){
            int k= s[i]-'0';
            v.push_back(k);
        }
    }
    long long h= v[4]*10000000 + v[5]*1000000 + v[6]*100000 + v[7]*10000 + v[0]*1000 + v[1]*100 + v[2]*10 + v[3];
    return h;
    }
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
    if (sv.ns[2]!='/') sv.ns= "0"+sv.ns;
	if (sv.ns[5]!='/') sv.ns.insert(3,"0");
    sv.kq = chuyendoi(sv.ns);
	return input;
}
void sapxep(NhanVien ds[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++){
            if(ds[i].kq >ds[j].kq) swap(ds[i],ds[j]);
        }
    }
    
}
ostream &operator << (ostream &output, NhanVien sv){
	output << sv.ma <<" " << sv.HoTen<<" " << sv.gt<<" " << sv.ns <<" " << sv.dc<<" " << sv.mst<<" " << sv.khd << "\n";
	return output;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}