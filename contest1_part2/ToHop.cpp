#include <bits/stdc++.h>
#define ll long long 

using namespace std;

ll mod = 1e9+7;
ll n,k;

ll power(ll a , ll b){
    if( b == 1 ) return a%mod;
    ll tmp = power( a, b/2 );
    tmp = tmp * tmp % mod;
    if( b % 2 == 1 ) return tmp*a%mod;
    return tmp%mod;
}
ll ToHop(ll n , ll k){
    ll res = 1;
    for(ll i = 1;  i <= k ; i++){
        res = res*n%mod*power(i,mod-2)%mod;
        n--;
    }
    return res;
}

int main(){
    int t = 1;
    cin >> t;
    while( t-- ){
        cin >> n >> k;
        cout << ToHop(n,k) << '\n';
    }
    return 0;
}
