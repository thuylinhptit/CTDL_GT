#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
    int t; 
	cin >> t;
    while(t--){
        int n , k;
    	cin >> n >> k; //20 3
    	if(9*k < n) cout << -1;
    	else{
        	int d = n/9  , m = n%9; // 2 2
        	if(m == 0){
            	k = k - d + 1
            	if(k > 1){
                	cout << 1;
                	for( int i = 1; i < k-1 ; i++ ) cout <<0;
                	cout <<8;
            	}
            	else cout << 9;
            	for(int i=1; i< d; i++) cout << 9;
        	}
        	else{
            	k = k - d;
            	if(k > 1) cout << 1;
            	for(int i=1; i < k-1 ; i++) cout << 0;
            	if(k > 1)   cout << m-1;
            	else cout << m;
            	for(int i=1; i<= d ; i++)   cout << 9;
        	}
    	}
    	cout << endl;
    }
    return 0;
}
