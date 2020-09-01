#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int t,n,x,y,z;
    cin>>n>>x>>y>>z;
    int f[105]={0};
    f[1] = x;
    for(int i=2;i<=n;i++){
        if(i&1){
            f[i] = min(f[i-1]+x,f[(i+1)/2] + z + y);
        }
        else{
            f[i]=min(f[i-1]+x,f[i/2]+z);
        }
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
