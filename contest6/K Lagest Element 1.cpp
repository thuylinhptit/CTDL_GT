#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10003];
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n,k;
		cin>>n>>k;
		for( ll i=0; i<n ;i++ ) cin>>a[i];
		sort( a, a+n );
		for( ll i=n-1; i>=0; i-- ){
			if( k !=0 ){
				cout<<a[i]<<' ';
				k--;
			}
		}
		cout<<endl;
	}
}

