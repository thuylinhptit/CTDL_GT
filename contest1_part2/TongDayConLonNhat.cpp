#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n;
vector<int> a;
int main(){
    int t; 
	cin >> t;
    while(t--){
        cin >> n ; 
        ll res = 0,sum = 0;
		a.resize(n);
    	for(int i=0; i<n ; i++ ) cin >> a[i];

    	if(*max_element(a.begin(),a.end()) < 0){
        	cout << *max_element(a.begin(),a.end()) << '\n';
        	break;
    	}
    	
    	for(ll i = 0 ; i < n ; i++){
        	sum += a[i];
        	if( sum < 0) sum = 0;
        	else res = max(res,sum);
    	}
    	cout << res << '\n';

    }
    return 0;
}
