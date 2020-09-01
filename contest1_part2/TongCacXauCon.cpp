#include <bits/stdc++.h>
#define ll long long 

using namespace std;

string s;
ll StrToNum(string a){
    ll s = 0;
    for(ll i = 0 ; i < a.length() ; i++){
        s = s*10 + (a[i]-'0');
    }
    return s;
}
void Handle(){
    ll n = s.length();
    ll res = 0;
    for(ll len = n ; len >= 1 ; len--){
        for(ll i = 0 ; i <= n - len ; i++){
            string a = s.substr(i,len);
            res += StrToNum(a);
        }
    }
    cout << res <<endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        cin>>s;
        Handle();
    }
    return 0;
}
