#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll t; 
	cin >> t;
    while(t--){
        ll n; 
	    cin >> n;
    	ll a[n];
    	for(ll i = 0 ; i < n ; i++) cin >> a[i];
		sort(a,a+n);
    	ll res = n , mid = n/2;
    	for(ll i = 0; i < n/2 && mid < n; i++ ){
        	while(mid < n){
           	 	if(2*a[i] <= a[mid]){
                	res--;
                	mid++;
                	break;
            	}
            	else mid++;
        	}
		}
    	cout<< res << endl;

    }
    return 0;
}
