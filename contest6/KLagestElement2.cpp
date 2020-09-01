#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10003];
ll dd[10003]={0};
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n,k;
		ll check = 0;
		cin>>n>>k;
		for( ll i=0; i<n ; i++ ){
			cin>>a[i];
		}
		for( ll i=0; i<n ; i++ ){
			dd[a[i]]=1;
		}
		for( ll i=0; i<n ; i++ ){
			if( dd[a[i]] == 1 ){
				if( a[i] == k ) {
					cout<<k<<endl;
					check=1;
					break;
				}
			}
			
		}
		if( check == 0 ) cout<<"-1"<<endl;
		
	}
}

