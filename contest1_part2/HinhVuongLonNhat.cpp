#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n,m;
int a[505][505], dp[505][505];
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n,m;
		cin>>n>>m;
		for( int i=0; i<n ; i++ ){
			for( int j=0; j<m ; j++ ){
				cin>>a[i][j];
				if( i==0 || j==0 ) dp[i][j] = a[i][j];
			}
		}
		int res=0;
		for( int i=1; i<n ;i++ ){
		for( int j=1; j<m ; j++ ){
			if( a[i][j] == 1 ){
				dp[i][j] = min( dp[i-1][j-1], min( dp[i-1][j], dp[i][j-1])) + 1;
			}
			else dp[i][j] = 0;
			res = max( res, dp[i][j] );
		}
	}
		cout<<res;
		cout<<endl;
	}
}

