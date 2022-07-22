#include <iostream> 
#include <math.h>
#include <set>
using namespace std; 
int SNT(long long n) { 
	if(n < 2) return 0; 
	for(long long i = 2; i <= sqrt(n); i++) { 
		if(n%i==0) return 0; 
	} 
	return 1; 
} 
int main() { 
	int t;  
	cin >> t; 
	while(t--) {
	long long n; 
	cin >> n; 
	set<int > st;
	int count=0;
	for(long long i = 2; i <= sqrt(n); i++) { 
	while(n%i==0 && SNT(i)) { 
	count++;
	st.insert(i);  
	if(i != n/i && SNT(n/i)) {
		count ++;
		st.insert(n/i); 	
	} 
	n/=i; 
		}	 
	}
	if (count ==3 && count==st.size()) cout <<1;
	else cout <<0;
	cout << endl; 
	} 
}