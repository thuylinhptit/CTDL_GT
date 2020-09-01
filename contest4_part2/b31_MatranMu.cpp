#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
ll const mod = 1e9+7;
struct matran{
	ll c[15][15];
};

matran operator* ( matran a, matran b ){
	matran res;
	for( int i=0; i<n ; i++  ){
		for( int j=0; j<n ; j++ ){
			res.c[i][j] = 0;
			for( int x=0; x<n ; x++ ){
				res.c[i][j] += (a.c[i][x]*b.c[x][j])%mod;
			}
			res.c[i][j] %= mod;
		}
	}
	return res;
}

matran Matranmu( matran a, ll k ){
	if( k == 1 ) return a;
	matran res = Matranmu(a,k/2);
	if( k%2 == 0 ) return res*res;
	else return res*res*a;
}

ll Handle(){
	cin>>n>>k;
	matran a;
	for( int i=0; i<n ; i++ ){
		for( int j=0; j<n ; j++ ){
			cin>>a.c[i][j];
		}
	}
	a = Matranmu(a,k);
	for( int i=0; i<n ; i++ ){
		for( int j=0; j<n ; j++ ){
			cout<<a.c[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		Handle();
	}
}

