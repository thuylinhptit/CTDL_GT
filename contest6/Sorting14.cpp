#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n;
		cin>>n;
		ll a[n+9];
		ll b[n+9]={0};
		for( ll i=0; i<n ; i++ ) cin>>a[i];
		ll l = *min_element(a,a+n);
		ll r= *max_element(a,a+n);
		ll d=0;
		for( ll i=0; i<n ; i++ ) b[a[i]]=1;
		for( ll i=l+1; i<r ; i++ ){
			if( b[i] == 0 ) d++;  
		} 
		cout<<d<<endl;
	}
}

