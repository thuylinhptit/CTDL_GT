#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,k;
const int N = 1e4 + 10;
int a[N];
void init(){
	for( int i=0; i<n ; i++ ) cin>> a[i];
}
void handle(){
	sort(a,a+n);
    ll res = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        int id = upper_bound(a,a+n,a[i] + k - 1) - a;
        res += 1LL*(id - 1 - i);
      // cout << i << ' ' << id << endl;
    }
    cout << max(res,(ll)0) << endl;
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		cin>>n>>k;
		init();
		handle();
	}
	
}

