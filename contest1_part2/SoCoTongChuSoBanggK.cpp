#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n,s;
int dp[505][50005];
int mod = 1e9+7;

void Handle(){
	memset(dp,0,sizeof(dp));
    dp[0][0] = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= s ; j++){
            int x = 0, y = j-1;
				if (i == 1) { 
					x = 1;
					y = j;    
				}
				for (; x <= y && x <= 9; x++) 
					dp[i][j] += dp[i-1][j-x] , dp[i][j] %= mod;
		}
    }
    cout << dp[n][s] << '\n';
}
int main (){
	int t;
	cin>>t;
	while ( t-- ){
		cin>>n>>s;
		Handle();
	}
}

