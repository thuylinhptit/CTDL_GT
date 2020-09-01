#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll Mod=1e9+7;
ll MAX = 1e9+7;
ll a[1000000];

int main (){
	ll T;
	cin>>T;
	while( T-- ){
		int n;
		ll s=0;
		cin>>n;
		for( ll i=0; i<n ;i++ ) cin>>a[i];
		sort(a, a+n );
		for( ll i=0; i<n ;i++ ){
			s= ( s+ (a[i]%Mod) * (i%Mod))%Mod;
		}
		cout<<s<<endl;
		
	}
}


