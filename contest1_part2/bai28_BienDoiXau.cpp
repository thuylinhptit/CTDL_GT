#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    string a,b;
    cin>>a>>b;
    int n=a.length(),m=b.length();
    int f[n+5][m+5];          
    memset(f,0,sizeof(f));
    for(int i=0;i<=m;i++) f[0][i]=i; 
    for(int i=0;i<=n;i++) f[i][0]=i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]) f[i][j] = f[i-1][j-1];
            else {
                f[i][j] = min(f[i-1][j-1],min(f[i-1][j],f[i][j-1])) + 1;
            }
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
