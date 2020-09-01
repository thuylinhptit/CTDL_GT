#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll t;
    ll n,k;
	cin >> t;
    while(t--){
        cin >> n >> k;
    	ll i = 1;
    	while( (k-i) % (i*2) != 0 ) i <<= 1;
    	cout << log2(i) + 1 << endl;
    }
    return 0;
}
