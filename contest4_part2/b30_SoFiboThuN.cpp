#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll const mod = 1e9+7;
ll a[1001];
ll fibo(){
	a[0]=0;
	a[1]=1;
	for( ll i=2; i<=1000 ; i++ ){
		a[i] = (a[i-1] + a[i-2])%mod;
	}
}
int main (){
	ll t;
	cin>>t;
	fibo();
	while( t-- ){
		ll n;
		cin>>n;
		cout<<a[n]<<endl;
	}
}

