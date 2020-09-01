#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5;
ll a[N], b[N],n,m;
ll dda[N], ddb[N];
int main (){
	int t;
	cin>>t;
	while( t-- ){
		cin>>n>>m;
		for( int i=0; i<n ;i++ ) cin>>a[i];
		for( int i=0; i<m ;i++ ) cin>>b[i];
		for( int i=0; i<1e5 ; i++ ) dda[i] = ddb[i] = 0;
		for( int i=0; i<n ;i++ ) dda[a[i]]=1;
		for( int i=0; i<m ;i++ ) ddb[b[i]]=1;
		for( int i=0; i<1e5 ; i++ ) {
			if( dda[i] == 1 || ddb[i]==1 ) cout<<i<<' ';
		}
		cout<<endl;
		for( int i=0; i<1e5 ; i++ ) {
			if( dda[i] == 1 && ddb[i]==1 ) cout<<i<<' ';
		}
		cout<<endl;
	}
}

