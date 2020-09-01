#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll f[93];
ll n , k;
char fibo(ll n , ll k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= f[n-2]) return fibo(n-2 , k); 
	else return fibo(n-1 , k - f[n-2]);
}
int main(){
	ll T;
	cin >> T;
	f[1] = 1;
	f[2] = 1;
	for(ll i = 3 ; i <= 92 ; i++) 
		f[i] = f[i-1] + f[i-2];
	while(T--){
		cin >> n >> k;
		cout << fibo(n , k) << endl;
	}
}
