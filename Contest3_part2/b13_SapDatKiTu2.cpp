#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll k;
string s;
ll a[257];

void dem (){
	cin>>k>>s;
	for( ll i=0; i<257; i++ ) a[i]=0;
	for( ll i=0; i<s.size(); i++ ) a[s[i]]++;
}

bool res(){
	sort(a, a+257);
	ll max = a[256];
	ll vt=0;
	for( ll i=1; i<max; i++ ){
		vt = vt + k;
		if( vt > s.size() ) return false;
	}
	return true;
}
int main (){
	ll n;
	cin>>n;
	while( n-- ){
		dem();
		if( res() == true ) cout<<"1";
		else cout<<"-1";
		cout<<endl;
	}
}

