#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const ll mod = 1e9 + 7;

ll Mu (ll a , ll b){
    if(b == 1) return a%mod;
    ll tmp = Mu(a,b/2);
    tmp = tmp*tmp%mod;
    if( b % 2) return tmp*a%mod;
    return tmp;
}

int main(){
    ll t; 
	cin >> t;
    while(t--){
       ll n,k;
    	cin >> n >> k;
    	cout << Mu(n,k) << endl;
    }
    return 0;
}
