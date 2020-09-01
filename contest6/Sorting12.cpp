#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N= 1e6+10;
ll a[N], b[N];
bool cmp( ll a, ll b ){
	return a>b ;
}
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n, m;
		cin>>n>>m;
		for( ll i=0; i<n ;i++ ) cin>>a[i];
		for( ll i=0; i<m ; i++ ) cin>>b[i];
		sort(a,a+n,cmp);
		sort(b,b+m);
		cout<<a[0]*b[0]<<endl;
	}
}

