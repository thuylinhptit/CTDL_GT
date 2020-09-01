#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll N = 1500;
ll mod = 1e9+7;
ll n, k, a[1500], F[1500][55];
 
int main (){
	
	int t;
	cin>>t;
	while( t-- ){
		cin>>n>>k;
		for( int i=1; i<=n ;i++ ){
			cin>>a[i];
		}
		for( int i=1; i<=n ; i++ ){
			a[i] %= k;
		}
		for( int i=1; i<=k-1; i++ ){
			F[1][i] -= mod;
		}
		F[1][a[1]] = 1;
		for( int i=2; i<=n ; i++ ){
			for( int j=0; j<=k-1; j++ ){
				F[i][j] = max(F[i-1][j], F[i-1][(j-a[i]+k)%k] + 1);
			}
		}
		cout<<F[n][0]<<endl;
	}
}

