#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
vector<int> a;

void Solve(){
    int s =0;
    vector<int> dp(n,0);
    for(int i = 0 ; i < n ; i++){
        int t = 0;
        for(int j = i - 1 ; j >= 0 ; j--){
            if( a[i] > a[j]){
                t = max(t,dp[j]);
            }
        }
        dp[i] = t + a[i];
        s = max(s,dp[i]);
    }
    cout << s << endl;
}
int main(){
    int t;
    cin >> t;
    
    while( t-- ){
        cin >> n ; 
		a.resize(n);
    	for(int i = 0 ; i < n ; i++) cin >> a[i];
        Solve();
    }
    return 0;
}
