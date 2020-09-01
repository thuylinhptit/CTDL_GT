#include <bits/stdc++.h>
#define ll long long 

using namespace std;

ll n;
vector<ll> a;

void Handle(){
    vector<ll> dp(n,0);
	vector<ll> dr(n,0);
    for(ll i = 0 ; i < n ; i++){
        ll t = 0;
        for(ll j = i - 1 ; j >= 0 ; j--){
            if( a[i] > a[j]) t = max(t,dp[j]);
        }
        dp[i] = t + a[i];
    }
    
    for(ll i = n - 1 ; i >= 0 ; i--){
        ll t = 0;
        for(ll j = i + 1 ; j < n ; j++){
            if( a[i] > a[j]) t = max(t,dr[j]);
        }
        dr[i] = t + a[i];
    }
    ll s = 0;
    for(ll i = 0 ; i < n ; i++) s = max(dp[i] + dr[i] - a[i],s);
    cout << s <<endl;
}
int main(){
    ll t;
    cin >> t;
    while( t-- ){
        cin >> n ; 
		a.resize(n);
    	for(ll i = 0 ; i < n ; i++) cin >> a[i];
        Handle();
    }
    return 0;
}
