#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	ll k;
	string a,b;
	cin>>k>>a>>b;
	vector <ll> ans;
	ll n=0, m=0;
	for( ll i=0; i<a.size() ; i++ ){
		n = n*k + (a[i]-'0'); 
	}
	for( ll i=0; i<b.size(); i++ ){
		m = m*k + ( b[i] - '0' );
	}
	ll res = n+m;
	while( res ){
		ans.push_back( res%k );
		res/=k;
	}
	for( ll i=ans.size()-1; i>=0; i-- ){
		cout<<ans[i];
	}
}

