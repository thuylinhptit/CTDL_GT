#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N =1e6+10;
ll a[N];
ll dd[N];
int main ()
{
	ll t;
	cin>>t;
	while( t-- ){
		ll n,m;
		cin>>n>>m;
		ll t=n+m;
		for( ll i=0; i<t ; i++) cin>>a[i];
		sort( a, a+t );
		for( ll i=0; i<t; i++) cout<<a[i]<<' ';
		cout<<endl;
	}
}
