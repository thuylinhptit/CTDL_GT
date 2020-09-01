 #include<bits/stdc++.h>
#define ll long long

using namespace std;

ll a[10001];
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n;
		cin>>n;
		for( ll i=0; i<n ;i++ ) cin>>a[i];
		sort( a, a+n );
		ll l=0, r=n-1;
		while ( l < r ){
			cout<<a[r]<<" "<<a[l]<<' ';
			l++; r--;
		}
		if( l == r ) cout<<a[l]<<' ';
		cout<<endl;
	}
}

