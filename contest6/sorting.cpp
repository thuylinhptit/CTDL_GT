#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const ll N = 1e5+5;
pair<ll,ll> a[N];
ll n,k;

void init(){
	cin >> n ;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i].first;
        a[i].second = i;
   	}
}

void Handle(){
    sort(a,a+n);
    ll ans = 0;
    ll check[n] = {0};
    for (ll i = 0; i < n; i++) { 
        if (check[i] == 1 || a[i].second == i) 
            continue; 
        ll c = 0; 
        ll j = i; 
        while (check[j] == 0){ 
            check[j] = 1; 
            j = a[j].second; 
            c++; 
        } 
        if (c > 0) ans += (c - 1);
    } 
    cout << ans;
}
int main(){
    ll t=1; 
    cin>>t; 
    while(t--){ 
        init();
        Handle();
        cout<<endl;
    }
    return 0;
}
