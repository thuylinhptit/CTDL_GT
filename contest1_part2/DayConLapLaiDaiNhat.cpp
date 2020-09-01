#include <bits/stdc++.h>
#define ll long long 

using namespace std;

string a;
int n;
ll dp[1000][1000];

void Solve(){
    a = ' ' + a; 
    ll s = 0;
    memset(dp,0,sizeof(dp));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(a[i] == a[j] && i != j) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    cout << dp[n][n] << '\n';
}
int main(){
    int t;
    cin >> t; 
    while( t-- ){
        cin >> n >> a ;
        Solve();
    }
    return 0;
}
