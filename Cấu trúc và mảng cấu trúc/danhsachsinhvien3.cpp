





#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
    string masv,ten,lop,ns;
    float gpa;
};
int r=0;
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
void nhap(SinhVien ds[],int n){
for (int i = 0; i < n; i++)
{   
    if(r==0) cin.ignore(1);
    getline(cin,ds[i].ten);
    getline(cin,ds[i].lop);
    getline(cin,ds[i].ns);
    cin >> ds[i].gpa;
    string s = to_string(i+1);
        while (s.size()<3)
        {
            s = "0" +s;
        }
        ds[i].masv = "B20DCCN" + s;
}
}
void sapxep(SinhVien ds[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(ds[i].gpa < ds[j].gpa) swap(ds[i],ds[j]);
        }
    }
}
void in(SinhVien ds[],int n){
    for (int i = 0; i < n; i++)
    {
        if (ds[i].ns[1]=='/') ds[i].ns = "0"+ds[i].ns;
	    if (ds[i].ns[4]=='/') ds[i].ns.insert(3,"0");
        cout << ds[i].masv << " ";
        chuanhoa(ds[i].ten) ;
        cout << ds[i].lop <<" " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    
}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}