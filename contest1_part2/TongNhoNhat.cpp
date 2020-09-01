#include <bits/stdc++.h>
#define ll long long
 
using namespace std; 

ll solve(ll arr[], int n) 
{ 
    sort(arr, arr + n); 
    ll a = 0, b = 0; 
    for (ll i = 0; i < n; i++) 
    { 
        if (i & 1) 
            a = a*10 + arr[i]; 
        else
            b = b*10 + arr[i]; 
    }  
    return a + b; 
} 
int main() 
{ 
    ll t;
    cin>>t;
    while( t-- ){
    	ll n;
    	cin>>n;
    	ll a[n+5];
    	for( ll i=0; i<n ;i++ ) cin>>a[i];
    	cout<<solve(a,n)<<endl;
	}
    return 0; 
} 
