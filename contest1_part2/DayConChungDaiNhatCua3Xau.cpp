#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll dp[101][101][101];
int n,m,l;
string a,b,c;


void Solve(){
    memset(dp,0,sizeof(dp));
    a = ' ' + a , b = ' ' + b, c = ' ' + c;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            for(int k = 1 ; k <= l ; k++){
                if( a[i] == b[j] && b[j] == c[k])
                    dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                else 
                    dp[i][j][k] = max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
            }
        }
    }
    cout << dp[n][m][l] <<endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        cin >> n >> m >> l;
    	cin >> a >> b >> c;
        Solve();
    }
    return 0;
}
