#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll n,k,x;
vector<ll> a;

int main(){
    ll t, check; 
	cin >> t;
    while(t--){
    	check =0;
        cin >> n >> k;
    	a.resize(n);
    	for(ll i=0; i<n ;i++ ) cin >> a[i];
    	ll l = 0 , r = n - 1, mid;
    	while( l <= r){
        	mid = l+r >> 1;
        	if(a[mid] == k){
            	cout << mid + 1<< endl;
            	check=1;
            	break;
        	}
        	else if ( a[mid] > k) r = mid - 1;
        	else l = mid + 1;
    	}
    	if( check == 0 ) cout << "NO" << endl;

    }
    return 0;
}

