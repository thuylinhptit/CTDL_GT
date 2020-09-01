#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> a;
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n,k;
		ll res = 0;
		cin>>n>>k;
		a.resize(n);
		for( ll i=0; i<n ; i++ ) cin>>a[i];
		sort( a.begin(), a.end() );
		for( ll i=0; i<n ; i++ ){
			ll l=lower_bound(a.begin()+i+1, a.end(), k-a[i]) - a.begin();
			cout<<l<<endl;
			ll r=upper_bound(a.begin()+i+1, a.end(), k-a[i]) - a.begin();
			cout<<r<<endl;
			res += 1LL*(r-l);
		}
		cout<<res<<endl;
	}
}

