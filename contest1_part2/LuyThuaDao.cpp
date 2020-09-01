#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
long long pow(long long a , long long b){
    if(b == 1) return a%mod;
    long long tmp = pow(a,b/2);
    tmp = tmp*tmp%mod;
    if( b % 2) return tmp*a%mod;
    return tmp;
}
long long kq(long long a){
    long long s = 0;
    while(a!=0){
        s = s*10 + a%10;
        a/=10;
    }
    return s;
}
  
int main(){
    long long t; 
    long long n,k;
	cin >> t;
    while(t--){
        cin >> n ;
    	cout << pow(n,kq(n)) << endl;

    }
    return 0;
}

