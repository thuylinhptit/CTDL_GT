#include<bits/stdc++.h>
#define ll long long 
using namespace std; 

int main(){
	ll k;
	string a, b;
	vector<ll> ans;
    cin >> k >> a >> b;
    ll n = 0;
   	ll m = 0;
   	for (ll i = 0 ; i < a.length(); i++) {
   		n = n * k + (a[i] - '0');
   	}
   	for (ll i = 0 ; i < b.length(); i++) {
   		m = m * k + (b[i] - '0');
   	}
   	ll res = n + m;
   	while (res) {
   		ans.push_back(res % k);
   		res /= k;
   	}
   	for (ll i = ans.size() - 1 ; i >= 0; i--) {
   		cout << ans[i];
   	}
}

