#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+8;
ll isPrime[N];
void sangNto(){
	for( ll i=0; i<=N ; i++ ){
		isPrime[i] = 0;
	}
	isPrime[0] = isPrime[1] = 1;
	for( ll i=2; i*i<=N ; i++ ){
		if( isPrime[i] == 0 ){
			for( ll j=i*i; j<=N; j+=i ){
				isPrime[j] = 1;
			}
		}
	}
}
int main (){
	ll t;
	sangNto();
	cin>>t;
	while( t-- ){
		ll check = 0;
		ll a;
		cin>>a;
		for( ll i=2; i<=a/2; i++ ){
			if( isPrime[i] == 0 && isPrime[a-i] == 0){
				cout<<i<<' '<<a-i;
				check=1;
				break;
			}
		}
		if( check == 0 ){
			cout<<"-1";
		}
		cout<<endl;
	}
}

