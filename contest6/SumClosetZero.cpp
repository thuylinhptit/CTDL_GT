#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10005];
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll n;
		ll res = 9999999999;
		ll result;
		cin>>n;
		for( int i=0; i<n ; i++  ) cin>>a[i];
		for( int i=0; i<n-1 ; i++ ){
			for( int j=i+1; j<n ; j++ ){
				if( abs( a[i]+a[j] ) < res ){
					res = abs( a[i]+ a[j] );
					result = a[i]+a[j];
				}
			}
		}
		cout<<result<<endl;
	}
}

