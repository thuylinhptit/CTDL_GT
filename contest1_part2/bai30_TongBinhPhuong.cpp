#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int n;
    cin>>n;
    int x=sqrt(n);
    if(x*x==n) cout<<1;
    else{
        int f[n+5];
        For(i,0,3) f[i]=i;
        for(int i=4;i<=n;i++){
            f[i] = i;
            for(int j=1;j<=sqrt(i);j++){
                f[i]=min(f[i],f[i-j*j]+1);
            }
        } 
        cout<<f[n];
    }
    cout<<'\n';
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
