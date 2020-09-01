#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1E9+7;
int main (){
	ll n;
	ll sum=0;
	cin>>n;
	ll a[n+5];
	priority_queue < ll, vector<ll>, greater<ll> > q;
	for( ll i=0; i<n ; i++ ){
		cin>>a[i];
		q.push(a[i]);
	}
	while( q.size() > 1 ){
		ll a1= q.top();
		q.pop();
		ll a2= q.top();
		q.pop();
		ll a3 = (a1%mod + a2%mod)%mod;
		sum = (sum%mod + a3%mod)%mod;
		q.push(a3);
	}
	cout<<sum<<endl;
}

