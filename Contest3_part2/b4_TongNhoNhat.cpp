#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		ll n;
		cin>>n;
		ll a[n];
		for( ll i=0; i<n ; i++ ) cin>> a[i];
		sort(a,a+n);
		ll s1=0, s2=0;
		for( ll i=0; i<n ; i++ ){
			if( i&1 ){
				s1 = s1*10 + a[i];
			}
			else s2 = s2*10 + a[i];
		}
		cout<< s1+s2<<endl;
	}
}

