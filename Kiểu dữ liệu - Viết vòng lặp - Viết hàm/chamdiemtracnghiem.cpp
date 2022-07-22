#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	fflush(stdin);
	while (t--){
		int n;
		cin >> n;
		string s1= "ABBADCCABDCCABD";
		string s2= "ACCABCDDBBCDDBB";
		string s;
		getline(cin,s);
		stringstream a(s);
		string word;
		int i=0;
		int count=0;
		while (a >> word){
			if (n==101) {
				string del ;
				del =s1[i];
				if ( word != del) count++;
				i++;
			}
			if (n==102) {
				string del;
				del=s2[i];
				if (word!=del) count++;
				i++;
			}
		}
		double diem;
		diem = (double ) 10 - ((double)2/3)*count;
		cout << fixed << setprecision(2) << diem ;
		cout << "\n";
	}	
	}
	


