#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

const int p = 1e9+7;
void Res(){
    int n,k;
    cin>>n>>k;
    int a[n+5];
    For(i,1,n) cin>>a[i];
    vector<ll> f(k+5,0);
    f[0] = 1;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(i>=a[j]) f[i] += f[i-a[j]], f[i]%=p;;
        }
    }
    cout<<f[k]<<'\n';
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
