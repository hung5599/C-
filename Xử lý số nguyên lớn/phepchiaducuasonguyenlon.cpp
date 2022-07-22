#include <bits/stdc++.h>
using namespace std;
long long reduceB(long long a, string  b) { //lay a mode b    
    long long mod = 0; //khoi tao mod la 0
    for (int i=0; i<b.length(); i++) //duyet cac chu so cua b
        mod = (mod*10 + b[i] - '0')%a;   
    return mod; // return modulo 
} 
int main(){
	int t;
	long long n;
	string s;
	cin >> t;
	cin.ignore(1);
	while (t--){
	cin >> s;
	cin.ignore(1);
	cin >> n;
	cout << reduceB(n,s);
	cout <<"\n";
	}
}
