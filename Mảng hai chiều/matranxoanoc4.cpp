#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int n ; 
	cin >> n;
	int a[20][20];
	int w=0;
	int b[w];
	vector<int> v;
	for(int i=0;i<n;i++){ 
		for(int j=0;j<n;j++){ 
			cin>>a[i][j];
			b[w]=a[i][j];
			w++;
		} 
	}
	sort(b,b+w);
	for(int i=0;i<w;i++){
		v.push_back(b[i]);
	}
	int h1=0,h2=n-1,c1=0,c2=n-1;
	int o=0;
	while(c1<=c2&&h1<=h2){
		for(int i=c1;i<=c2;i++){
			a[h1][i]=v[o];
			o++;
		}
		h1++;
		for(int i=h1;i<=h2;i++){
			a[i][c2]=v[o];
			o++;
		}
		c2--;
		if(c1<=c2){
			for(int i=c2;i>=c1;i--){
				a[h2][i]=v[o];
				o++;
			}
			h2--;
		}
		if(h1<=h2){
			for(int i=h2;i>=h1;i--){
				a[i][c1]=v[o];
				o++;
			}
			c1++;
		}
	}
		for(int i=0;i<n;i++){ 
		for(int j=0;j<n;j++){ 
			cout << a[i][j] << " ";
		}
		cout <<"\n"; 
	}
}