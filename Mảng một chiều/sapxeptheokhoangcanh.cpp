#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
		int n,k;
        vector < pair<int,int> > v;
		cin >> n >> k;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
            pair <int ,int > p = make_pair(a[i],abs(k-a[i]));
            v.push_back(p);
		}
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){ 
            if(v[i].second>=v[j].second)swap(v[i],v[j]);
            }
        }
        for(int i=0;i<n;i++){
            cout << v[i].first << " ";
        }
		cout << endl;
	}
}
