#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod = 1e9 + 7;

void Handle(ll n,ll k){
    if( n < k){
        cout << 0 <<endl;
        return;
    }
    ll s = 1;
    for(int i = n - k + 1 ; i <= n ; i++)
        s = s*i%mod;
    cout << s <<endl;
}
int main(){
    int t;
    ll n, k;
    cin >> t;
    while( t-- ){
        cin >> n >> k;
        Handle(n,k);
    }
    return 0;
}
