#include<bits/stdc++.h>
#define ll long long

using namespace std;
const ll N= 1e5;
ll a[N], b[N];
ll n;
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n;
		cin>>n;
		for( ll i=0; i<n ;i++ ){
			cin>>a[i];
			b[i]=a[i];
		}
		//0 1 15 25 6 7 30 40 50
		sort( b, b+n ); // 0 1 6 7 15 25 30 40 50
		ll l=0, r=n-1;
		while( l<n && a[l] == b[l] ) l++;
		while( r>=0 && a[r] == b[r] ) r--;
		l= min( l, n-1);
		r= max( r, 0LL);
		cout<<l+1<<' '<<max(l,r)+1<<endl;
	}
}

