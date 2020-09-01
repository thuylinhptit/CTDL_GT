#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e7+10;
string a[N];
pair <ll, ll> cnt[10];
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n;
		cin>>n;
		for( ll i=0; i<n ; i++ ) cin>>a[i];
		for( ll i=0; i<=10; i++ ){
			cnt[i].first=0;
			cnt[i].second=i;
		}
		for( ll i=0; i<n ; i++){
			for( ll j=0; j<a[i].length(); j++){
				cnt[a[i][j] - '0' ].first++;
			}
		}
		for( ll i=0; i<=10; i++ ){
			if( cnt[i].first != 0 ) cout<<cnt[i].second<<' ';
		}
		cout<<endl;
	}
}

