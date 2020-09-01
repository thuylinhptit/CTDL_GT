#include<bits/stdc++.h>
#define ll long long

using namespace std;

int mod = 123456789;
ll pow(ll a, ll b, ll m) {
    ll r = 1;
    while (b) {
		if (b & 1) r = (r % m) * a % m; 
	//	cout<<r<<endl;
		a %= m; 
		a = a * a % m; 
		b >>= 1;
	} 
    return r;
}

int main(){
    ll t; 
    ll n;
	cin >> t;
    while(t--){
        cin >> n;
    	cout << pow(2, n - 1, mod) << endl;

    }
    return 0;
}

