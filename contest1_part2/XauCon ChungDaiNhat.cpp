#include<bits/stdc++.h>
using namespace std;
string a,b;
int f[1005][1005];
void Solve(){
	int n = a.size();
	int m = b.size();
	a = ' ' + a;
	b = ' ' + b;
	
	for( int i=1; i<=n ;i++ ){
		for( int j=1; j<=m ; j++ ){
			if( a[i] == b[j] ) f[i][j] = f[i-1][j-1] + 1;
			else f[i][j] = max( f[i-1][j], f[i][j-1] );
		}
	}
	cout<<f[n][m];
}
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		cin>>a>>b;
		Solve();
		cout<<endl;
	}
}
