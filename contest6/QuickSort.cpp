#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> a;
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n;
		cin>>n;
		a.resize(n);
		for( ll i=0; i<n ; i++ ) cin>>a[i];
		sort( a.begin(), a.end() );
		for( ll i=0; i<n ; i++ ) cout<<  a[i]<< ' ';
		cout<< endl;
	}
}

