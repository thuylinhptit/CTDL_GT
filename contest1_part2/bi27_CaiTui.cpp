#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int f[1234][1234];
void Res(){
    int n,m;
    cin>>n>>m;
    int w[n+2],c[n+2];
    For(i,1,n) cin>>w[i];
    For(i,1,n) cin>>c[i];
    for(int i=0;i<=m;i++) f[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            f[i][j]=f[i-1][j];
            if(w[i]<=j){
                f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+c[i]);
            }
        }
    }
    cout<<f[n][m]<<endl;
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
