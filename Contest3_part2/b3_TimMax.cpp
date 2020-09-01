#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll Mod= 1e9+7;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		ll n;
		cin>>n;
		ll sum=0;
		ll a[n];
		for( ll i=0; i<n ; i++ ){
			cin>>a[i];
		}
		sort(a,a+n);
		for( ll i=0; i<n ; i++ ){
			sum = (sum + (a[i]%Mod) * (i%Mod) ) %Mod;
		}
		cout<<sum<<endl;
		
	}
}

