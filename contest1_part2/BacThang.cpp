#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n,k;
ll mod = 1e9 + 7;
void Solve(){
    vector<ll> dp(n+1,0);
    dp[0] = 1; 
    for(int i = 1 ; i <= n ; i++){
        for(int j = i - 1 ; j >= max(i-k,0) ; j-- ){
            dp[i] = (dp[i] + dp[j])%mod;
        }
    }
    cout << dp[n] << '\n';
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		cin>>n>>k;
		Solve();
	}
}

