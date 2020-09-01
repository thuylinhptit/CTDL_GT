#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int n,m;
    cin>>n>>m;
    int a[n+5],b[m+5];
    ll f[n+m+10]={0};
    For(i,1,n) cin>>a[i];
    For(i,1,m) cin>>b[i];
    For(i,1,n){
        For(j,1,m){
            f[i+j] += a[i]*b[j];
        }
    }
    For(i,2,n+m) cout<<f[i]<<" ";
    cout<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
