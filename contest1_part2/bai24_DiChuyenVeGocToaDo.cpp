#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int n,m;
    cin>>m>>n;
    ll f[30][30]={0};
    n++;m++;
    for(int i=1;i<=25;i++){
        f[i][1] = 1; f[1][i] = 1;
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            f[i][j] = f[i-1][j] + f[i][j-1];
        }
    }
    cout<<f[n][m]<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
