#include<bits/stdc++.h>
using namespace std;
int n,s;
vector <int> a;

void Solve(){
	vector <int> f(s+1,0);
	f[0] = 1;
	for( int i=1; i<=n ;i++ ){
		for( int j=s; j>=a[i] ; j-- ){
			if( !f[j] && f[j-a[i]] ) f[j] = 1;
		}
	}
	if( f[s] == 1 ) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main ()
{
	int t;
	cin>> t;
	while( t-- ){
		cin>>n>>s;
		a.resize(n+5);
		for( int i=0; i<n ;i++ ) cin>>a[i];
		Solve();
	}
}
