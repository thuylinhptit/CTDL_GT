#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int a[1001][1001];
int dp[1001][1001];
int main (){
	int t;
	cin>>t ;
	while( t-- ){
		cin>>n>>m;
		for( int i=1; i<=n ;i++ ){
			for( int j=1; j<=m ; j++ ){
				cin>>a[i][j];
			}
		}
		for( int i=0; i<=n ;i++ ){
			for( int j=0; j<=m ; j++ ){
				if( i == 0 ||j == 0 ) dp[i][j] = 1e18;
				else if( i == 1 && j == 1 ) dp[i][j] = a[i][j];
				else dp[i][j] = min ( dp[i-1][j-1], min( dp[i-1][j], dp[i][j-1] )) + a[i][j];
			}
		}
		cout<<dp[n][m]<<endl;
	}
}

