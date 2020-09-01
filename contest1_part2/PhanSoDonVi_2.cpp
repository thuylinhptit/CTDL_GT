#include<bits/stdc++.h>
#define ll long long 

using namespace std;

void init(ll n , ll d){
    if(d == 0 || n == 0) return;
    if(d % n == 0){
		cout << "1/"<< d/n << endl;
		return;
	}
    if (n%d == 0){
		cout << n/d; 
		return; 
	} 
    if (n > d){
		cout << n/d << " + "; 
		init(n%d, d); 
		return; 
	} 
    ll tmp = (d / n) +1;
    cout << "1/" << tmp <<" + ";
    init(n*tmp - d ,d*tmp);
}

int main(){
    ll t; 
	cin >> t;
    while(t--){
        ll n , d ; 
        cin >> n >> d;
        init(n,d);
    }
    return 0;
}
