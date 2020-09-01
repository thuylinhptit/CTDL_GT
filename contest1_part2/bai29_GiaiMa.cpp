#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    string s;
    cin>>s;
    if(s[0]=='0') {
		cout<<0<<endl;
		return;
		}
    int n=s.length();
    vector<ll> f(n+5,0); 
    f[0] = 1;
    f[1] = 1;
    for(int i=2;i<=n;i++){
        if(s[i-1]>'0') f[i] = f[i-1];
        if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6')) f[i] += f[i-2];
    }    
    cout<<f[n]<<endl;
}
int main(){
  
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
