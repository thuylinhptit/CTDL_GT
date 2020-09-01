#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int n;
    cin>>n;
    ll f[n+10];
    f[1]=1;f[2]=2;f[3]=4;
    For(i,4,n) f[i]=f[i-1]+f[i-2]+f[i-3];
    cout<<f[n]<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
