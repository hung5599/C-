#include<bits/stdc++.h>
using namespace std;
void dao(int a[],int n){
	int l=0;
	int r=n-1;
	while (l<r){
		int temp=a[l];
		a[l]=a[r];
		a[r]=temp;
		l++;
		r--;
	}
}
void solve(string x1,string x2){
	int n1=x1.size();
	int n2=x2.size();
	if (n1<n2) {
		swap(x1,x2);
		swap(n1,n2);
	}
	int a[n1],b[n2],c[n1];
	vector <int > v;
	for (int i=0;i<n1;i++) {
	a[i]= x1[i] -'0';
	c[i]=a[i];
	}
	for (int j=0;j<n2;j++) b[j]= x2[j] -'0';
	dao(c,n1);
	dao(b,n2);
	for (int k=n2;k<n1;k++) b[k]=0;
	int nho=0;
	for(int i=0;i<n1;i++){
		int t= (c[i] + b[i] + nho)%10;
		nho = (c[i] + b[i] + nho)/10;
		v.push_back(t);
	}
	if(nho!=0) {
				v.push_back(nho);
	}
	for (int i=v.size()-1;i>=0;i--){
		cout << v[i];
	} 
}
string lonnhat(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='5') s[i]='6';
    }
    return s;
}
string nhonhat(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='6') s[i]='5';
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--){
        string x1,x2;
        cin >> x1 >> x2;
        string a = nhonhat(x1);
        string b = nhonhat(x2);
        string c = lonnhat(x1);
        string d = lonnhat(x2);
        solve(a,b);
        cout << " ";
        solve(c,d);
        cout << "\n";
    }
}