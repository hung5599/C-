#include <iostream> 
#include <cmath> 
using namespace std; 
int main() { 
	int t;
	cin >> t; 
	while (t --) { 
		long long a,b,c;
		cin >> a >> b>> c; 
		cout << ( (a%c) * (b%c) )%c << endl; 
	} 
		return 0; 
}