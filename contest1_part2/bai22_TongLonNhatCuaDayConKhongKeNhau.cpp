#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;
void Res(){
    int n;
    cin>>n;
    ll a[n+1],f[n+5];
    For(i,1,n) cin>>a[i];
    f[0]=0;f[1]=a[1];
    if(n>1) f[2]=a[2];
    for(int i=3;i<=n;i++){
        f[i]=max(a[i]+f[i-2],a[i]+f[i-3]);
    }
    cout<<max(f[n],f[n-1])<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
