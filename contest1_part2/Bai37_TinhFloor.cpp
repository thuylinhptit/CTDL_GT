#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;
int n;
int Find(ll a[],int l,int r,ll x){
    if(x<a[l]||x>a[r]) return -1;
    if(l>r || r>n) return -1;
    int m=l+(r-l)/2;
    if(a[m]<=x&&a[m+1]>=x) return m;
    if(x<a[m]) return Find(a,l,m-1,x);
    return Find(a,m+1,r,x);
}

void Res(){
    ll x;
    cin>>n>>x;
    ll a[n+10];
    For(i,1,n) cin>>a[i];
    cout<<Find(a,1,n,x)<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
