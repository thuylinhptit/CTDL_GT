#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll k ;
ll T;
string s;
ll a[257];

void nhap(){
	cin >> k >> s;
	for(ll i = 0 ; i < 257 ; i++) a[i] = 0;
	for(ll i = 0 ; i < s.length() ; i++) a[s[i]]++; 
}

bool res(){
	ll n = s.length();
	sort(a , a + 257);
	ll max = a[256]; // ki tu co lap lai so lan nhieu nhat
	ll vt = 0; // vi tri bat dau
	for(ll i = 1 ; i < max ; i++){
		vt = vt + k;
		if(vt > n) return false;
	}
	return true;
}
int main(){
	cin >> T;
	while(T--){
		nhap();
		if( res() == true) cout << "1"<<endl ; 
		else cout << "-1"<<endl ;
	}
}
